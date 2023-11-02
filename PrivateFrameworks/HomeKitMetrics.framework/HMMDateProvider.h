
@interface HMMDateProvider : NSObject {
    NSCalendar * _localCalendar;
}

@property (nonatomic, readonly, copy) NSDate *currentDate;
@property (nonatomic, readonly) NSCalendar *localCalendar;

+ (id)calendarForTimeZone:(id)arg1;
+ (id)dateFromYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
+ (long long)dayNumberOfWeekForDate:(id)arg1;
+ (long long)daysFromDate:(id)arg1 toDate:(id)arg2;
+ (id)gmtCalendar;
+ (id)sharedInstance;
+ (id)startOfDateByAddingDayCount:(long long)arg1 toDate:(id)arg2;
+ (id)startOfWeekForDate:(id)arg1;

- (void).cxx_destruct;
- (id)currentDate;
- (long long)currentDayNumberOfWeek;
- (id)init;
- (id)initWithLocalTimeZone:(id)arg1;
- (id)localCalendar;
- (long long)localHourOfDay;
- (id)startOfCurrentDay;
- (id)startOfCurrentMonth;
- (id)startOfCurrentWeek;
- (id)startOfCurrentYear;
- (id)startOfDayByAddingDayCount:(long long)arg1;

@end
