
@interface IMMetricsTimerEvent : IMAMSMetricsEvent

@property (nonatomic) double duration;

- (double)duration;
- (id)init;
- (void)setDuration:(double)arg1;
- (id)shortDescription;

@end
