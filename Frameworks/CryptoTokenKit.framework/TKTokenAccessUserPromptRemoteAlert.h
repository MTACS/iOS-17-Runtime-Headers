
@interface TKTokenAccessUserPromptRemoteAlert : NSObject <NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, TKTokenAccessUserPrompt, TKUIServerProtocol> {
    TKTokenAccessRequest * _accessRequest;
    long long  _grantedAccess;
    SBSRemoteAlertHandle * _remoteAlertHandle;
    NSObject<OS_dispatch_semaphore> * _remoteAlertSemaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (long long)preflightStatus;
- (long long)promptUserToEvaluateRequest:(id)arg1 error:(id*)arg2;
- (void)registerTokenAccessRequestCorrelationID:(id)arg1 granted:(bool)arg2 reply:(id /* block */)arg3;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;

@end
