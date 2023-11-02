
@interface VUIDebugMetricsEventValidator : NSObject

+ (id)removeGladiatorPrefix:(id)arg1;
+ (void)validateEvents:(id)arg1 forRuleset:(id)arg2 withCompletion:(id /* block */)arg3;
+ (id)validationResults:(id)arg1 fromIndex:(unsigned long long)arg2;

@end
