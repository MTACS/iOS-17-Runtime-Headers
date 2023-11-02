
@interface STAlarm : STSiriModelObject <NSCopying> {
    long long  _bedtimeHour;
    long long  _bedtimeMinute;
    long long  _daysOfWeek;
    bool  _enabled;
    long long  _hourOfDay;
    NSString * _label;
    long long  _minuteOfHour;
    bool  _overrideAlarm;
    bool  _sleepAlarm;
}

@property (nonatomic) long long bedtimeHour;
@property (nonatomic) long long bedtimeMinute;
@property (nonatomic) long long daysOfWeek;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) long long hourOfDay;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) long long minuteOfHour;
@property (getter=isOverrideAlarm, nonatomic) bool overrideAlarm;
@property (getter=isSleepAlarm, nonatomic) bool sleepAlarm;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)bedtimeHour;
- (long long)bedtimeMinute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)daysOfWeek;
- (void)encodeWithCoder:(id)arg1;
- (long long)hourOfDay;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isOverrideAlarm;
- (bool)isSleepAlarm;
- (id)label;
- (long long)minuteOfHour;
- (void)setBedtimeHour:(long long)arg1;
- (void)setBedtimeMinute:(long long)arg1;
- (void)setDaysOfWeek:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHourOfDay:(long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setMinuteOfHour:(long long)arg1;
- (void)setOverrideAlarm:(bool)arg1;
- (void)setSleepAlarm:(bool)arg1;

@end
