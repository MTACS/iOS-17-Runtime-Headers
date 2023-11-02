
@interface REUpNextPeriodOfDayPredictor : REObservableSingleton

@property (nonatomic, readonly) unsigned long long currentPeriodOfDay;
@property (nonatomic, readonly) NSDateInterval *intervalForCurrentPeriodOfDay;

- (unsigned long long)currentPeriodOfDay;
- (id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1;
- (id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1;
- (id)intervalForCurrentPeriodOfDay;

@end
