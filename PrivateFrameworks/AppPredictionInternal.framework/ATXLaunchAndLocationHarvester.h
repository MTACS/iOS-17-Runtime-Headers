
@interface ATXLaunchAndLocationHarvester : NSObject

+ (id)_awdMetricsObjectWithLocation:(id)arg1 date:(id)arg2 bundleId:(id)arg3 urlHash:(id)arg4 isClip:(bool)arg5 launchReason:(int)arg6 isNegativeSession:(bool)arg7;
+ (bool)_passedAppOrClipSpecificFiltersGivenBundleId:(id)arg1 date:(id)arg2 isClip:(bool)arg3 counterKey:(id)arg4 samplingRate:(double)arg5 maxSamples:(unsigned long long)arg6;
+ (bool)_passedGeneralFiltersGivenLocation:(id)arg1 date:(id)arg2;
+ (void)_postAwdMetrics:(id)arg1;
+ (void)logAppOrClipLaunch:(id)arg1 isNegativeSession:(bool)arg2;

@end
