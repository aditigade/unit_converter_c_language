    #include <stdio.h>
    void main()
    {
        // int variables for all the do while loops
        int ans,ansT,ansC,ansM,ansL;

        // char variable to store user's choice for conversion category
        char category;

        // variables for temperature conversion
        int tempChoice;
        int userinputF; // User input for Fahrenheit;
        int userinputC; // User input for Celcius;
        int fahrenheitToCelcius; // variable that stores the converted F->C;
        int celciusToFahrenheit; // variable that stores the converted C->F;
        int celciustokelvin; //variable that stores the converted C->k;
        int kelvientocelcius;//variable that stores the converted k->C;

        // variables for currency conversion
        int currencyChoice;
        int userinputEURtoINR; // User input for EUR;
        int userinputAEDtoINR; // User input for AED;
        int userinputUSDtoINR; // User input  for USD;
        float EURtoINR ; // variable that stores the converted USD->EURO;
        float AEDtoINR; // stores the converted USD->JPY;
        float USDtoINR; // stores the converted USD->INR;

        // variables for weight conversion
        int weightChoice;
        int userinputOunce; // User input for Ounce;
        int userinputpounds ; // User input for Gram;
        float ounceTograms; // stores the converted Ounce->Pounds;
        float PoundsTokilograms; // stores the converted Grams->Pounds;


        // variables for length conversion
        int lengthChoice;
        int userinputYRDtoMET; // User input for Yards;
        int userinputMILtoKMS; // User input for Miles;
        int userinputINCtoCMS; // User input for Inches;
        int userinputFTtoMET; // User input for Feet;
        float YRDtoMET ; // variable that stores the converted YRDtoMET;
        float MILtoKMS; // stores the converted MILtoKMS;
        float INCtoCMS; // stores the converted INCtoCMS;
        float FTtoMET; // stores the converted FT->MET;



        // prints welcome message
        printf("Welcome to Unit Converter! \n");
        do
        {
        printf("Here is a list of conversions to choose from: \n");
        printf("1.Temperature\n");
        printf("2.Currency\n");
        printf("3.Weight \n");
        printf("4.Length \n");
        printf("Please enter the number of choice you want to convert.\n");

        // scans user input for conversion category
        scanf("%d",&category);
        switch (category)
        {

            // temperature conversion
            case 1:
            {
                do
                {
                printf("Welcome to Temperature Converter! \n");
                printf("Here is a list of conversions to choose from: \n");
                printf("Enter 1 for Fahrenheit to Celsius. \n");
                printf("Enter 2 for Celsius to Fahrenheit. \n");
                printf("Enter 3 for Celcius to Kelvin. \n");
                printf("Enter 4 for Kelvin to Celcius.\n");

                // scans user input for type of temperature conversion
                scanf("%d",&tempChoice);

                // switch case for different types of temperature conversion
                switch (tempChoice)
                {
                    case 1:
                    {
                        printf("Please enter the Fahrenheit degree: \n");
                        scanf("%d",&userinputF);
                        fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
                        printf("Celcius: %d",fahrenheitToCelcius);
                    }
                    break;
                    case 2:
                    {
                        printf("Please enter the Celcius degree: \n");
                        scanf("%d",&userinputC);
                        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
                        printf("Fahrenheit: %d",celciusToFahrenheit);
                    }
                    break;
                    case 3:
                    {
                        printf("Please enter the Celcius degree:\n");
                        scanf("%d",&userinputC);
                        celciustokelvin= (userinputC +273.15);
                        printf("Kelvien: %d",celciustokelvin);
                    }
                    break;
                    case 4:
                    {
                        printf("Please enter the Kelvien degree:\n");
                        scanf("%d",&userinputC);
                        kelvientocelcius= (userinputC - 273.15);
                        printf("Celcius: %d",kelvientocelcius);
                    }
                    break;
                    default:
                        printf("Please enter the correct choice. \n");
                }printf("\nEnter 0 for the Temperature Menu.\n1 to EXIT\n");
                 scanf("%d",&ansT);
                }while(ansT==0);

            }
            break;

            case 2:
            {
                do
                {
                printf("Welcome to Currency Converter! \n");
                printf("Here is a list of conversions to choose from: \n");
                printf("Enter 1 for EUR to INR. \n");
                printf("Enter 2 for AED to INR. \n");
                printf("Enter 3 for USD to INR. \n");

                // scans user input for type of currency conversion
                scanf("%d",&currencyChoice);

                // switch case for different types of temperature conversion
                switch (currencyChoice)
                {
                    case 1:
                    {
                        printf("Please enter the EUR amount: \n");
                        scanf("%d",&userinputEURtoINR);
                        EURtoINR= userinputEURtoINR * 89.17;
                        printf("EUR: %.2f",EURtoINR); // %.2f = rounds the float to only 2 decimal places;
                    }
                    break;
                    case 2:
                    {
                        printf("Please enter the AED amount: \n");
                        scanf("%d",&userinputAEDtoINR);
                        AEDtoINR = userinputAEDtoINR * 22.33;
                        printf("INR: %.2f",AEDtoINR);
                    }
                    break;
                    case 3:
                    {
                        printf("Please enter the USD amount: \n");
                        scanf("%d",&userinputUSDtoINR);
                        USDtoINR = userinputUSDtoINR * 82.03;
                        printf("INR: %.2f",USDtoINR);
                    }
                    break;
                    default:
                        printf("Please enter correct choice. \n");
                }printf("\nEnter 0 for the Currency Menu\n1 to EXIT\n");
                 scanf("%d",&ansC);
                }while(ansC==0);
            }
            break;


            case 3:
            {
                do
                {
                printf("Welcome to Weight Converter! \n");
                printf("Here is a list of conversions to choose from: \n");
                printf("Enter 1 for Ounces to Grams. \n");
                printf("Enter 2 for Pounds to Kilograms. \n");

                // scans user input for type of weight conversion
                scanf("%d",&weightChoice);

                // switch case for different types of weight conversion
                switch (weightChoice)
                {
                    case 1:
                    {
                        printf("Please enter the ounce (oz) amount: \n");
                        scanf("%d",&userinputOunce);
                        ounceTograms = userinputOunce * 28.35;
                        printf("Pounds: %.2f",ounceTograms);
                    }
                    break;
                    case 2:
                    {
                        printf("Please enter the Pounds (lbs) amount: \n");
                        scanf("%d",&userinputpounds );
                        PoundsTokilograms = userinputpounds  * 0.454;
                        printf("Kilograms: %.2f",PoundsTokilograms);
                    }
                    break;
                    default:
                        printf("Please enter the correct choice. \n");
                }printf("\nEnter 0 for the Weight Menu\n1 to EXIT\n");
                 scanf("%d",&ansM);
                }while(ansM==0);
            }
            break;

            case 4:
            {
                do
                {
                printf("Welcome to Length Converter! \n");
                printf("Here is a list of conversions to choose from: \n");
                printf("Enter 1 for yards to meters. \n");
                printf("Enter 2 for miles to kilometers. \n");
                printf("Enter 3 for inches to centimeters. \n");
                printf("Enter 4 for feet to meters. \n");

                // scans user input for type of length conversion
                scanf("%d",&lengthChoice);

                // switch case for different types of length conversion
                switch (lengthChoice)
                {
                    case 1:
                    {
                        printf("Please enter the length in yards: \n");
                        scanf("%d",&userinputYRDtoMET);
                        YRDtoMET= userinputYRDtoMET * 0.914;
                        printf("Meters: %.2f",YRDtoMET); // %.2f = rounds the float to only 2 decimal places;
                    }
                    break;
                    case 2:
                    {
                        printf("Please enter the length in miles: \n");
                        scanf("%d",&userinputMILtoKMS);
                        MILtoKMS = userinputMILtoKMS * 1.609;
                        printf("Kilometers: %.2f",MILtoKMS);
                    }
                    break;
                    case 3:
                    {
                        printf("Please enter the length in inches: \n");
                        scanf("%d",&userinputINCtoCMS);
                        INCtoCMS = userinputINCtoCMS * 2.54;
                        printf("centimeters: %.2f",INCtoCMS);
                    }
                    break;

                    case 4:
                    {
                        printf("Please enter the length in feet: \n");
                        scanf("%d",&userinputFTtoMET);
                        FTtoMET = userinputFTtoMET * 0.305;
                        printf("Meters: %.2f",FTtoMET);
                    }
                    break;

                    default:
                        printf("Please enter correct choice. \n");
                }printf("\nEnter 0 for the Length Menu\n1 to EXIT\n");
                 scanf("%d",&ansL);
                }while(ansL==0);
            }
            break;


            default:
                printf("Please enter correct choice\n");
        }
        printf("\nPress 0 for Main Menu.\n1 to EXIT\n");
        scanf("%d",&ans);

    }
    while(ans==0);
}

