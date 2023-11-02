
@interface HUTimerControlCountdownView : UIView {
    UIView * _circleBackgroundView;
    MTUITimerCountdownView * _countdownView;
    unsigned long long  _currentState;
    <HUTimerControlCountdownDelegate> * _delegate;
    double  _duration;
    UIButton * _pauseResumeButton;
    double  _remainingTime;
    unsigned long long  _state;
}

@property (nonatomic, retain) UIView *circleBackgroundView;
@property (nonatomic, retain) MTUITimerCountdownView *countdownView;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic, retain) <HUTimerControlCountdownDelegate> *delegate;
@property (nonatomic) double duration;
@property (nonatomic, retain) UIButton *pauseResumeButton;
@property (nonatomic) double remainingTime;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (id)circleBackgroundView;
- (id)countdownView;
- (unsigned long long)currentState;
- (id)delegate;
- (double)duration;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithRemainingTime:(double)arg1 state:(unsigned long long)arg2 duration:(double)arg3 delegate:(id)arg4;
- (void)layoutSubviews;
- (id)pauseResumeButton;
- (double)remainingTime;
- (void)setCircleBackgroundView:(id)arg1;
- (void)setCountdownView:(id)arg1;
- (void)setCurrentState:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setPauseResumeButton:(id)arg1;
- (void)setRemainingTime:(double)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)toggle:(id)arg1;
- (void)updateToNewState:(unsigned long long)arg1;
- (void)updateToNewTime:(double)arg1;

@end
