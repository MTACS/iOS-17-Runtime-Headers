
@interface REDailyRoutineRelevanceProviderManager : RERelevanceProviderManager <REDailyRoutinePredictorDelegate, REDailyRoutineRelevanceProviderManagerProperties> {
    bool  _inEveningRoutine;
    bool  _inMorningRoutine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInEveningRoutine;
@property (nonatomic, readonly) bool isInMorningRoutine;
@property (readonly) Class superclass;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (bool)_wantsSeperateRelevanceQueue;

- (bool)_isInRoutine:(unsigned long long)arg1 forDate:(id)arg2;
- (void)_prepareForUpdate;
- (void)_updateRoutines;
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (void)dailyRoutinePredictorDidBeginEveningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidBeginMorningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidEndEveningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidEndMorningRoutine:(id)arg1;
- (void)dailyRoutinePredictorDidUpdatedPredictedRoutines:(id)arg1;
- (bool)isInEveningRoutine;
- (bool)isInMorningRoutine;
- (void)pause;
- (void)resume;

@end
