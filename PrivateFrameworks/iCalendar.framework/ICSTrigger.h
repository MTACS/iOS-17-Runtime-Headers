
@interface ICSTrigger : ICSProperty

- (void)fixAlarmTrigger;
- (id)initWithDate:(id)arg1;
- (id)initWithDuration:(id)arg1;
- (id)initWithDuration:(id)arg1 travelRelativeDuration:(id)arg2;
- (bool)isDurationBased;
- (void)setDate:(id)arg1;
- (void)setDuration:(id)arg1;
- (id)travelRelativeDuration;

@end
