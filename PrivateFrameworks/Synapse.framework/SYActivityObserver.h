
@interface SYActivityObserver : NSObject <NSUserActivityObserver, SYNSUserActivityObserver_Extensions> {
    SYBacklinkMonitorClient * __client;
    SYDefaultsClient * __defaultsClient;
    id /* block */  __delayedEvaluationBlock;
    NSDate * __lastReportedActivityTime;
    bool  __lastReportedActivityWasLinkable;
    NSObject<OS_dispatch_queue> * __observerQueue;
    SYUserActivityIdentifierInfo * __pendingActivityInfo;
    SYApplicationStateObserver * _appStateObserver;
}

@property (nonatomic, retain) SYBacklinkMonitorClient *_client;
@property (nonatomic, retain) SYDefaultsClient *_defaultsClient;
@property (nonatomic, copy) id /* block */ _delayedEvaluationBlock;
@property (nonatomic, retain) NSDate *_lastReportedActivityTime;
@property bool _lastReportedActivityWasLinkable;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_observerQueue;
@property (nonatomic, retain) SYUserActivityIdentifierInfo *_pendingActivityInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)loadSynapseObserver;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_client;
- (id)_defaultActivityObserverContext;
- (id)_defaultsClient;
- (id /* block */)_delayedEvaluationBlock;
- (void)_discoverAndProcessActiveUserActivityWithContext:(id)arg1;
- (void)_handleAppBecomeActive:(id)arg1;
- (void)_handleAppResignActive:(id)arg1;
- (id)_lastReportedActivityTime;
- (bool)_lastReportedActivityWasLinkable;
- (id)_observerQueue;
- (id)_pendingActivityInfo;
- (void)_reportActiveUserActivityChangeIfNeeded:(id)arg1 context:(id)arg2;
- (void)indexedContentItemsDidChange;
- (id)init;
- (void)q_processActiveUserActivity:(id)arg1 identifier:(id)arg2 linkable:(bool)arg3 context:(id)arg4;
- (void)registerForAppStateNotifications;
- (void)set_client:(id)arg1;
- (void)set_defaultsClient:(id)arg1;
- (void)set_delayedEvaluationBlock:(id /* block */)arg1;
- (void)set_lastReportedActivityTime:(id)arg1;
- (void)set_lastReportedActivityWasLinkable:(bool)arg1;
- (void)set_observerQueue:(id)arg1;
- (void)set_pendingActivityInfo:(id)arg1;
- (void)userActivityCanonicalURLWasChanged:(id)arg1;
- (void)userActivityDidBecomeCurrent:(id)arg1 current:(bool)arg2;
- (void)userActivityPersistentIdentifierWasChanged:(id)arg1 persistentIdentifier:(id)arg2 previousValue:(id)arg3;
- (void)userActivityTargetContentIdentifierWasChanged:(id)arg1 targetContentIdentifier:(id)arg2 previousValue:(id)arg3;
- (void)userActivityWebpageURLWasChanged:(id)arg1 webpageURL:(id)arg2 previousValue:(id)arg3;

@end
