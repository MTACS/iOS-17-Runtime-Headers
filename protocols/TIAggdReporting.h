
@protocol TIAggdReporting <NSObject>

@required

- (void)addValue:(long long)arg1 forKey:(NSString *)arg2;
- (void)clearDistributionKey:(NSString *)arg1;
- (void)clearScalarKey:(NSString *)arg1;
- (int)commit;
- (void)decrementKey:(NSString *)arg1;
- (void)incrementKey:(NSString *)arg1;
- (void)pushValue:(double)arg1 forKey:(NSString *)arg2;
- (void)setValue:(double)arg1 forDistributionKey:(NSString *)arg2;
- (void)setValue:(long long)arg1 forScalarKey:(NSString *)arg2;
- (void)significantTimeChanged;
- (void)subtractValue:(long long)arg1 forKey:(NSString *)arg2;

@end
