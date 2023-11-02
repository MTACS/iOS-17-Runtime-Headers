
@interface FIUIWeeklyGoalModel : NSObject {
    HKHealthStore * _healthStore;
}

- (void).cxx_destruct;
- (void)fetchMostRecentWeeklyGoalWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2;
- (void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 completion:(id /* block */)arg3;
- (void)saveNewWeeklyGoal:(id)arg1 quantityType:(id)arg2 forDate:(id)arg3 completion:(id /* block */)arg4;
- (void)saveNewWeeklyGoals:(id)arg1;

@end
