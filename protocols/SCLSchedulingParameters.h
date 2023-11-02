
@protocol SCLSchedulingParameters <NSObject>

@required

- (void)setActivationSetting:(unsigned long long)arg1;
- (void)setCalendar:(NSCalendar *)arg1;
- (void)setEvaluationDate:(NSDate *)arg1;
- (void)setScheduleSettings:(SCLScheduleSettings *)arg1;
- (void)setSuppressed:(bool)arg1;

@end
