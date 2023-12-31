
@protocol HKDecimalPrecisionRule <NSObject>

@required

- (long long)decimalPrecisionForValue:(double)arg1;
- (long long)maximumDecimalPrecision;
- (long long)minimumDecimalPrecision;
- (<HKNumberFormatter> *)numberFormatter;

@end
