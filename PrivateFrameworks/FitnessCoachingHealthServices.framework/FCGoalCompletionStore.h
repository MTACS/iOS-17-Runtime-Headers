
@interface FCGoalCompletionStore : NSObject {
    NSDictionary * _goalTypesToNotifyByActivitySummaryIndex;
    HDProfile * _profile;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unfairLock;
}

- (void).cxx_destruct;
- (long long)_activitySummaryIndexForDate:(id)arg1;
- (id)_goalCompletionByActivitySummaryIndex;
- (unsigned long long)_goalTypesMetForActivitySummaryIndex:(long long)arg1;
- (void)_setGoalCompletionByActivitySummaryIndex:(id)arg1;
- (void)_setGoalTypesMet:(unsigned long long)arg1 forActivitySummaryIndex:(long long)arg2;
- (void)_setGoalTypesToNotifyByActivitySummaryIndex:(id)arg1;
- (id)_trimOldGoalCompletions:(id)arg1 index:(long long)arg2;
- (id)_userDefaultsDomain;
- (void)addDailyGoalTypePreviouslyMet:(long long)arg1 activitySummaryIndex:(long long)arg2;
- (void)addGoalTypeToDailyGoalTypesMet:(long long)arg1 activitySummaryIndex:(long long)arg2;
- (void)addGoalTypeToNotify:(long long)arg1 activitySummaryIndex:(long long)arg2;
- (id)allGoalTypesMetForActivitySummaryIndex:(long long)arg1;
- (id)goalTypesToNotifyByActivitySummaryIndex;
- (id)goalTypesToNotifyForActivitySummaryIndex:(long long)arg1;
- (id)initWithProfile:(id)arg1;
- (bool)isDailyGoalTypeMet:(long long)arg1 activitySummaryIndex:(long long)arg2;
- (void)removeGoalTypesToNotify:(id)arg1 activitySummaryIndex:(long long)arg2;

@end
