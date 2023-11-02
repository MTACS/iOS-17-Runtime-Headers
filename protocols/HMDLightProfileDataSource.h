
@protocol HMDLightProfileDataSource <NSObject>

@required

- (NSDate *)date;
- (void)dispatchAfterTimeInterval:(void *)arg1 queue:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 7: double, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSTimeZone *)localTimeZone;
- (unsigned long long)millisecondsElapsedSinceStartOfDayWithDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2;
- (NSDictionary *)naturalLightingCurveResourceFileContent;
- (double)naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
- (double)naturalLightingCurveUpdateInterval;
- (long long)naturalLightingEnabledMaxRetryCount;
- (double)naturalLightingEnabledRetryInterval;

@end
