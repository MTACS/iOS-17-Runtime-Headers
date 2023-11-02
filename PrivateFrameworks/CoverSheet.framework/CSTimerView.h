
@interface CSTimerView : SBFLockScreenDateSubtitleView <PTSettingsKeyObserver> {
    NSDate * _endDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *timerText;

- (void).cxx_destruct;
- (id)_newTimerDialForSettings:(id)arg1 withFont:(id)arg2;
- (id)_timerFont;
- (void)_updateLegibilityStrength;
- (id)accessoryView;
- (void)dealloc;
- (id)init;
- (double)interItemSpacing;
- (void)setEndDate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)timerText;
- (void)updateTimerLabel;

@end
