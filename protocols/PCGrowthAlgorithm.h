
@protocol PCGrowthAlgorithm <NSObject>

@required

- (NSDictionary *)cacheInfo;
- (unsigned long long)countOfGrowthActions;
- (double)currentKeepAliveInterval;
- (int)growthStage;
- (id)initWithCacheInfo:(NSDictionary *)arg1 loggingIdentifier:(NSString *)arg2 algorithmName:(NSString *)arg3;
- (bool)isServerOriginatedKeepAlive;
- (double)lastSuccessfulKeepAliveInterval;
- (double)maximumKeepAliveInterval;
- (bool)minimumIntervalFallbackEnabled;
- (double)minimumIntervalFallbackStateTimeout;
- (double)minimumKeepAliveInterval;
- (int)previousAction;
- (void)processNextAction:(int)arg1;
- (double)serverStatsExpectedKeepAliveInterval;
- (double)serverStatsMaxKeepAliveInterval;
- (double)serverStatsMinKeepAliveInterval;
- (void)setIsServerOriginatedKeepAlive:(bool)arg1;
- (void)setLastSuccessfulKeepAliveInterval:(double)arg1;
- (void)setMaximumKeepAliveInterval:(double)arg1;
- (void)setMinimumIntervalFallbackEnabled:(bool)arg1;
- (void)setMinimumIntervalFallbackStateTimeout:(double)arg1;
- (void)setMinimumKeepAliveInterval:(double)arg1;
- (void)setServerStatsExpectedKeepAliveInterval:(double)arg1;
- (void)setServerStatsMaxKeepAliveInterval:(double)arg1;
- (void)setServerStatsMinKeepAliveInterval:(double)arg1;
- (void)setSignalAvoidanceRange:(struct _PCTimeRange { double x1; double x2; })arg1;
- (void)setUsingServerStatsAggressively:(bool)arg1;
- (struct _PCTimeRange { double x1; double x2; })signalAvoidanceRange;
- (bool)useIntervalIfImprovement:(double)arg1;
- (bool)usingServerStatsAggressively;

@end
