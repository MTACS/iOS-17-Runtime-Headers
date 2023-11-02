
@interface HUAlarmTableViewCell : UITableViewCell {
    MTAlarm * _alarm;
    NSDate * _baseDate;
    NSCalendar * _calendar;
    <HUAlarmTableViewCellDelegate> * _delegate;
    bool  _disabled;
    bool  _enabled;
    UISwitch * _enabledSwitch;
    UIStackView * _labelsStackView;
    UILabel * _nameAndDescriptionLabel;
    UILabel * _timeLabel;
}

@property (nonatomic, retain) MTAlarm *alarm;
@property (nonatomic, retain) NSDate *baseDate;
@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic) <HUAlarmTableViewCellDelegate> *delegate;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) UISwitch *enabledSwitch;
@property (nonatomic, retain) UIStackView *labelsStackView;
@property (nonatomic, retain) UILabel *nameAndDescriptionLabel;
@property (nonatomic, retain) UILabel *timeLabel;

+ (id)timeFormatter;

- (void).cxx_destruct;
- (void)_alarmActiveChanged:(id)arg1;
- (id)_alarmBackgroundColor;
- (void)_createSubviews;
- (void)_setTimeLabelToHour:(long long)arg1 minute:(long long)arg2;
- (void)_setupConstraints;
- (id)alarm;
- (id)baseDate;
- (id)calendar;
- (id)delegate;
- (bool)enabled;
- (id)enabledSwitch;
- (id)init;
- (id)initWithMobileTimerObject:(id)arg1 roomName:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (id)labelsStackView;
- (void)layoutSubviews;
- (id)nameAndDescriptionLabel;
- (void)refreshUI:(id)arg1 roomName:(id)arg2 animated:(bool)arg3;
- (void)setAlarm:(id)arg1;
- (void)setBaseDate:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setEnabledSwitch:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setLabelsStackView:(id)arg1;
- (void)setNameAndDescriptionLabel:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setTimeLabel:(id)arg1;
- (id)timeLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;

@end
