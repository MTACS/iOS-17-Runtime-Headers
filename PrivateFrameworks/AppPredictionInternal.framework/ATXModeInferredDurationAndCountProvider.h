
@interface ATXModeInferredDurationAndCountProvider : NSObject {
    NSDictionary * _inferredModeCounterLast1Day;
    NSDictionary * _inferredModeCounterLastNDays;
    NSDictionary * _inferredModeDurationSumLast1Day;
    NSDictionary * _inferredModeDurationSumLastNDays;
    NSDate * _thresholdDateLastNDays;
}

- (void).cxx_destruct;
- (void)cacheInferredModeStreamIfNecessary;
- (id)initWithLastNDays:(unsigned long long)arg1;
- (unsigned long long)modeInferredCountInLast1DayForMode:(unsigned long long)arg1;
- (unsigned long long)modeInferredCountInLastNDaysForMode:(unsigned long long)arg1;
- (double)modeInferredDurationInLast1DayForMode:(unsigned long long)arg1;
- (double)modeInferredDurationInLastNDaysForMode:(unsigned long long)arg1;

@end
