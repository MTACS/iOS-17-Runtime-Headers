
@interface _HKTieredDecimalPrecisionPercentageFormatter : _HKTieredDecimalPrecisionNumberFormatter

+ (id)sharedInstance;

- (bool)returnsUnitWithValueForDisplay;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (unsigned long long)style;

@end
