
@interface FMFCore.FMFRefreshController : _TtCs12_SwiftObject {
    void apsConnectionHandler;
    void callbackInterval;
    void dataManager;
    void delegate;
    void firstRefreshCompleted;
    void identifier;
    void initializationInProgress;
    void initializedOnce;
    void interactionController;
    void isRefreshing;
    void isSnapshotMode;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastRefreshTime;
    void legacyFallbackData;
    void liveSessionStatistics;
    void maxCallbackInterval;
    void minCallbackInterval;
    void refreshQueue;
    void refreshReason;
    void refreshTimer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  selectedFriend;
    void tapContexts;
    void useOptimizedFetch;
}

- (void)refreshTimerFired;

@end
