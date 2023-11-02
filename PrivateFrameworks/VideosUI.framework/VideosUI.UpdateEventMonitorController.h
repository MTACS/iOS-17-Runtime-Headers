
@interface VideosUI.UpdateEventMonitorController : NSObject <VUIAppDocumentUpdateEventMonitorObserving> {
    void $__lazy_storage_$_foregroundTTLExpirationMap;
    void $__lazy_storage_$_updateEventStore;
    void controllerName;
    void documentEventIterable;
    void eventEligibleViewModels;
    void hasRefreshEvents;
    void isCollectionChildrenUpdateMode;
    void isDocumentDirty;
    void isDocumentDirtyForRefreshEvents;
    void isOptimizedTTLRefreshEnabled;
    void isSuspended;
    void lastMonitoringReason;
    void registrationHandler;
    void viewModel;
}

- (void).cxx_destruct;
- (void)appDocumentDidReceiveEvent:(id)arg1;
- (void)appDocumentHasBecomeActive;
- (id)init;

@end
