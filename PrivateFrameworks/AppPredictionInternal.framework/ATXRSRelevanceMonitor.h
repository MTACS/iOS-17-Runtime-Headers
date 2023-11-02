
@interface ATXRSRelevanceMonitor : NSObject {
    _PASSimpleCoalescingTimer * _coalescedRefreshCurrentlyRelevantCandidatesOperation;
    BMBiomeScheduler * _computedModeScheduler;
    BPSSink * _computedModeSink;
    <ATXRSRelevanceMonitorDelegate> * _delegate;
    BMBiomeScheduler * _inferredModeScheduler;
    BPSSink * _inferredModeSink;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _queue_candidates;
}

@property (nonatomic) <ATXRSRelevanceMonitorDelegate> *delegate;

- (void).cxx_destruct;
- (void)_coalescedRefreshCurrentlyRelevantCandidates;
- (id)_earliestFutureDateAmongDateRelevantContexts:(id)arg1;
- (bool)_isBehavioralRelevanceSatisfiedForCandidate:(id)arg1 currentMode:(unsigned long long)arg2;
- (bool)_isDateRelevantContextSatisfied:(id)arg1;
- (id)_nonnullEndDateOfDateRelevantContext:(id)arg1;
- (void)_queue_clearAllCurrentMonitoring;
- (void)_queue_refreshCurrentlyRelevantCandidates;
- (void)_queue_startMonitoringDateRelevantContexts:(id)arg1;
- (void)_queue_startMonitoringModeChanges;
- (id)delegate;
- (id)init;
- (void)resetToMonitorForRelevantShortcutCandidates:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
