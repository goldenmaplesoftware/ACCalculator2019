#include <stdio.h>
#include <string.h>
#include <math.h>
#include <complex.h>
#define PI 3.14159265358979323846

///FUNCTIONAL LIBARY:
////RECTANGULAR VALUE EXPRESSION:
float rectangularvalue(float realpart, float imaginarypart) {
	float zvalue = 0;
	struct complex
	{
		float realpart, imaginarypart;///Variable members of nR+nI
	};
	printf("RECTANGULAR FORM REFERENCE:\n");
	struct complex z1;
	printf("Enter the ohmic reactive value of quantity zn\n");
	scanf_s(" %f", &z1.realpart);
	printf("Enter the imaginary reactive value of quantity i\n");
	scanf_s(" %f", &z1.imaginarypart);
	printf("Reactive Value inputed is equal to: %f + %fi\n ", z1.realpart, z1.imaginarypart);
	return zvalue;
}  ///THIS IS THE COMPLEX Z-RECTANGULAR FUNCTION TO CALL
////RECTANGULAR SUMMATION: 
float rectangularvaluesum(float zvaluesummation) {
	struct complex
	{
		float realpart, imaginarypart;
	};

	struct complex z1, z2, zt;
	printf("RECTANGULAR FORM SUMMATION:\n");
	printf("Enter the ohmic reactive value of quantity zan\n");
	scanf_s(" %f", &z1.realpart);
	printf("Enter the imaginary reactive value of quantity ai\n");
	scanf_s(" %f", &z1.imaginarypart);
	printf("Reactive Value inputed is equal to: %f + %fi\n ", z1.realpart, z1.imaginarypart);

	printf("Enter the ohmic reactive value of quantity zbn\n");
	scanf_s(" %f", &z2.realpart);
	printf("Enter the imaginary reactive value of quantity bi\n");
	scanf_s(" %f", &z2.imaginarypart);
	printf("Reactive Value inputed is equal to: %f + %fi\n ", z2.realpart, z2.imaginarypart);

	zt.realpart = z1.realpart + z2.realpart;
	zt.imaginarypart = z1.imaginarypart + z2.imaginarypart;
	if (zt.imaginarypart >= 0)
		printf("Summation of rectangular form phasor = %f + %fi", zt.realpart, zt.imaginarypart);
	else
		printf("Summation of rectangular form phasor = %f %fi", zt.realpart, zt.imaginarypart);
	return zvaluesummation;
}
////RECTANGULAR DIFFERENCE: 
float rectangularvaluedifference(float zvaluedifference) {
	struct complex
	{
		float realpart, imaginarypart;
	};

	struct complex z1, z2, zt;
	printf("RECTANGULAR FORM DIFFERENCE:\n");
	printf("Enter the ohmic reactive value of quantity zan\n");
	scanf_s(" %f", &z1.realpart);
	printf("Enter the imaginary reactive value of quantity ai\n");
	scanf_s(" %f", &z1.imaginarypart);
	printf("Reactive Value inputed is equal to: %f + %fi\n ", z1.realpart, z1.imaginarypart);

	printf("Enter the ohmic reactive value of quantity zbn\n");
	scanf_s(" %f", &z2.realpart);
	printf("Enter the imaginary reactive value of quantity bi\n");
	scanf_s(" %f", &z2.imaginarypart);
	printf("Reactive Value inputed is equal to: %f + %fi\n ", z2.realpart, z2.imaginarypart);

	zt.realpart = z1.realpart - z2.realpart;
	zt.imaginarypart = z1.imaginarypart - z2.imaginarypart;
	if (zt.imaginarypart >= 0)
		printf("Difference of rectangular form phasor z= %f + %fi", zt.realpart, zt.imaginarypart);
	else
		printf("Difference of rectangular form phasor z= %f %fi", zt.realpart, zt.imaginarypart);
	return zvaluedifference;
}
////RECTANGULAR PRODUCT: 
float rectangularvalueproduct(float zvalueproduct) {
	struct complex
	{
		float realpart, imaginarypart;
	};

	struct complex z1, z2, zt;
	printf("RECTANGULAR FORM PRODUCT:\n");
	printf("Enter the ohmic reactive value of quantity zan\n");
	scanf_s(" %f", &z1.realpart);
	printf("Enter the imaginary reactive value of quantity ai\n");
	scanf_s(" %f", &z1.imaginarypart);
	printf("Reactive Value inputed is equal to: %f + %fi\n ", z1.realpart, z1.imaginarypart);

	printf("Enter the ohmic reactive value of quantity zbn\n");
	scanf_s(" %f", &z2.realpart);
	printf("Enter the imaginary reactive value of quantity bi\n");
	scanf_s(" %f", &z2.imaginarypart);
	printf("Reactive Value inputed is equal to: %f + %fi\n ", z2.realpart, z2.imaginarypart);
	zt.realpart = ((z1.realpart * z2.realpart) - (z1.imaginarypart * z2.imaginarypart));
	zt.imaginarypart = ((z1.imaginarypart * z2.realpart) + (z1.realpart * z2.imaginarypart));
	if (zt.imaginarypart >= 0)
		printf("Product of rectangular form phasor z= %f + %fi", zt.realpart, zt.imaginarypart);
	else
		printf("Product of rectangular form phasor z= %f %fi", zt.realpart, zt.imaginarypart);
	return zvalueproduct;
}
////RECTANGULAR QUOTIENT:
float rectangularvaluequotient(float zvaluequotient) {
	struct complex
	{
		float realpart, imaginarypart;
	};
	float zta, ztb, ztc;
	struct complex z1, z2;
	printf("RECTANGULAR FORM QUOTIENT:\n");
	printf("Enter the ohmic reactive value of quantity zan\n");
	scanf_s(" %f", &z1.realpart);
	printf("Enter the imaginary reactive value of quantity ai\n");
	scanf_s(" %f", &z1.imaginarypart);
	printf("Reactive Value inputed is equal to: %f + %fi\n ", z1.realpart, z1.imaginarypart);

	printf("Enter the ohmic reactive value of quantity zbn\n");
	scanf_s(" %f", &z2.realpart);
	printf("Enter the imaginary reactive value of quantity bi\n");
	scanf_s(" %f", &z2.imaginarypart);
	printf("Reactive Value inputed is equal to: %f + %fi\n ", z2.realpart, z2.imaginarypart);
	if (z2.realpart == 0 && z2.imaginarypart == 0)
	{
		printf("DIVISION BY ZERO IS NOT POSSIBLE!");
	}

	else {

		zta = ((z1.realpart * z2.realpart) + (z1.imaginarypart * z2.imaginarypart));
		ztb = ((z1.imaginarypart * z2.realpart) - (z1.realpart * z2.imaginarypart));
		ztc = ((z2.realpart * z2.realpart) + (z2.imaginarypart * z2.imaginarypart));

		if (zta / ztc == 0 && ztb / ztc == 0)
		{
			if (ztb / ztc >= 0)
				printf("QUOTIENT IN RECTANGULAR FORM: z = %f + %fi", zta / ztc, ztb / ztc);
			else
				printf("QUOTIENT IN RECTANGULAR FORM: z= %f %fi", zta / ztc, ztb / ztc);
		}

		else if (zta / ztc == 0 && ztb / ztc != 0)
		{
			if (ztb / ztc >= 0)
				printf("QUOTIENT IN RECTANGULAR FORM:  z = %f + %f/%fi", zta / ztc, ztb, ztc);
			else
				printf("QUOTIENT IN RECTANGULAR FORM: Z= %f %f/%fi", zta / ztc, ztb, ztc);
		}

		else if (zta / ztc != 0 && ztb / ztc == 0)
		{
			if (ztb / ztc >= 0)
				printf("QUOTIENT IN RECTANGULAR FORM: z = %f/%f + %fi", zta, ztc, ztb / ztc);
			else
				printf("QUOTIENT IN RECTANGULAR FORM: z = %f %f/%fi", zta, ztc, ztb / ztc);
		}
		else
		{

			if (ztb / ztc >= 0) {
				printf("QUOTIENT IN RECTANGULAR FORM: z= %f/%fi + %f/%fi", zta, ztc, ztb, ztc);
			}
			else {
				printf("QUOTIENT IN RECTANGULAR FORM: z= %f/%fi  %f/%fi", zta, ztc, ztb, ztc);
			}
		}

		return zvaluequotient;

	}
}

