
@interface HUTimerTableViewCell : UITableViewCell <HUTimerCancelDelegate, HUTimerCountdownDelegate> {
    UILayoutGuide * _buttonGuide;
    HUTimerCancelButtonView * _cancelButtonView;
    double  _previousRemainingTime;
    NSString * _roomName;
    UIStackView * _stackView;
    MTTimer * _timer;
    HUTimerCountdownView * _timerCountdownView;
    COTimerManager * _timerManager;
    UILabel * _timerNameLabel;
    UILabel * _timerTimeLabel;
}

@property (nonatomic, retain) UILayoutGuide *buttonGuide;
@property (nonatomic, retain) HUTimerCancelButtonView *cancelButtonView;
@property (nonatomic) double previousRemainingTime;
@property (nonatomic, retain) NSString *roomName;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) MTTimer *timer;
@property (nonatomic, retain) HUTimerCountdownView *timerCountdownView;
@property (nonatomic, retain) COTimerManager *timerManager;
@property (nonatomic, retain) UILabel *timerNameLabel;
@property (nonatomic, retain) UILabel *timerTimeLabel;

+ (id)_stringForDuration:(double)arg1;

- (void).cxx_destruct;
- (id)_alarmBackgroundColor;
- (void)_createConstraints;
- (void)_createSubviews;
- (id)buttonGuide;
- (id)cancelButtonView;
- (void)cancelTimer;
- (id)initWithMobileTimerObject:(id)arg1 manager:(id)arg2 roomName:(id)arg3;
- (id)initWithTimer:(id)arg1 manager:(id)arg2;
- (void)layoutSubviews;
- (double)previousRemainingTime;
- (id)roomName;
- (void)setButtonGuide:(id)arg1;
- (void)setCancelButtonView:(id)arg1;
- (void)setPreviousRemainingTime:(double)arg1;
- (void)setRoomName:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setTimerCountdownView:(id)arg1;
- (void)setTimerManager:(id)arg1;
- (void)setTimerNameLabel:(id)arg1;
- (void)setTimerTimeLabel:(id)arg1;
- (id)stackView;
- (id)timer;
- (id)timerCountdownView;
- (id)timerManager;
- (id)timerNameLabel;
- (id)timerTimeLabel;
- (void)toggleTimer;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTimerInfo;

@end
