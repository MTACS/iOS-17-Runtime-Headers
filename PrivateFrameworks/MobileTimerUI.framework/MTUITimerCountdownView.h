
@interface MTUITimerCountdownView : UIView {
    UIColor * _backgroundBarColor;
    CAShapeLayer * _backgroundCircleLayer;
    UIColor * _barColor;
    double  _barWidth;
    CAShapeLayer * _countdownCircleLayer;
    double  _duration;
    CALayer * _mainLayer;
    double  _remainingTime;
    long long  _state;
}

@property (retain) UIColor *backgroundBarColor;
@property (retain) CAShapeLayer *backgroundCircleLayer;
@property (retain) UIColor *barColor;
@property double barWidth;
@property (retain) CAShapeLayer *countdownCircleLayer;
@property double duration;
@property (retain) CALayer *mainLayer;
@property double remainingTime;
@property long long state;

- (void).cxx_destruct;
- (double)angleForValue:(double)arg1 total:(double)arg2;
- (id)backgroundBarColor;
- (id)backgroundCircleLayer;
- (id)barColor;
- (double)barWidth;
- (id)countdownCircleLayer;
- (double)degToRad:(double)arg1;
- (double)duration;
- (id)initWithBarColor:(id)arg1 backgroundBarColor:(id)arg2 barWidth:(double)arg3;
- (id)initWithBarColor:(id)arg1 backgroundBarColor:(id)arg2 barWidth:(double)arg3 remainingTime:(double)arg4 duration:(double)arg5;
- (bool)isStarted;
- (void)layoutSubviews;
- (id)mainLayer;
- (void)pause;
- (double)remainingTime;
- (void)resume;
- (void)setAnimationRemainingTime:(double)arg1 totalTime:(double)arg2;
- (void)setBackgroundBarColor:(id)arg1;
- (void)setBackgroundCircleLayer:(id)arg1;
- (void)setBarColor:(id)arg1;
- (void)setBarWidth:(double)arg1;
- (void)setCountdownCircleLayer:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setMainLayer:(id)arg1;
- (void)setRemainingTime:(double)arg1;
- (void)setState:(long long)arg1;
- (void)setupBackgroundCircle;
- (void)start;
- (long long)state;
- (void)stop;

@end
