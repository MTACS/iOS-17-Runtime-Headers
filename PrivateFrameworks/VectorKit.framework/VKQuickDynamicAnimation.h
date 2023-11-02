
@interface VKQuickDynamicAnimation : VKDynamicAnimation

@property (nonatomic) double lastTimestamp;

- (double)lastTimestamp;
- (void)onTimerFired:(double)arg1;
- (void)setLastTimestamp:(double)arg1;

@end
