
@interface ECCurrencyConverter : NSObject {
    NSMutableDictionary * mLassoToXlCurrencyCode;
    NSMutableDictionary * mXlAccountingFormat;
    NSMutableDictionary * mXlToLassoCurrencyCode;
    NSMutableDictionary * mXlToLassoCurrencyCodeBySymbol;
}

+ (id)currencyConverter;

- (void).cxx_destruct;
- (id)lassoCurrencyCodeForDollar;
- (id)lassoCurrencyCodeFromXl:(id)arg1;
- (void)populateDictionaries;
- (int)xlAccountFormatFromLasso:(id)arg1;
- (id)xlCurrencyCodeFromLasso:(id)arg1;

@end
