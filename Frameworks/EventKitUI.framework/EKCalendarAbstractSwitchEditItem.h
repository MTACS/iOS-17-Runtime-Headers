
@interface EKCalendarAbstractSwitchEditItem : EKCalendarEditItem {
    bool  _allowEventAlerts;
    NSMutableArray * _cells;
    UILabel * _descriptionLabel;
    bool  _switchState;
    UISwitch * _toggleSwitch;
    bool  _underlyingCalendarState;
}

@property (nonatomic) bool allowEventAlerts;
@property (nonatomic, retain) NSMutableArray *cells;
@property (nonatomic) bool switchState;
@property (nonatomic, retain) UISwitch *toggleSwitch;
@property (nonatomic) bool underlyingCalendarState;

- (void).cxx_destruct;
- (void)_switchStateChanged:(id)arg1;
- (bool)allowEventAlerts;
- (id)cell;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)cellText;
- (bool)cellWrapsLongText;
- (id)cells;
- (id)descriptionLabelText;
- (id)footerTitle;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (bool)saveStateToCalendar:(id)arg1;
- (void)setAllowEventAlerts:(bool)arg1;
- (void)setCalendar:(id)arg1 store:(id)arg2;
- (void)setCells:(id)arg1;
- (void)setSwitchState:(bool)arg1;
- (void)setToggleSwitch:(id)arg1;
- (void)setUnderlyingCalendarState:(bool)arg1;
- (bool)shouldHideSwitch;
- (bool)switchState;
- (id)toggleSwitch;
- (bool)underlyingCalendarState;

@end
