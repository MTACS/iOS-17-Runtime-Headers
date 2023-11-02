
@interface _HKSleepDaySummaryDurations : NSObject {
    double  _awakeDuration;
    double  _coreSleepDuration;
    double  _deepSleepDuration;
    double  _inBedDuration;
    double  _remSleepDuration;
    double  _sleepDuration;
    double  _unspecifiedSleepDuration;
}

@property (nonatomic, readonly) double awakeDuration;
@property (nonatomic, readonly) double coreSleepDuration;
@property (nonatomic, readonly) double deepSleepDuration;
@property (nonatomic, readonly) double inBedDuration;
@property (nonatomic, readonly) double remSleepDuration;
@property (nonatomic, readonly) double sleepDuration;
@property (nonatomic, readonly) double unspecifiedSleepDuration;

+ (id)durationsFromSleepPeriods:(id)arg1 dateInterval:(id)arg2;

- (double)awakeDuration;
- (double)coreSleepDuration;
- (double)deepSleepDuration;
- (double)inBedDuration;
- (id)initWithInBedDuration:(double)arg1 sleepDuration:(double)arg2 unspecifiedSleepDuration:(double)arg3 coreSleepDuration:(double)arg4 deepSleepDuration:(double)arg5 remSleepDuration:(double)arg6 awakeDuration:(double)arg7;
- (double)remSleepDuration;
- (double)sleepDuration;
- (double)unspecifiedSleepDuration;

@end
