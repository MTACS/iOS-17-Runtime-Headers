
@interface HUTimerControlTableViewCell : UITableViewCell <HUTimerControlCancelDelegate, HUTimerControlCountdownDelegate> {
    UILayoutGuide * _buttonGuide;
    HUTimerControlCancelButtonView * _cancelButtonView;
    <HUTimerControlCountdownDelegate> * _delegate;
    double  _duration;
    UIColor * _overrideBackgroundColor;
    double  _previousRemainingTime;
    double  _remainingTime;
    NSString * _roomName;
    UIStackView * _stackView;
    unsigned long long  _state;
    HUTimerControlCountdownView * _timerCountdownView;
    UILabel * _timerNameLabel;
    UILabel * _timerTimeLabel;
    NSString * _timerTitle;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) UILayoutGuide *buttonGuide;
@property (nonatomic, retain) HUTimerControlCancelButtonView *cancelButtonView;
@property (nonatomic) <HUTimerControlCountdownDelegate> *delegate;
@property (nonatomic) double duration;
@property (nonatomic, retain) UIColor *overrideBackgroundColor;
@property (nonatomic) double previousRemainingTime;
@property (nonatomic) double remainingTime;
@property (nonatomic, retain) NSString *roomName;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) HUTimerControlCountdownView *timerCountdownView;
@property (nonatomic, retain) UILabel *timerNameLabel;
@property (nonatomic, retain) UILabel *timerTimeLabel;
@property (nonatomic, retain) NSString *timerTitle;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

+ (id)_stringForDuration:(double)arg1;

- (void).cxx_destruct;
- (id)_alarmBackgroundColor;
- (void)_createConstraints;
- (void)_createSubviews;
- (id)buttonGuide;
- (id)cancelButtonView;
- (void)cancelTimer;
- (id)delegate;
- (double)duration;
- (id)initWithRemainingTime:(double)arg1 state:(unsigned long long)arg2 duration:(double)arg3 timerTitle:(id)arg4;
- (void)layoutSubviews;
- (id)overrideBackgroundColor;
- (double)previousRemainingTime;
- (double)remainingTime;
- (id)roomName;
- (void)setButtonGuide:(id)arg1;
- (void)setCancelButtonView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setOverrideBackgroundColor:(id)arg1;
- (void)setPreviousRemainingTime:(double)arg1;
- (void)setRemainingTime:(double)arg1;
- (void)setRoomName:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTimerCountdownView:(id)arg1;
- (void)setTimerNameLabel:(id)arg1;
- (void)setTimerTimeLabel:(id)arg1;
- (void)setTimerTitle:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (id)stackView;
- (unsigned long long)state;
- (id)timerCountdownView;
- (id)timerNameLabel;
- (id)timerTimeLabel;
- (id)timerTitle;
- (void)toggleTimer;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTimerInfo:(double)arg1 state:(unsigned long long)arg2;
- (id)visualEffectView;

@end
