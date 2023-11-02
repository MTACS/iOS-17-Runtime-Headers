
@interface PDCPrivacyAlertPresenter : NSObject <SBSRemoteAlertHandleObserver> {
    SBSRemoteAlertHandle * _alertHandle;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _requestToAlertMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedPresenter;

- (void).cxx_destruct;
- (void)_activateAlertHandleForIdentity:(id)arg1 settings:(id)arg2 repsonseHandler:(id /* block */)arg3;
- (void)_ensureAppIsLaunchableWithIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)activateRemoteAlertWithIdentity:(id)arg1 requestHandle:(id)arg2 forcePresent:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)didCancelRequestHandle:(id)arg1;
- (id)init;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;

@end
