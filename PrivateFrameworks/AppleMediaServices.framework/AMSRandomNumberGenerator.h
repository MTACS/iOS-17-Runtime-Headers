
@interface AMSRandomNumberGenerator : NSObject

+ (void)initialize;
+ (double)normalizedRandomDouble;
+ (void)reSeedNormalizedRandomDoubleGeneratorWithValue:(long long)arg1;

@end
