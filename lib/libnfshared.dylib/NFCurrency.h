
@interface NFCurrency : NSObject

+ (unsigned long long)decodeBCDAmount:(id)arg1;
+ (id)encodeBCDAmount:(unsigned long long)arg1;
+ (id)getCurrencyStringCodeFromNumericCode:(unsigned int)arg1;
+ (int)getFractionDigitsFromCurrencyStringCode:(id)arg1;

@end
