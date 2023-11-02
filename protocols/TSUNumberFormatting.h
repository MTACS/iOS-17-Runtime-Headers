
@protocol TSUNumberFormatting <TSUDataFormat, NSObject>

@required

- (unsigned short)base;
- (unsigned short)basePlaces;
- (bool)baseUseMinusSign;
- (bool)canFormatText;
- (NSString *)chartLabelStringFromDouble:(double)arg1;
- (NSString *)currencyCode;
- (bool)customFormatShouldAutoInsertPercentSymbol;
- (NSArray *)customNumberFormatTokens;
- (unsigned short)decimalPlaces;
- (NSString *)formatName;
- (NSString *)formatString;
- (int)fractionAccuracy;
- (bool)hasValidDecimalPlaces;
- (bool)isCustom;
- (bool)isEquivalent:(id)arg1;
- (bool)isTextFormat;
- (int)negativeStyle;
- (id)numberFormatByIncrementingDecimalPlaces:(short)arg1;
- (id)numberFormatBySettingCurrencyCode:(NSString *)arg1;
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1;
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1 andNegativeStyle:(int)arg2;
- (id)numberFormatBySettingFractionAccuracy:(int)arg1;
- (id)numberFormatBySettingNegativeStyle:(int)arg1;
- (id)numberFormatBySettingShowThousandsSeparator:(bool)arg1;
- (id)numberFormatBySettingSuffixString:(NSString *)arg1;
- (id)numberFormatBySettingUseAccountingStyle:(bool)arg1;
- (id)numberFormatBySettingValueType:(int)arg1;
- (bool)requiresParensToBeReplacedWithSpacesForDouble:(double)arg1;
- (double)scaleFactor;
- (void)setFormatName:(NSString *)arg1;
- (bool)showThousandsSeparator;
- (NSString *)stringFromDouble:(double)arg1;
- (NSString *)stringFromDouble:(double)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3;
- (NSString *)stringFromDouble:(double)arg1 minimumDecimalPlaces:(unsigned short)arg2;
- (NSString *)stringFromString:(NSString *)arg1;
- (NSString *)suffixString;
- (bool)usesAccountingStyle;
- (bool)usesTabs;
- (bool)usesTextFormatForValue:(double)arg1;
- (int)valueType;

@end
