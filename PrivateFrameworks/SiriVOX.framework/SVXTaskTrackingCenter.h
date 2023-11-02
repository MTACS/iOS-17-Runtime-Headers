
@interface SVXTaskTrackingCenter : NSObject <SVXTaskTrackingDelegate> {
    NSMutableSet * _contexts;
    <SVXTaskTrackingCenterDelegate> * _delegate;
    <SVXPerforming> * _performer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginContext:(id)arg1;
- (void)_endContext:(id)arg1;
- (void)_endContextsPassingTest:(id /* block */)arg1;
- (id)beginTrackingTaskWithContext:(id)arg1 instrumentationContext:(id)arg2;
- (void)endTrackingAllTasks;
- (void)endTrackingTaskWithContext:(id)arg1;
- (void)endTrackingTasksPassingTest:(id /* block */)arg1;
- (void)getContextsOfAllTrackedTasksUsingBlock:(id /* block */)arg1;
- (void)getContextsOfAllTrackedTasksUsingSyncBlock:(id /* block */)arg1;
- (id)initWithPerformer:(id)arg1 delegate:(id)arg2;
- (void)taskTracker:(id)arg1 childWillBegin:(id)arg2;
- (void)taskTrackerDidEnd:(id)arg1;

@end
