
@interface _SBSUIRemoteAlertServiceObserverHandle : NSObject <SBSRemoteAlertHandleObserver> {
    id /* block */  _activationHandler;
    id /* block */  _deactivationHandler;
}

@property (nonatomic, copy) id /* block */ activationHandler;
@property (nonatomic, copy) id /* block */ deactivationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)activationHandler;
- (id /* block */)deactivationHandler;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)setActivationHandler:(id /* block */)arg1;
- (void)setDeactivationHandler:(id /* block */)arg1;

@end
