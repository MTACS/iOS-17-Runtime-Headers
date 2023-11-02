
@interface ACHMindfulMinutesAwardingEnvironment : NSObject {
    NSCalendar * _calendar;
    NSDate * _currentDate;
    HKHealthStore * _healthStore;
    ACHAwardsWorkoutClient * _workoutClient;
}

@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, retain) NSDate *currentDate;
@property (nonatomic) HKHealthStore *healthStore;
@property (nonatomic, readonly) double numberOfMindfulMinutesInCurrentMonth;
@property (nonatomic, readonly) double todayMindfulMinutesValue;
@property (nonatomic) ACHAwardsWorkoutClient *workoutClient;

- (void).cxx_destruct;
- (id)_dayDateIntervalForCurrentDate;
- (id)_monthDateIntervalForCurrentDate;
- (id)calendar;
- (id)currentDate;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 workoutClient:(id)arg2 calendar:(id)arg3 currentDate:(id)arg4;
- (void)logValues;
- (double)numberOfMindfulMinutesInCurrentMonth;
- (void)setCalendar:(id)arg1;
- (void)setCurrentDate:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setWorkoutClient:(id)arg1;
- (double)todayMindfulMinutesValue;
- (id)workoutClient;

@end
