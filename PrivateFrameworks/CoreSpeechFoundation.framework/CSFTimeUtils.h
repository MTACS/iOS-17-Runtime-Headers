
@interface CSFTimeUtils : NSObject

+ (unsigned long long)absoluteHostTimeToContinuousHostTime:(unsigned long long)arg1;
+ (unsigned long long)convertSampleCountToNs:(unsigned long long)arg1 sampleRate:(float)arg2;
+ (double)getHostClockFrequency;
+ (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 sampleRate:(float)arg4;
+ (unsigned long long)hostTimeToNs:(unsigned long long)arg1;
+ (float)hostTimeToSeconds:(unsigned long long)arg1;
+ (double)hostTimeToTimeInterval:(unsigned long long)arg1;
+ (bool)isReceivedTimeInterval:(double)arg1 matchCurrentTimeInterval:(double)arg2;
+ (unsigned long long)macHostTimeFromBridgeHostTime:(unsigned long long)arg1;
+ (unsigned long long)millisecondsToNs:(float)arg1;
+ (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3 sampleRate:(float)arg4;
+ (unsigned long long)secondsToHostTime:(float)arg1;
+ (unsigned long long)secondsToNs:(float)arg1;

@end
