
@interface FCGoalCompletionCoordinator : NSObject <FCDailyActivityGoalDetectionDelegate> {
    <FCGoalCompletionCoordinatorDelegate> * _delegate;
    FCGoalCompletionStore * _goalCompletionStore;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _serviceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCGoalCompletionCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_activitySummaryIndexForDate:(id)arg1;
- (bool)_goalTypeAllowed:(long long)arg1;
- (void)concludeGoalDetectionRun;
- (id)delegate;
- (id)goalTypesToNotifyByActivitySummaryIndex;
- (id)initWithProfile:(id)arg1 goalCompletionStore:(id)arg2 serviceQueue:(id)arg3;
- (id)initWithProfile:(id)arg1 serviceQueue:(id)arg2;
- (void)notificationPosted:(id)arg1;
- (void)notificationPostedForGoalTypes:(id)arg1 activitySummaryIndex:(long long)arg2;
- (bool)runDailyGoalCompletionDetectionForGoalType:(long long)arg1 activitySummaryIndex:(long long)arg2 previousValue:(double)arg3 currentValue:(double)arg4 goalValue:(double)arg5 shouldAlert:(bool)arg6 goalMetHandler:(id /* block */)arg7;
- (void)setDelegate:(id)arg1;

@end
