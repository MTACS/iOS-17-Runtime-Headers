
@interface HMDLightProfileDataSource : HMFObject <HMDLightProfileDataSource>

@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSTimeZone *localTimeZone;
@property (readonly) NSDictionary *naturalLightingCurveResourceFileContent;
@property (readonly) double naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
@property (readonly) double naturalLightingCurveUpdateInterval;
@property (readonly) long long naturalLightingEnabledMaxRetryCount;
@property (readonly) double naturalLightingEnabledRetryInterval;
@property (readonly) Class superclass;

- (id)date;
- (void)dispatchAfterTimeInterval:(double)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (id)localTimeZone;
- (unsigned long long)millisecondsElapsedSinceStartOfDayWithDate:(id)arg1 timeZone:(id)arg2;
- (id)naturalLightingCurveResourceFileContent;
- (double)naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
- (double)naturalLightingCurveUpdateInterval;
- (long long)naturalLightingEnabledMaxRetryCount;
- (double)naturalLightingEnabledRetryInterval;

@end
