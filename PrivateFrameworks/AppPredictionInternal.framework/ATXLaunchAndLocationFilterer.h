
@interface ATXLaunchAndLocationFilterer : NSObject

+ (id)_formattedStringForDate:(id)arg1;
+ (bool)appBundleIdIsBlacklisted:(id)arg1 blacklist:(id)arg2;
+ (bool)genreIdIsBlacklistedGivenAppBundleId:(id)arg1 blacklist:(id)arg2;
+ (void)incrementOnDeviceDailySamplesWithCounterKey:(id)arg1 date:(id)arg2;
+ (bool)locationIsStaleOrNotAccurateEnough:(id)arg1 now:(id)arg2;
+ (bool)shouldSampleWithCounterKey:(id)arg1 date:(id)arg2 samplingRate:(double)arg3 maxSamples:(unsigned long long)arg4;

@end
