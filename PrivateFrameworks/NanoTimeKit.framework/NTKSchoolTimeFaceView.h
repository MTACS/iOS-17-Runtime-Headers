
@interface NTKSchoolTimeFaceView : NTKFaceView {
    CLKClockTimer * _clockTimer;
    CLKClockTimerToken * _clockTimerToken;
    CLKUICurvedColoringLabel * _curvedNameLabel;
    UILabel * _dateLabel;
    NTKSchoolTimeDialView * _dialView;
    NTKDigitalTimeLabel * _digitalTimeLabel;
    NSDateFormatter * _formatter;
    NTKAnalogHandsView * _handsView;
    UILabel * _nameLabel;
}

+ (id)schoolTimeColor;
+ (id)secondHandColor;

- (void).cxx_destruct;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_handleChangeNotification;
- (void)_layoutCurvedNameLabel;
- (void)_loadSnapshotContentViews;
- (void)_setDate:(id)arg1;
- (void)_setupNameLabel;
- (void)_setupNotifications;
- (void)_startClockUpdates;
- (void)_startObserving;
- (void)_stopClockUpdates;
- (void)_stopObserving;
- (void)_tearDownUI;
- (void)_timeDidUpdate:(id)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_updateTimeAndDate:(id)arg1 animated:(bool)arg2;
- (void)dealloc;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)layoutSubviews;
- (void)setName:(id)arg1;
- (void)setupUI;

@end
