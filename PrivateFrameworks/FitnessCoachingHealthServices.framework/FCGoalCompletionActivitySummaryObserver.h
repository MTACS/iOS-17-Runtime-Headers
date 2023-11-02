
@interface FCGoalCompletionActivitySummaryObserver : NSObject <HDCurrentActivitySummaryHelperObserver, HDProfileReadyObserver> {
    HKActivitySummary * _currentActivitySummary;
    <FCDailyActivityGoalDetectionDelegate> * _delegate;
    HKActivitySummary * _previousActivitySummary;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _serviceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCDailyActivityGoalDetectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_runGoalCompletionForExerciseWithNewActivitySummary:(id)arg1;
- (bool)_runGoalCompletionForMoveWithNewActivitySummary:(id)arg1;
- (bool)_runGoalCompletionForStandWithNewActivitySummary:(id)arg1;
- (void)_runGoalCompletionsForNewActivitySummary:(id)arg1 forChangedFields:(unsigned long long)arg2;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (void)dealloc;
- (id)delegate;
- (id)initWithProfile:(id)arg1 serviceQueue:(id)arg2;
- (void)profileDidBecomeReady:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
