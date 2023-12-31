
@interface WBSFormAutoFillCorrectionsHistoryObserver : NSObject {
    NSObject<OS_dispatch_source> * _coalescingTimerSource;
    <WBSFormAutoFillCorrectionsStore> * _correctionsStore;
    WBSCrowdsourcedFeedbackDomainNormalizer * _domainNormalizer;
    NSMutableArray * _pendingRemovedHistoryItemsToProcess;
    NSMutableArray * _pendingRemovedHistoryVisitsToProcess;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

- (void).cxx_destruct;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyVisitsWereRemoved:(id)arg1;
- (void)_historyWasCleared:(id)arg1;
- (void)_invalidateUpdateCoalescingTimer;
- (id)_normalizeURL:(id)arg1;
- (void)_updateCorrectionsStoreNow;
- (void)_updateCorrectionsStoreSoon;
- (void)dealloc;
- (void)flushPendingChangesAndDisconnectFromStoreAndHistory;
- (id)initWithCorrectionsStore:(id)arg1;

@end
