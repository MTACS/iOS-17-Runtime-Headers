
@interface OITSUMutableNumberFormat : OITSUNumberFormat

- (void)p_copyIVarsFromNumberFormat:(id)arg1;
- (void)setBase:(unsigned char)arg1;
- (void)setBasePlaces:(unsigned short)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setCustomFormatKey:(id)arg1;
- (void)setDecimalPlaces:(unsigned short)arg1;
- (void)setFractionAccuracy:(int)arg1;
- (void)setNegativeStyle:(int)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setPrefixString:(id)arg1;
- (void)setShowThousandsSeparator:(bool)arg1;
- (void)setSuffixString:(id)arg1;
- (void)setUseAccountingStyle:(bool)arg1;

@end