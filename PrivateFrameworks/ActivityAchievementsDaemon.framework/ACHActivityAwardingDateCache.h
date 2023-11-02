
@interface ACHActivityAwardingDateCache : NSObject {
    NSCalendar * _calendar;
    NSDate * _currentDate;
    NSDateComponents * _currentDateComponents;
    NSNumber * _dayOfMonthForToday;
    NSNumber * _dayOfWeekForLastDayOfFitnessWeek;
    NSNumber * _dayOfWeekForToday;
    NSNumber * _numberOfDaysInThisMonth;
}

@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, retain) NSDate *currentDate;
@property (nonatomic, retain) NSDateComponents *currentDateComponents;
@property (nonatomic, readonly) NSNumber *dayOfMonthForToday;
@property (nonatomic, readonly) NSNumber *dayOfWeekForLastDayOfFitnessWeek;
@property (nonatomic, readonly) NSNumber *dayOfWeekForToday;
@property (nonatomic, readonly) NSNumber *numberOfDaysInThisMonth;

- (void).cxx_destruct;
- (void)_clearDateVariables;
- (id)calendar;
- (id)currentDate;
- (id)currentDateComponents;
- (id)dayOfMonthForToday;
- (id)dayOfWeekForLastDayOfFitnessWeek;
- (id)dayOfWeekForToday;
- (id)initWithCalendar:(id)arg1;
- (id)numberOfDaysInThisMonth;
- (void)setCalendar:(id)arg1;
- (void)setCurrentDate:(id)arg1;
- (void)setCurrentDateComponents:(id)arg1;

@end
