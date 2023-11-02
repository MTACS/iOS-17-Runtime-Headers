
@interface SCLSettingsViewModel : NSObject {
    SCLRecurrenceSchedule * _customSchedule;
    bool  _enabled;
    NSArray * _historyItems;
    long long  _repeatSchedule;
    unsigned long long  _scheduleType;
    NSArray * _timeIntervals;
}

@property (nonatomic, copy) SCLRecurrenceSchedule *customSchedule;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) NSArray *historyItems;
@property (nonatomic) long long repeatSchedule;
@property (nonatomic) unsigned long long scheduleType;
@property (nonatomic, copy) NSArray *timeIntervals;

- (void).cxx_destruct;
- (id)customSchedule;
- (id)historyItems;
- (id)init;
- (bool)isEnabled;
- (long long)repeatSchedule;
- (unsigned long long)scheduleType;
- (void)setCustomSchedule:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHistoryItems:(id)arg1;
- (void)setRepeatSchedule:(long long)arg1;
- (void)setScheduleType:(unsigned long long)arg1;
- (void)setTimeIntervals:(id)arg1;
- (id)timeIntervals;

@end
