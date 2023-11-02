
@interface TransparencyAnalytics : NSObject {
    TransparencySFAnalytics * _sfanalytics;
}

@property (retain) TransparencySFAnalytics *sfanalytics;

+ (id)analyticsApplications;
+ (id)analyticsErrorData:(id)arg1;
+ (unsigned long long)doKTResultWithAnalyticsForEventName:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
+ (unsigned long long)doKTResultWithAnalyticsForEventName:(id)arg1 validateType:(unsigned long long)arg2 error:(id*)arg3 block:(id /* block */)arg4;
+ (bool)doWithAnalyticsForEventName:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
+ (id)errorChain:(id)arg1 depth:(unsigned long long)arg2;
+ (id)formatEventName:(id)arg1 application:(id)arg2;
+ (bool)hasInternalDiagnostics;
+ (id)logger;
+ (void)unsetGlobalLogger;

- (void).cxx_destruct;
- (void)addMultiSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(id /* block */)arg3;
- (id)dailyMetrics;
- (id)datePropertyForKey:(id)arg1;
- (id)failureKey:(id)arg1;
- (id)fuzzyTimeSinceDateKey:(id)arg1;
- (id)fuzzyTimeSinceLastSuccess:(id)arg1;
- (void)incrementIntegerPropertyForKey:(id)arg1;
- (void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logMetric:(id)arg1 withName:(id)arg2;
- (void)logResultForEvent:(id)arg1 hardFailure:(bool)arg2 result:(id)arg3;
- (void)logResultForEvent:(id)arg1 hardFailure:(bool)arg2 result:(id)arg3 withAttributes:(id)arg4;
- (void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logSuccessForEventNamed:(id)arg1;
- (void)noteEventNamed:(id)arg1;
- (void)noteLaunchSequence:(id)arg1;
- (id)numberPropertyForKey:(id)arg1;
- (void)removeMultiSamplerForName:(id)arg1;
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;
- (void)setFailureNowForPropertyKey:(id)arg1;
- (void)setMetricsAccountID:(id)arg1;
- (void)setNumberProperty:(id)arg1 forKey:(id)arg2;
- (void)setSfanalytics:(id)arg1;
- (void)setSuccessNowForPropertyKey:(id)arg1;
- (id)sfanalytics;
- (bool)skipLogResult:(id)arg1;
- (void)updateCollectionConfigurationWithData:(id)arg1;

@end
