
@protocol _DASActivitySchedulerIntrospecting <NSObject>

@required

- (NSDictionary *)activityRunStatistics;
- (void)addPauseExceptParameter:(NSString *)arg1;
- (NSArray *)allBudgets;
- (double)balanceForBudgetWithName:(NSString *)arg1;
- (NSArray *)blockingPoliciesWithParameters:(NSDictionary *)arg1;
- (NSDictionary *)clasStatus;
- (NSDictionary *)currentPredictions;
- (void)decrementBy:(double)arg1 forBudgetWithName:(NSString *)arg2;
- (bool)deferActivities:(NSArray *)arg1;
- (NSArray *)delayedRunningActivities;
- (void)enterTestModeWithParameters:(NSDictionary *)arg1;
- (NSDictionary *)evaluateAllActivities;
- (NSDictionary *)evaluatePolicies:(NSString *)arg1;
- (void)forceRunActivities:(NSArray *)arg1;
- (void)pauseWithParameters:(NSDictionary *)arg1;
- (NSMutableDictionary *)policies;
- (void)runActivitiesWithUrgency:(long long)arg1 activities:(NSArray *)arg2;
- (NSDictionary *)runProceedableActivities:(NSOrderedSet *)arg1;
- (NSArray *)runningActivities;
- (NSArray *)runningGroupActivities;
- (NSArray *)scoresForActivityWithName:(NSString *)arg1;
- (void)setBalance:(double)arg1 forBudgetWithName:(NSString *)arg2;
- (void)setCapacity:(double)arg1 forBudgetWithName:(NSString *)arg2;
- (NSDictionary *)statistics;
- (void)submitRateLimitConfiguration:(_DASActivityRateLimitConfiguration *)arg1;
- (NSArray *)submittedActivities;

@end
