
@interface TIUserModelValues : NSObject {
    TIAnalyticsMetricsContext * _context;
    NSDictionary * _durableCounters;
    NSString * _inputMode;
    NSDictionary * _settingsDictionary;
    NSMutableDictionary * _transientCounters;
    <TIUserModelDataStoring> * _userModelStore;
}

@property (nonatomic, readonly) TIAnalyticsMetricsContext *context;
@property (nonatomic, readonly) NSDictionary *durableCounters;
@property (nonatomic, readonly) NSString *inputMode;
@property (nonatomic, readonly) NSDictionary *settingsDictionary;
@property (nonatomic, readonly) <TIUserModelDataStoring> *userModelDataStore;

- (void).cxx_destruct;
- (void)addDouble:(double)arg1 toCounterWithKey:(id)arg2 andCandidateLength:(int)arg3;
- (void)addEntry:(id)arg1 toCounter:(id)arg2 forDaysPrior:(int)arg3;
- (void)addInteger:(int)arg1 toCounterWithKey:(id)arg2 andCandidateLength:(int)arg3;
- (void)addToTransientCounterFromDatabaseEntry:(id)arg1 withWeeklyMetricKeys:(id)arg2 fromLoadedDate:(id)arg3;
- (id)aggregatedCountFromTransientCounterWithName:(id)arg1 forNumberOfDays:(int)arg2 fromLoadedDate:(id)arg3;
- (id)context;
- (id)countsFromTransientCounterWithName:(id)arg1 forNumberOfDays:(int)arg2 fromLoadedDate:(id)arg3;
- (id)durableCounters;
- (void)extendCountersForWeeklyMetricKeys:(id)arg1;
- (id)getTransientCounterForKey:(id)arg1;
- (int)indexFromCandidateLength:(int)arg1 forCounter:(id)arg2;
- (id)initWithInputMode:(id)arg1 context:(id)arg2 userModelDataStore:(id)arg3 durableCounters:(id)arg4 settingsDictionary:(id)arg5;
- (id)inputMode;
- (void)loadTransientCounter:(id)arg1 forNumberOfDays:(int)arg2 fromLoadedDate:(id)arg3;
- (void)persistForDate:(id)arg1;
- (id)settingValueFromName:(id)arg1;
- (id)settingsDictionary;
- (id)userModelDataStore;

@end
