
@interface ATXTimeIntelligenceClient : NSObject <ATXTimeIntelligenceClientProtocol, ATXTimeIntelligenceInterface> {
    NSHashTable * _observers;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_notifyObserversOfReload;
- (void)computeCompactTimeSummaryWithOptions:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)computeDailySummaryWithDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dataSourcesDidUpdateWithCompletionHandler:(id /* block */)arg1;
- (void)deletePinnedTimeEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dumpTimeFeedbackStream:(id /* block */)arg1;
- (id)init;
- (void)invokeActionWithIdentifier:(id)arg1 forEvent:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)invokeFeedbackOption:(id)arg1 forEvent:(id)arg2 referenceDate:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)loadPinnedTimeEventsWithCompletionHandler:(id /* block */)arg1;
- (void)logDidInvokeWidgetForEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)logFocusFilterDidChange:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)predictedDailyOverviewWithDate:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)predictedFreeMomentsWithDateRange:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)predictedTimelineWithDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)printRLPolicyTable:(id /* block */)arg1;
- (void)registerGoalWithData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerObserver:(id)arg1;
- (void)rescheduleEvent:(id)arg1 proposedDate:(id)arg2 referenceDate:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)savePinnedTimeEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveScheduledPinnedTimeEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setXpcConnection:(id)arg1;
- (void)triggerNudgerToPollWithCompletionHandler:(id /* block */)arg1;
- (void)unhideAllEventsFromSource:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)xpcConnection;

@end
