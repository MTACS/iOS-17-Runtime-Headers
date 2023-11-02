
@interface CAMTimerStatusIndicator : CAMControlStatusIndicator {
    long long  _timerDuration;
}

@property (nonatomic) long long timerDuration;

- (bool)canShowValue;
- (id)imageNameForCurrentState;
- (void)setTimerDuration:(long long)arg1;
- (long long)timerDuration;
- (id)valueText;

@end
