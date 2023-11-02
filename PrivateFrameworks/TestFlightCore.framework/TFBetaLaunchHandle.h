
@interface TFBetaLaunchHandle : NSObject <SBSRemoteAlertHandleObserver> {
    <TFBetaLaunchHandleActivationDelegate> * _activationDelegate;
    NSString * _logKey;
    BSProcessHandle * _processHandle;
}

@property (nonatomic) <TFBetaLaunchHandleActivationDelegate> *activationDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *logKey;
@property (nonatomic, readonly) BSProcessHandle *processHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateRemoteAlertWithLaunchInfo:(id)arg1;
- (bool)_remoteAlertShouldActivateForLaunchInfo:(id)arg1;
- (void)_updatedLaunchInfoForActivation:(id)arg1;
- (void)activateForTestingWithLaunchInfo:(id)arg1;
- (void)activateIfNeeded;
- (id)activationDelegate;
- (id)initWithProcessHandle:(id)arg1;
- (id)logKey;
- (id)processHandle;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)setActivationDelegate:(id)arg1;

@end
