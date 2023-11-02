
@interface BRCAnalyticsReporter : NSObject {
    BRCAppTelemetryConverter * _appTelemetryConvertor;
    BRCItemGlobalID * _currentTelemetryItemGlobalID;
    NSNumber * _currentTelemetryToken;
    NSMutableDictionary * _eventsByKind;
    bool  _forceTelemetryDequeueQueued;
    NSData * _lastSentTelemetryEvents;
    NSSet * _lastTelemetryBatchRowIDs;
    BRCMetricEndpoint * _metricEndpoint;
    NSObject<OS_dispatch_queue> * _queue;
    BRCRTCReporter * _rtcReporter;
    BRCAccountSession * _session;
    NSObject<OS_dispatch_source> * _syncConsistencyCancellationTimer;
    NSObject<OS_dispatch_source> * _syncConsistencyDeferralTimer;
    BRCSyncHealthReport * _syncHealthReport;
    BOOL  _syncTelemetryState;
    long long  _telemetryEventCount;
    NSObject<OS_dispatch_queue> * _waitOnIdleQueue;
}

+ (void)cancelSyncConsistencyReportWithMountPath:(id)arg1 queue:(id)arg2;
+ (bool)isTelemetryReportingEnabled;

- (void).cxx_destruct;
- (void)_checkSyncConsistencyWithActivity:(id)arg1;
- (void)_cleanupTimedOutEventMetrics:(id)arg1;
- (void)_fetchTelemetryEventCountOrAdd:(long long)arg1;
- (void)_forgetEventMetrics:(id)arg1;
- (void)_gatherAppTelemetryEventsWithActivity:(id)arg1;
- (int)_getPriorityOfEvent:(id)arg1;
- (void)_handleApplySchedulerTimeoutWithActivity:(id)arg1 telemetryEventType:(int)arg2;
- (id)_prepareSyncTelemetryEventsToSend;
- (void)_reportSyncUpBackoffInfo;
- (bool)_resumePausedTreeConsistencyCheckOperationWithActivity:(id)arg1;
- (void)_setupSyncConsistencyCancellationTimerWithActivity:(id)arg1 session:(id)arg2;
- (void)_setupSyncConsistencyDeferralTimerWithActivity:(id)arg1;
- (bool)_shouldDeferForExistingSnapshot;
- (void)_waitForApplySchedulerToBeIdleWithCompletion:(id /* block */)arg1;
- (void)_withEventMetricsOfKind:(id)arg1 accessor:(id /* block */)arg2;
- (void)createFSEventToSyncUpEventForFileID:(unsigned long long)arg1 genID:(unsigned int)arg2;
- (id)createSQLConditionForRowIDs:(id)arg1;
- (void)createUserDownloadEventForOperationID:(id)arg1 isRecursive:(bool)arg2 isForBackup:(bool)arg3;
- (id)currentTelemetryToken;
- (void)deleteMissingErrorThrottles;
- (void)didApplyItemInsideSharedItemID:(id)arg1;
- (void)dropAllSyncTelemetryEvents;
- (void)dumpToContext:(id)arg1;
- (id)findTelemetryEvent:(unsigned int)arg1;
- (void)forceTelemetryDequeue;
- (void)forceTelemetryDequeueWithCompletionHandler:(id /* block */)arg1;
- (void)forgetEventMetric:(id)arg1;
- (id)initWithSession:(id)arg1;
- (void)lookupFSEventToSyncUpEventByFileID:(unsigned long long)arg1 genID:(unsigned int)arg2 accessor:(id /* block */)arg3;
- (void)lookupFSEventToSyncUpEventByItemID:(id)arg1 accessor:(id /* block */)arg2;
- (void)lookupUserDownloadEventByFileObjectID:(id)arg1 accessor:(id /* block */)arg2;
- (void)lookupUserDownloadEventByOperationID:(id)arg1 accessor:(id /* block */)arg2;
- (void)postReportForDefaultSubCategoryWithCategory:(unsigned long long)arg1 telemetryTimeEvent:(id)arg2;
- (void)registerBackgroundXPCActivities;
- (void)submitEventMetric:(id)arg1;
- (void)submitSyncTelemetryEvent:(id)arg1;
- (id)syncTelemetryEventsToSend;
- (void)updateCurrentTelemetryToken:(id)arg1;

@end
