
@interface WFNumberFieldUtilities : NSObject

+ (id)decimalSymbol;
+ (id)negateText:(id)arg1;
+ (void)negateTextInput:(id)arg1;
+ (unsigned long long)numberOfOccurrencesOfString:(id)arg1 inString:(id)arg2;
+ (bool)shouldChangeText:(id)arg1 allowMinus:(bool)arg2;
+ (id)stringBySanitizingNumberString:(id)arg1 allowDecimalNumbers:(bool)arg2;

@end