int main() {
	double radTodeg = (180.0 / PI);
	double degTorad = (PI / 180.0);
	int input;
	double totalresistance;
	printf("*****CIRCUIT ANALYZZER VERSION 2.0:*****\n      SNAKER96/SNAKER&&SONS APRIL 2019 \n");
	printf("***************SELECTION:***************\n[1] Total Resistance\n [2] Total Capicative Reactance\n [3] Total Inductance \n [4] Total RLC Reactance \n [5] Power Circuit [ST,PT,QT,FP] \n ");
	scanf_s("%d", &input);
	switch (input) {
	case 1:///Normal Resistor Circuit with AC value
		float sourcevoltage, frequency, totalresistance = 0;
		printf("Enter the source voltage Es=");
		scanf_s("%f", &sourcevoltage);
		printf("Enter the frequency f=");
		scanf_s("%f", &frequency);
		printf("f=%.4f Hz \n Es=%.4f Volts\n", frequency, sourcevoltage);
		double seriestotalresistance = 0;
		int seriesresistoramount = 1, i;
		float seriesresistorvalue;
		printf("\n\n\nResistor amount in series input: \n\n\n");
		printf("         ____________________________________                                                                      \n");
		printf("         |                                  |                                \n");
		printf("         |                                  |     Es= %.4fV                               \n", sourcevoltage);
		printf("         |                                 (~)    f=  %.4fHz                              \n", frequency);
		printf("         |                                  |                                \n");
		printf("         |                                  |                                \n");
		printf("         |----------VVVV----VVVV------------|         \n");
		printf("          RtSeries=( Ri  +   Rf )           T         \n");
		printf("                                            |         \n");
		printf("                                            _   \n");
		printf("                                            - GND[-]  \n\n\n\n\n");
		printf("How many resistors are there placed in series?\n");
		scanf_s("%d", &seriesresistoramount);
		for (i = 1; i <= seriesresistoramount; i++) {
			printf("Rs(%d)=", i);
			scanf_s("%f", &seriesresistorvalue);
			seriestotalresistance += seriesresistorvalue;
		}
		printf("Total Resistance in series is equal to %.4f ohms+0i\n\n", seriestotalresistance);
		///********************************************************************************
		double paralleltotalresistance = 0.000000000000000000000000000001, equivlantresistance = 0.0;
		int parallelresistoramount = 1, i2;
		float parallelresistorvalue;
		printf("\n\n\nResistor amount in parallel input: \n\n\n");
		printf("         ________________._________._________                  (1)                                                \n");
		printf("         |               |<=================|===Rtparallel=___________      \n");
		printf("         |               |   Ri    |    ||  |                  (1)          \n");
		printf("         |               |         |    ||  |             ______________   \n");
		printf("         |               |         |<===||  |              (Req=Ri||Rf)                   \n");
		printf("         |               V         V  Rf    |     Es= %.4fV                               \n", sourcevoltage);
		printf("         |               V         V       (~)    f=  %.4fHz                              \n", frequency);
		printf("         |               V         V        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |----------VVVV-.--VVVV---.--------|         \n");
		printf("         T       RtSeries=%.4fohms+0i                   \n", seriestotalresistance);
		printf("         |                                           \n");
		printf("         _                                           \n");
		printf("         - GND[-]                                    \n\n\n\n\n");
		scanf_s("%d", &parallelresistoramount);
		for (i2 = 1; i2 <= parallelresistoramount; i2++) {
			printf("Rp(%d)=", i2);
			scanf_s("%f", &parallelresistorvalue);
			equivlantresistance += 1 / (parallelresistorvalue);
		}
		paralleltotalresistance = (1 / equivlantresistance);
		printf("Total Resistance in Parallel is equal to %.4f ohms+0i\n", paralleltotalresistance);
		printf("\n\n\nResistor amount in parallel input: \n\n\n");
		printf("         ________________._________._________                                                                     \n");
		printf("         |               |<=================|===Rtparallel= %.4fohms+0i       \n", paralleltotalresistance);
		printf("         |               |   Ri    |    ||  |                               \n");
		printf("         |               |         |    ||  |                              \n");
		printf("         |               |         |<===||  |                                             \n");
		printf("         |               V         V  Rf    |     Es= %.4fV                               \n", sourcevoltage);
		printf("         |               V         V       (~)    f=  %.4fHz                              \n", frequency);
		printf("         |               V         V        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |----------VVVV-.--VVVV---.--------|         \n");
		printf("         T       RtSeries=%.4fohms+0i                   \n", seriestotalresistance);
		printf("         |                                           \n");
		printf("         _                                           \n");
		printf("         - GND[-]                                    \n\n\n\n\n");

		totalresistance = (paralleltotalresistance + seriestotalresistance);
		printf(" ************************************************************************************\n");
		printf("  . . [Total Resistance in Parallel+Total Resistance in Series]=The Total Resistance \n");
		printf("   .  [      (%.4fohn +0i)         +      (%.4fohm +0i)       ]=%.4fohm+0i\n                      ", paralleltotalresistance, seriestotalresistance, totalresistance);
		printf("**************************************************************************************\n");

		break;

		///********************************************************************************

	case 2: ///C-Circuit
		float sourcevoltage2, frequency2, totalcapreact = 0;
		printf("Enter the source voltage Es=");
		scanf_s("%f", &sourcevoltage2);
		printf("Enter the frequency f=");
		scanf_s("%f", &frequency2);
		printf("f=%.4f Hz \n Es=%.4f Volts\n", frequency2, sourcevoltage2);
		double  totalseriescapreact = 0, reactcapseries = 0;
		int seriescapamount = 1, zcamount;///Amount of capicators and increment it increases by Cn
		float seriescapvalue;
		printf("\n\n\nCapicator amount in series input: \n\n\n");
		printf("         ____________________________________                                                                      \n");
		printf("         |                                  |                                \n");
		printf("         |                                  |     Es= %.4fV                               \n", sourcevoltage2);
		printf("         |                                 (~)    f=  %.4fHz                              \n", frequency2);
		printf("         |                                  |                                \n");
		printf("         |                                  |                                \n");
		printf("         |----------|(------|(--------------|         \n");
		printf("         XCtSeries=(XCi  +  XCf )           T         \n");
		printf("                                            |         \n");
		printf("                                            _   \n");
		printf("                                            - GND[-]  \n\n\n\n\n");
		printf("How many capicators are there placed in series?\n");
		scanf_s("%d", &seriescapamount);
		for (zcamount = 1; zcamount <= seriescapamount; zcamount++) {
			printf("Cs(%d)=", zcamount);
			scanf_s("%f", &seriescapvalue);
			reactcapseries = (1 / (2 * PI * frequency2 * seriescapvalue));
			totalseriescapreact += reactcapseries;
		}
		printf("Total Reactance in series is equal to %f ohms-i\n\n", totalseriescapreact);
		///********************************************************************************
		double paralleltotalcap = 0.000000000000000000000000000001, equivlantcap = 0.0;
		int parallelcapamount = 1, zamount2;
		float parallelcapvalue;
		printf("\n\n\nCapicator amount in parallel input: \n\n\n");
		printf("         ________________._________._________                  (1)                                                \n");
		printf("         |               |<=================|===XCparallel=___________      \n");
		printf("         |               |  XCi    |    ||  |                  (1)          \n");
		printf("         |               |         |    ||  |             ______________   \n");
		printf("         |               |         |<===||  |             ( XCeq=XCi||XCf)                   \n");
		printf("         |               U         U XCf    |     Es= %.4fV                               \n", sourcevoltage2);
		printf("         |               _         _       (~)    f=  %.4fHz                              \n", frequency2);
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |----------|(---.--|(-----.--------|         \n");
		printf("         T       XCSeries=%.4fohms-i                   \n", totalseriescapreact);
		printf("         |                                           \n");
		printf("         _                                           \n");
		printf("         - GND[-]                                    \n\n\n\n\n");
		printf("How many capicators are there placed in parallel?\n");

		scanf_s("%d", &parallelcapamount);
		for (zamount2 = 1; zamount2 <= parallelcapamount; zamount2++) {
			printf("XCp(%d)=", zamount2);
			scanf_s("%f", &parallelcapvalue);
			equivlantcap += (1 / (1 / (2 * PI * frequency2 * parallelcapvalue)));
		}
		paralleltotalcap = (1 / equivlantcap);
		printf("Total Reactance in Parallel is equal to %.4f ohms-i\n", paralleltotalcap);
		printf("\n\n\nCapicator amount in parallel input: \n\n\n");
		printf("         ________________._________._________                                                                     \n");
		printf("         |               |<=================|===XCtparallel= %.4fohms+0i       \n", paralleltotalcap);
		printf("         |               |  XCi    |    ||  |                               \n");
		printf("         |               |         |    ||  |                              \n");
		printf("         |               |         |<===||  |                                             \n");
		printf("         |               _         _ XCf    |     Es= %.4fV                               \n", sourcevoltage2);
		printf("         |               U         U       (~)    f=  %.4fHz                              \n", frequency2);
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |----------|(---.--|(-----.--------|         \n");
		printf("         T      XCtSeries=%.4fohms-i                   \n", totalseriescapreact);
		printf("         |                                           \n");
		printf("         _                                           \n");
		printf("         - GND[-]                                    \n\n\n\n\n");
		totalcapreact = (paralleltotalcap + totalseriescapreact);
		printf(" ************************************************************************************\n");
		printf("  . . [Total Reactance in Parallel+Total Reactance in Series]=The Total Reactance \n");
		printf("   .  [      (%.4fohn -i)         +      (%.4fohm -i)       ]=%.4fohm-i\n                      ", paralleltotalcap, totalseriescapreact, totalcapreact);
		printf("**************************************************************************************\n");
		break;
	case 3: ///L_Circuit
		float sourcevoltage3, frequency3, totalcapreact2 = 0;
		printf("Enter the source voltage Es=");
		scanf_s("%f", &sourcevoltage3);
		printf("Enter the frequency f=");
		scanf_s("%f", &frequency3);
		printf("f=%.4f Hz \n Es=%.4f Volts\n", frequency3, sourcevoltage3);
		double  totalseriescapreact2 = 0, reactcapseries2 = 0;
		int seriescapamount2 = 1, zcamount3;///Amount of inductors and increment it increases by Ln
		float seriescapvalue2;
		printf("\n\n\nInductor amount in series input: \n\n\n");
		printf("         ____________________________________                                                                      \n");
		printf("         |                                  |                                \n");
		printf("         |                                  |     Es= %.4fV                               \n", sourcevoltage3);
		printf("         |                                 (~)    f=  %.4fHz                              \n", frequency3);
		printf("         |                                  |                                \n");
		printf("         |                                  |                                \n");
		printf("         |---------~~~~-----~~~~------------|         \n");
		printf("         XLtSeries=(XLi  +  XLf )           T         \n");
		printf("                                            |         \n");
		printf("                                            _   \n");
		printf("                                            - GND[-]  \n\n\n\n\n");
		printf("How many inductors are there placed in series?\n");
		scanf_s("%d", &seriescapamount2);
		for (zcamount3 = 1; zcamount3 <= seriescapamount2; zcamount3++) {
			printf("Ls(%d)=", zcamount3);
			scanf_s("%f", &seriescapvalue2);
			reactcapseries2 = ((2 * PI * frequency3 * seriescapvalue2));
			totalseriescapreact2 += reactcapseries2;
		}
		printf("Total Reactance in series is equal to %f ohms-i\n\n", totalseriescapreact2);
		///********************************************************************************
		double paralleltotalcap2 = 0.000000000000000000000000000001, equivlantcap2 = 0.0;
		int parallelcapamount2 = 1, zamount4;
		float parallelcapvalue2;
		printf("\n\n\nInductor amount in parallel input: \n\n\n");
		printf("         ________________._________._________                  (1)                                                \n");
		printf("         |               |<=================|===XLparallel=___________      \n");
		printf("         |               |  XLi    |    ||  |                  (1)          \n");
		printf("         |               |         |    ||  |             ______________   \n");
		printf("         |               |         |<===||  |             ( XLeq=XLi||XLf)                   \n");
		printf("         |               3         3 XLf    |     Es= %.4fV                               \n", sourcevoltage3);
		printf("         |               3         3       (~)    f=  %.4fHz                              \n", frequency3);
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |---------~~~~--.--~~~~---.--------|         \n");
		printf("         T       XCSeries=%.4fohmsi                   \n", totalseriescapreact2);
		printf("         |                                           \n");
		printf("         _                                           \n");
		printf("         - GND[-]                                    \n\n\n\n\n");
		printf("How many inductors are there placed in parallel?\n");
		scanf_s("%d", &parallelcapamount);
		for (zamount4 = 1; zamount4 <= parallelcapamount; zamount4++) {
			printf("Lp(%d)=", zamount4);
			scanf_s("%f", &parallelcapvalue2);
			equivlantcap2 += (1 / ((2 * PI * frequency2 * parallelcapvalue2)));
		}
		paralleltotalcap2 = (1 / equivlantcap2);
		printf("Total Reactance in Parallel is equal to %.4f ohms-i\n", paralleltotalcap2);
		printf("\n\n\nResistor amount in parallel input: \n\n\n");
		printf("         ________________._________._________                                                                     \n");
		printf("         |               |<=================|===XLtparallel= %.4fohmsi       \n", paralleltotalcap2);
		printf("         |               |  XLi    |    ||  |                               \n");
		printf("         |               |         |    ||  |                              \n");
		printf("         |               |         |<===||  |                                             \n");
		printf("         |               3         3 XLf    |     Es= %.4fV                               \n", sourcevoltage3);
		printf("         |               3         3       (~)    f=  %.4fHz                              \n", frequency3);
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |               |         |        |                                \n");
		printf("         |---------~~~~--.-~~~~----.--------|         \n");
		printf("         T      XLtSeries=%.4fohmsi                   \n", totalseriescapreact2);
		printf("         |                                           \n");
		printf("         _                                           \n");
		printf("         - GND[-]                                    \n\n\n\n\n");

		totalcapreact2 = (paralleltotalcap2 + totalseriescapreact2);
		printf(" ************************************************************************************\n");
		printf("  . . [Total Reactance in Parallel+Total Reactance in Series]=The Total Reactance \n");
		printf("   .  [      (%.4fohn -i)         +      (%.4fohm -i)       ]=%.4fohm-i\n                      ", paralleltotalcap2, totalseriescapreact2, totalcapreact2);
		printf("**************************************************************************************\n");
		break;
	case 4: ///RLC Reactance and Circuit Solution
		printf("******************************************************************************\n");
		printf("RLC Circuit:\n\n\n");
		printf(" _________________________________________                                                                      \n");
		printf(" |                                       |                                \n");
		printf(" |                                      (~) AC[+]                          \n");
		printf(" |                                       |                                \n");
		printf(" |------|(------VVVVV------~~~~~---------|         \n");
		printf("        Cn        Rn        Ln           T         \n");
		printf("                                         |         \n");
		printf("                                         _   \n");
		printf("                                         - GND[-]  \n");
		printf("******************************************************************************\n");
		break;
	case 5: ///Power Triangle & Power Circuit
		int inputusercase5;
		printf("Input [1] if in Series Input\n [2] if in Parallel\n");
		scanf_s(" %d", &inputusercase5);
		if (inputusercase5 == 1) {

			printf("AC Power Circuit:\n\n\n");
			printf("    ___________________<__________________                                                                      \n");
			printf("    |                  I                 |                                \n");
			printf(" [Pn,Qn]                              [Pn,Qn] Sn                           \n");
			printf("    |                                    |                                \n");
			printf("    |                                    |                                \n");
			printf("    |                                   (~) AC[+]                          \n");
			printf("    |                                    |                                \n");
			printf("    L---[Pn,Qn]--------------------------|         \n");
			printf("                                         T         \n");
			printf("                                         |         \n");
			printf("                                         _   \n");
			printf("                                         - GND[-]  \n");

			double  totalseriespowreact1 = 0, reactpowseries1 = 0;
			int seriespowamount1 = 1, pcamount1;///Amount of inductors and increment it increases by Ln
			float seriespowvalue2;
			printf("How many power elements are there placed in series?\n");
			scanf_s("%d", &seriespowamount1);
			for (pcamount1 = 1; pcamount1 <= seriespowamount1; pcamount1++) {
				printf("Ps(%d)=", pcamount1);
				scanf_s("%f", &seriespowvalue2);
				totalseriespowreact1 += seriespowvalue2;
			}
			printf("Total of Wattage Power Elements is equal to %.4fW \n", totalseriespowreact1);
			double  totalseriesQreact1 = 0, reactQseries1 = 0;
			int seriesQamount1 = 1, Qcamount1;///Amount of inductors and increment it increases by Ln
			char Qcvalue;
			float seriesQvalue2;
			printf("\nHow many Q reactive elements are there placed in series?\n");
			scanf_s("%d", &seriesQamount1);
			for (Qcamount1 = 1; Qcamount1 <= seriesQamount1; Qcamount1++) {
				printf("Qs(%d)=", Qcamount1);
				scanf_s("%f", &seriesQvalue2);
				printf("Inductive or Capacitive value of Qn: [Type I for inductive Type C for capacitive\n");
				scanf_s(" %c", &Qcvalue);
				if (Qcvalue == 'I')
					totalseriesQreact1 += seriesQvalue2;
				else if (Qcvalue == 'C')
					totalseriesQreact1 -= (seriesQvalue2);
				else  printf("INVALID VALUE!!!");
			}
			///TOTAL ST,FP,I Current Calculations
			printf("Total of Q Reactive Elements is equal to %.4fVAR \n", totalseriesQreact1);
			float stvalue1 = 0;
			double StPower, totalpreact, totalqreact;
			double resultingangle = 0, resultingangle2 = 0;
			double StPowerFactor, StPowerFactor2;
			StPower = ((totalseriesQreact1) / (totalseriespowreact1));
			totalpreact = (totalseriespowreact1 * totalseriespowreact1);
			totalqreact = (totalseriesQreact1 * totalseriesQreact1);
			stvalue1 = (sqrt(totalpreact + totalqreact));
			resultingangle = (atan(StPower) * radTodeg);
			printf("APPARENT POWER CALCULATION:\n*************************************************\n");
			printf("inverse tan(%.4f) = %.4f\n", StPower, resultingangle);
			printf(" St= %.4f<%.4f\n", stvalue1, resultingangle);
			StPowerFactor = (cos(resultingangle));
			StPowerFactor2 = (StPowerFactor * degTorad);
			printf("POWER FACTOR CALCULATION:\n*************************************************\n");
			printf(" Fp=cos(%.4f)= %.4fradians\n", resultingangle, StPowerFactor);

			printf("                 _                                                                                             \n");
			printf("                / |                                                      \n");
			printf("              /   |                                                         \n");
			printf("      ST    /     | QT                                                     \n");
			printf("          /       |                                                        \n");
			printf("        /         |                                                         \n");
			printf("      /           |                                                         \n");
			printf("     /)0 ________[]                                \n");
			printf("          PT                                       \n");
			printf("                                                   \n");
			printf(" __________________________________________________________________                                            \n");
			printf(" [ST=%.4f| QT=%.4f| PT=%.4f| 0deg=%.4f|Fp=%.4f]      \n", stvalue1, totalseriesQreact1, totalseriespowreact1, resultingangle, StPowerFactor);
			printf(" -------------------------------------------------------------------                                            \n");


			///FINDING SOURCE CURRENT:
			float sourcevoltage4, frequency4;
			double sourcecurrentconj, sourcecurrentreal;
			printf("\n\n\n*** TOTAL SOURCE CURRENT ***\n\n\n");
			printf("Finding the Source Current\n");
			printf("Enter the source voltage Es=\n");
			scanf_s("%f", &sourcevoltage4);
			printf("Enter the frequency f=");
			scanf_s("%f", &frequency4);
			printf("f=%.4f Hz \n Es=%.4f Volts\n", frequency4, sourcevoltage4);
			sourcecurrentconj = ((stvalue1) / (sourcevoltage4));
			sourcecurrentreal = ((stvalue1) / (sourcevoltage4));
			printf("Is*=%.4fA<%.4f\n", sourcecurrentconj, resultingangle);
			resultingangle2 = (-1 * resultingangle);
			printf("Is=%.4fA<%.4f\n", sourcecurrentconj, resultingangle2);
			///FINDING THE CORRECTED CAPICATOR VALUE:
			double capicatorvaluepower, reactancecapicatancevaluepower, Qcapvalue, QPowerFactorCorrected, QPowerFactorAngleCorrected, QTotalPowerFactorCorrected;
			printf("What is the corrected value of Power Factor Fp to find Capicator value?\n");
			scanf_s("%f", &QPowerFactorCorrected);
			QPowerFactorAngleCorrected = voidcosine();
			printf("Fpcorrected=%f\n", QPowerFactorAngleCorrected);///Qp<
			QTotalPowerFactorCorrected = voidtangent();
			printf(" QT=%f\n", QTotalPowerFactorCorrected);///QT<
			Qcapvalue = (totalseriesQreact1 - QTotalPowerFactorCorrected);///(QT-Qp)
			reactancecapicatancevaluepower = ((sourcevoltage4 * sourcevoltage4) / (Qcapvalue));
			printf("Xc= %.4fohms\n", reactancecapicatancevaluepower);
			capicatorvaluepower = (1 / (2 * PI * frequency4 * reactancecapicatancevaluepower));
			printf("C= %.4fohms\n", capicatorvaluepower);




		}
		else if (inputusercase5 == 2) {
			printf("Power Circuit in Series:\n\n\n");
			printf("    _____.______________._________________                                                                   \n");
			printf("    |    |              |                ^ I                             \n");
			printf("    |    |              |                |                                \n");
			printf("    | [Pn,Qn]        [Pn,Qn]          [Pn,Qn] Sn                           \n");
			printf("    |    |              |                |                                \n");
			printf("    |    |              |                |                                \n");
			printf("    |    |              |               (~) AC[+]                          \n");
			printf("    |    |              |                |                                \n");
			printf("    |    |              |                |                                \n");
			printf("    |    |              |                |                                \n");
			printf("    L----.--------------.----------------|         \n");
			printf("                                         T         \n");
			printf("                                         |         \n");
			printf("                                         _   \n");
			printf("                                         - GND[-]  \n");
		}

		else {
			printf("INVALID!\n");
			break;
		}



		break;
	case 6:
		double value;
		double result;

		/* Assign the value we will find the cos of */
		value = 0.8;

		/* Calculate the Cosine of value */
		result = cos(value) * radTodeg;

		/* Display the result of the calculation */
		printf("The Cosine of %f is %f\n", value, result);

		break;

	default: printf("ERROR");
	}


}

voidcosine(x1)
{
	double result;
	scanf_s("%f", &x1);
	result = (cos(x1) * (180.0 / PI));
	return x1;
}
voidtangent(x2)///TANGENT
{
	double result;
	scanf_s("%f", &x2);
	result = (tan(x2) * (180.0 / PI));
	return x2;
}