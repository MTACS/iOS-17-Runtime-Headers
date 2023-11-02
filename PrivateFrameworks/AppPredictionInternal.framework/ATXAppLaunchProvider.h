
@interface ATXAppLaunchProvider : NSObject {
    int  _globalAppLaunchCountInLast1Day;
    int  _globalAppLaunchCountInLastNDays;
    NSDictionary * _modeAppLaunchCountBasedOnGlobalPriorsInLast1Day;
    NSDictionary * _modeAppLaunchCountBasedOnGlobalPriorsInLastNDays;
    NSDictionary * _modeWeightedAppLaunchPriorsBasedOnGlobalPriorsInLast1Day;
    NSDictionary * _modeWeightedAppLaunchPriorsBasedOnGlobalPriorsInLastNDays;
    NSDate * _thresholdDateLastNDays;
}

- (void).cxx_destruct;
- (void)cacheAppLaunchStreamIfNecessary;
- (unsigned long long)globalAppLaunchCountWithinLast1Day;
- (unsigned long long)globalAppLaunchCountWithinLastNDays;
- (id)initWithLastNDays:(unsigned long long)arg1;
- (unsigned long long)modeAppLaunchCountBasedOnGlobalPriorsWithinLast1DayForMode:(unsigned long long)arg1;
- (unsigned long long)modeAppLaunchCountBasedOnGlobalPriorsWithinLastNDaysForMode:(unsigned long long)arg1;
- (double)modeWeightedAppLaunchPriorsBasedOnGlobalPriorsWithinLast1DayForMode:(unsigned long long)arg1;
- (double)modeWeightedAppLaunchPriorsBasedOnGlobalPriorsWithinLastNDaysForMode:(unsigned long long)arg1;

@end
