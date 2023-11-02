
@interface HUAlarmControlTableViewCell : UITableViewCell {
    NSDate * _baseDate;
    NSCalendar * _calendar;
    bool  _disabled;
    bool  _enabled;
    UISwitch * _enabledSwitch;
    UIStackView * _labelsStackView;
    UILabel * _nameAndDescriptionLabel;
    UIColor * _overrideBackgroundColor;
    UILabel * _timeLabel;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) NSDate *baseDate;
@property (nonatomic, retain) NSCalendar *calendar;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) UISwitch *enabledSwitch;
@property (nonatomic, retain) UIStackView *labelsStackView;
@property (nonatomic, retain) UILabel *nameAndDescriptionLabel;
@property (nonatomic, retain) UIColor *overrideBackgroundColor;
@property (nonatomic, retain) UILabel *timeLabel;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

+ (id)timeFormatter;

- (void).cxx_destruct;
- (void)_alarmActiveChanged:(id)arg1;
- (id)_alarmBackgroundColor;
- (void)_createSubviews;
- (void)_setTimeLabelToHour:(long long)arg1 minute:(long long)arg2;
- (void)_setupConstraints;
- (id)baseDate;
- (id)calendar;
- (bool)enabled;
- (id)enabledSwitch;
- (id)init;
- (bool)isDisabled;
- (id)labelsStackView;
- (void)layoutSubviews;
- (id)nameAndDescriptionLabel;
- (id)overrideBackgroundColor;
- (void)refreshUIWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 repeatSchedule:(unsigned long long)arg3 displayTitle:(id)arg4 alarmEnabled:(bool)arg5 roomName:(id)arg6 animated:(bool)arg7;
- (void)setAlarmEnabled:(bool)arg1 forCell:(id)arg2;
- (void)setBaseDate:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setEnabledSwitch:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setLabelsStackView:(id)arg1;
- (void)setNameAndDescriptionLabel:(id)arg1;
- (void)setOverrideBackgroundColor:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setTimeLabel:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (id)timeLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)visualEffectView;
- (void)willTransitionToState:(unsigned long long)arg1;

@end
