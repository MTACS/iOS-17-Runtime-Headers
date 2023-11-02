
@interface CalendarEventAlarmTable : NSObject {
    bool  _useAllDayAlarms;
}

@property (nonatomic) bool useAllDayAlarms;

- (unsigned long long)countOfPresets;
- (int)intervalForPresetIdentifier:(long long)arg1;
- (void)setUseAllDayAlarms:(bool)arg1;
- (bool)useAllDayAlarms;

@end
