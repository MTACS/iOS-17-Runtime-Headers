
@interface LPKPerfResultAnalyzer : NSObject

+ (id)_abstractUserSwitchsFromTheEnd:(long long)arg1 userSwitches:(id)arg2;
+ (double)_durationFromString:(id)arg1;
+ (id)_perfResultsFromUserSwitches:(id)arg1;
+ (void)_populateMigratorsData:(id)arg1;
+ (id)analyzePerformanceTestResult:(id)arg1 type:(unsigned long long)arg2 count:(long long)arg3;

@end
