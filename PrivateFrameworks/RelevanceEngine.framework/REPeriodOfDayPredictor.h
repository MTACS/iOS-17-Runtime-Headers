
@interface REPeriodOfDayPredictor : REPredictor <REPeriodOfDayPredictorProperties> {
    REDuetKnowledgeStore * _knowledgeStore;
    REUpNextTimer * _periodOfDayUpdateTimer;
    NSArray * _storedPeriods;
    NSLock * _storedPeriodsLock;
}

@property (nonatomic, readonly) unsigned long long currentPeriodOfDay;
@property (nonatomic, readonly) NSDateInterval *intervalForCurrentPeriodOfDay;
@property (nonatomic, readonly) NSArray *storedPeriods;

+ (double)updateInterval;

- (void).cxx_destruct;
- (id)_defaultDayPeriodsOfDayForDate:(id)arg1;
- (void)_getAllSleepIntervalsWithCompletion:(id /* block */)arg1;
- (void)_getHistoricSleepIntervalsWithCompletion:(id /* block */)arg1;
- (void)_getPredictedSleepIntervalsWithCompletion:(id /* block */)arg1;
- (void)_handleSignificantTimeChange;
- (id)_init;
- (id)_nextDayPeriodUpdateDate;
- (id)_periodsOfDayForSleepIntervals:(id)arg1;
- (void)_queue_updateNextDateUpdateTimer;
- (unsigned long long)currentPeriodOfDay;
- (id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1;
- (id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1 afterDate:(id)arg2;
- (id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1;
- (id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1 beforeDate:(id)arg2;
- (void)dealloc;
- (id)intervalForCurrentPeriodOfDay;
- (id)storedPeriods;
- (void)update;

@end
