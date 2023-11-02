
@interface SBRemoteAlertHandleLocalClient : NSObject <SBRemoteTransientOverlaySessionObserver, SBSRemoteAlertHandleClient> {
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    NSMutableDictionary * _sessionIDToRemoteAlertHandle;
    SBRemoteTransientOverlaySessionManager * _sessionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_registerHandle:(id)arg1 forSession:(id)arg2;
- (void)_unregisterHandle:(id)arg1;
- (void)activateRemoteAlertHandle:(id)arg1 withContext:(id)arg2;
- (id)createRemoteAlertHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;
- (id)initWithSessionManager:(id)arg1;
- (void)invalidateRemoteAlertHandle:(id)arg1;
- (id)remoteAlertHandlesForDefinition:(id)arg1 allowsCreation:(bool)arg2 configurationContext:(id)arg3;
- (void)remoteTransientOverlaySession:(id)arg1 didInvalidateWithReason:(long long)arg2 error:(id)arg3;
- (void)remoteTransientOverlaySessionDidActivate:(id)arg1;
- (void)remoteTransientOverlaySessionDidDeactivate:(id)arg1;

@end
