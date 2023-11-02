
@interface SCLScheduleFormatter : NSFormatter {
    NSCalendar * _calendar;
    NSListFormatter * _listFormatter;
    NSLocale * _locale;
    NSDateFormatter * _standaloneWeekdayFormatter;
    SCLTimeIntervalsFormatter * _timeIntervalsFormatter;
    NSDateIntervalFormatter * _weekdayIntervalFormatter;
}

@property (nonatomic, copy) NSCalendar *calendar;
@property (nonatomic, readonly) NSListFormatter *listFormatter;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, readonly) NSDateFormatter *standaloneWeekdayFormatter;
@property (nonatomic, readonly) SCLTimeIntervalsFormatter *timeIntervalsFormatter;
@property (nonatomic, readonly) NSDateIntervalFormatter *weekdayIntervalFormatter;

- (void).cxx_destruct;
- (id)_formattedCustomDailyScheduleForLocale:(id)arg1;
- (void)_regenerateFormatters;
- (id)calendar;
- (id)formatterItemsForSchedule:(id)arg1;
- (id)init;
- (id)listFormatter;
- (id)locale;
- (void)setCalendar:(id)arg1;
- (void)setLocale:(id)arg1;
- (id)standaloneWeekdayFormatter;
- (id)stringForWeekdaysInItem:(id)arg1;
- (id)stringFromSchedule:(id)arg1;
- (id)timeIntervalsFormatter;
- (id)weekdayIntervalFormatter;

@end
