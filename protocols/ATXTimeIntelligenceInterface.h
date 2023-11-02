
@protocol ATXTimeIntelligenceInterface

@required

- (void)computeCompactTimeSummaryWithOptions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXCompactTimeSummary *, NSError *, void*
- (void)computeDailySummaryWithDate:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXDailyTimeSummary *, NSError *, void*
- (void)deletePinnedTimeEvent:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)dumpTimeFeedbackStream:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)invokeActionWithIdentifier:(void *)arg1 forEvent:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, ATXScheduledTimeEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)invokeFeedbackOption:(void *)arg1 forEvent:(void *)arg2 referenceDate:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: ATXTimeFeedbackOption *, ATXScheduledTimeEvent *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)loadPinnedTimeEventsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)logDidInvokeWidgetForEvent:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: ATXScheduledTimeEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)logFocusFilterDidChange:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)predictedDailyOverviewWithDate:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSDate *, ATXDailyOverviewOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXDailyOverview *, NSError *, void*
- (void)predictedFreeMomentsWithDateRange:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSDateInterval *, ATXFreeMomentOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXFreeMomentsResponse *, NSError *, void*
- (void)predictedTimelineWithDate:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)printRLPolicyTable:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)registerGoalWithData:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)rescheduleEvent:(void *)arg1 proposedDate:(void *)arg2 referenceDate:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: ATXScheduledTimeEvent *, ATXProposedRescheduledDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)savePinnedTimeEvent:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: ATXPinnedTimeEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveScheduledPinnedTimeEvent:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: ATXScheduledPinnedTimeEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)triggerNudgerToPollWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)unhideAllEventsFromSource:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
