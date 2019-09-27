int num1, num2;
int answer;
char op;

void setup() {
	// put your setup code here, to run once:
	Serial.begin(9600);
	Serial.println("Podaj rownanie");
}

void loop() {
	// put your main code here, to run repeatedly:
	while(Serial.available()==0){

	}
	num1 = Serial.parseInt();
	op = Serial.read();
	num2 = Serial.parseInt();
	answer = calc();
	Serial.print(num1);
	Serial.print(" ");
	Serial.print(op);
	Serial.print(" ");
	Serial.print(num2);
	Serial.print(" ");
	Serial.print("=");
	Serial.print(" ");
	Serial.print(answer);
}

int calc(){
	switch(op){
		case '+':
			return num1+num2;
			break;
		case '-':
			return num1-num2;
			break;
		case '*':
			return num1*num2;
			break;
		case '/':
			return num1/num2;
			break;
		default:
			// If the operator is other than +, -, * or /, error message is shown
			return "Error! operator is not correct";
			break;
	}
	return 0;
}