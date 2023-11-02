
@interface SBAnalyticsAggdInterface : NSObject

+ (id)sharedInstance;

- (void)addValue:(long long)arg1 forScalarKey:(id)arg2;
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;

@end
