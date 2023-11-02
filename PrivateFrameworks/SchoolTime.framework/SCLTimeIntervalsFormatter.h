
@interface SCLTimeIntervalsFormatter : NSFormatter {
    SCLScheduleIntervalFormatter * _intervalFormatter;
    NSListFormatter * _listFormatter;
    bool  _prefersHoursOnly;
}

@property (nonatomic, readonly) SCLScheduleIntervalFormatter *intervalFormatter;
@property (nonatomic) unsigned long long intervalFormattingStyle;
@property (nonatomic, readonly) NSListFormatter *listFormatter;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) bool prefersHoursOnly;

- (void).cxx_destruct;
- (id)init;
- (id)intervalFormatter;
- (unsigned long long)intervalFormattingStyle;
- (id)listFormatter;
- (id)locale;
- (bool)prefersHoursOnly;
- (void)setIntervalFormattingStyle:(unsigned long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setPrefersHoursOnly:(bool)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromTimeIntervals:(id)arg1;

@end
