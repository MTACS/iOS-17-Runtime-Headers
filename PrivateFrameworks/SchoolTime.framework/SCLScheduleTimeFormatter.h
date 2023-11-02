
@interface SCLScheduleTimeFormatter : NSFormatter {
    NSCalendar * _calendar;
    NSDateFormatter * _dateFormatter;
}

- (void).cxx_destruct;
- (id)init;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForScheduleTime:(id)arg1;

@end
