
@interface HKTieredDecimalPrecisionRule : NSObject <HKDecimalPrecisionRule>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)numberFormatter;
+ (id)percentageFormatter;

- (long long)decimalPrecisionForValue:(double)arg1;
- (long long)maximumDecimalPrecision;
- (long long)minimumDecimalPrecision;
- (id)numberFormatter;

@end
