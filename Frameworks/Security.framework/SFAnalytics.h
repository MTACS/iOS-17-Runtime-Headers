
@interface SFAnalytics : NSObject <SFAnalyticsProtocol> {
    SFAnalyticsCollection * _collection;
    SFAnalyticsSQLiteStore * _database;
    unsigned int  _disableLogging;
    NSMutableSet * _metricsHooks;
    NSMutableDictionary * _multisamplers;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _samplers;
}

@property (retain) SFAnalyticsCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableSet *metricsHooks;
@property (readonly) Class superclass;

+ (void)addOSVersionToEvent:(id)arg1;
+ (id)databasePath;
+ (id)defaultAnalyticsDatabasePath:(id)arg1;
+ (id)defaultProtectedAnalyticsDatabasePath:(id)arg1;
+ (id)defaultProtectedAnalyticsDatabasePath:(id)arg1 uuid:(id)arg2;
+ (id)encodeSFACollection:(id)arg1 error:(id*)arg2;
+ (long long)fuzzyDaysSinceDate:(id)arg1;
+ (long long)fuzzyInteger:(long long)arg1;
+ (id)fuzzyNumber:(id)arg1;
+ (id)hwModelID;
+ (id)logger;
+ (void)removeLegacyDefaultAnalyticsDatabasePath:(id)arg1 usingDispatchToken:(long long*)arg2;

- (void).cxx_destruct;
- (id)AddMultiSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(id /* block */)arg3;
- (id)addMetricSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(id /* block */)arg3;
- (void)addMetricsHook:(id /* block */)arg1;
- (id)collection;
- (id)coreAnalyticsKeyFilter:(id)arg1;
- (void)dailyCoreAnalyticsMetrics:(id)arg1;
- (id)dailyMetrics;
- (id)dataPropertyForKey:(id)arg1;
- (id)database;
- (id)datePropertyForKey:(id)arg1;
- (void)drainLogQueue;
- (id)eventDictForEventName:(id)arg1 withAttributes:(id)arg2 eventClass:(long long)arg3 timestampBucket:(double)arg4;
- (id)existingMetricSamplerForName:(id)arg1;
- (id)existingMultiSamplerForName:(id)arg1;
- (void)incrementIntegerPropertyForKey:(id)arg1;
- (id)init;
- (void)loadCollectionConfiguration;
- (void)logEventNamed:(id)arg1 class:(long long)arg2 attributes:(id)arg3;
- (void)logEventNamed:(id)arg1 class:(long long)arg2 attributes:(id)arg3 timestampBucket:(unsigned int)arg4;
- (void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2 timestampBucket:(unsigned int)arg3;
- (void)logMetric:(id)arg1 withName:(id)arg2;
- (void)logMetric:(id)arg1 withName:(id)arg2 oncePerReport:(bool)arg3;
- (void)logResultForEvent:(id)arg1 hardFailure:(bool)arg2 result:(id)arg3;
- (void)logResultForEvent:(id)arg1 hardFailure:(bool)arg2 result:(id)arg3 timestampBucket:(unsigned int)arg4;
- (void)logResultForEvent:(id)arg1 hardFailure:(bool)arg2 result:(id)arg3 withAttributes:(id)arg4;
- (void)logResultForEvent:(id)arg1 hardFailure:(bool)arg2 result:(id)arg3 withAttributes:(id)arg4 timestampBucket:(unsigned int)arg5;
- (void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2 timestampBucket:(unsigned int)arg3;
- (void)logSuccessForEventNamed:(id)arg1;
- (void)logSuccessForEventNamed:(id)arg1 timestampBucket:(unsigned int)arg2;
- (id)logSystemMetricsForActivityNamed:(id)arg1 withAction:(id /* block */)arg2;
- (id)metricsAccountID;
- (id)metricsHooks;
- (void)noteEventNamed:(id)arg1;
- (void)noteEventNamed:(id)arg1 timestampBucket:(unsigned int)arg2;
- (void)noteLaunchSequence:(id)arg1;
- (id)numberPropertyForKey:(id)arg1;
- (void)removeMetricSamplerForName:(id)arg1;
- (void)removeMetricsHook:(id /* block */)arg1;
- (void)removeMultiSamplerForName:(id)arg1;
- (void)removeState;
- (void)removeStateAndUnlinkFile:(bool)arg1;
- (void)setCollection:(id)arg1;
- (void)setDataProperty:(id)arg1 forKey:(id)arg2;
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;
- (void)setMetricsAccountID:(id)arg1;
- (void)setMetricsHooks:(id)arg1;
- (void)setNumberProperty:(id)arg1 forKey:(id)arg2;
- (id)startLogSystemMetricsForActivityNamed:(id)arg1;
- (void)updateCollectionConfigurationWithData:(id)arg1;

@end
