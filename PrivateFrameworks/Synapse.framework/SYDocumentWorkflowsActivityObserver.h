
@interface SYDocumentWorkflowsActivityObserver : NSObject <NSUserActivityObserver> {
    SYApplicationStateObserver * _appStateObserver;
    SYDocumentWorkflowsCloseConfirmationSettings * _closeConfirmationSettings;
    SYDocumentWorkflowsActivityChangeHandler * _handler;
    NSObject<OS_dispatch_queue> * _observerQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SYDocumentWorkflowsActivityChangeHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleActiveUserActivityChange:(id)arg1;
- (void)_handleActiveUserActivityChangeAfterDelay:(id)arg1;
- (void)_handleAppBecomeActive:(id)arg1;
- (void)_handleAppResignActive:(id)arg1;
- (void)_updateLinkedDocuments;
- (void)dealloc;
- (id)handler;
- (id)init;
- (void)registerForAppStateNotifications;
- (void)setHandler:(id)arg1;
- (void)userActivityDidBecomeCurrent:(id)arg1 current:(bool)arg2;
- (void)userActivityPersistentIdentifierWasChanged:(id)arg1 persistentIdentifier:(id)arg2 previousValue:(id)arg3;

@end
