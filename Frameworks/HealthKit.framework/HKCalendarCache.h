
@interface HKCalendarCache : NSObject {
    NSMutableDictionary * _calendarsByTimeZoneName;
    NSCalendar * _test_currentCalendar;
}

+ (id)earliestTimeZoneCalendar;
+ (id)latestTimeZoneCalendar;

- (void).cxx_destruct;
- (void)_test_setCurrentCalendar:(id)arg1;
- (id)calendarForTimeZone:(id)arg1;
- (id)currentCalendar;
- (id)init;

@end
