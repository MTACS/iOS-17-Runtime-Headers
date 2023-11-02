
@interface HealthExperience.ThreadsafeHKCalendarCache : HKCalendarCache {
    void lock;
}

- (void).cxx_destruct;
- (id)calendarForTimeZone:(id)arg1;
- (id)currentCalendar;
- (id)init;

@end
