
@interface CDPDCircleController : NSObject <CDPDCircleControl> {
    NSObject<OS_dispatch_queue> * _cdpdCircleDefaultQueue;
    CDPDCircleStateObserver * _circleJoinObserver;
    <CDPDCircleProxy> * _circleProxy;
    unsigned long long  _cliqueStatusRetryCount;
    <CDPDCircleDelegate> * _delegate;
    <CDPDOctagonTrustProxy> * _octagonProxy;
    NSObject<OS_dispatch_queue> * _requestSynchronizationQueue;
    NSArray * _retryIntervals;
    <CDPStateUIProviderInternal> * _uiProvider;
}

@property (nonatomic, retain) <CDPDCircleProxy> *circleProxy;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CDPDCircleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CDPDOctagonTrustProxy> *octagonProxy;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CDPStateUIProviderInternal> *uiProvider;

- (void).cxx_destruct;
- (void)_attemptCustodianBackupRecoveryWithInfo:(id)arg1 result:(id)arg2 ignoreBackups:(bool)arg3 completion:(id /* block */)arg4;
- (void)_joinCircleFallbackWithResult:(id)arg1 ignoreBackups:(bool)arg2 completion:(id /* block */)arg3;
- (void)_joinCircleIgnoringBackups:(bool)arg1 completion:(id /* block */)arg2;
- (id)_peerDeviceNamesByPeerID;
- (void)_requestCircleJoinWithObserver:(id)arg1 requestBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_requestToJoinAfterRestoreAndWaitForSuccessWithHandler:(id /* block */)arg1;
- (void)_requestToJoinAndWaitForSuccessWithHandler:(id /* block */)arg1;
- (void)_requestToJoinWithObserver:(id)arg1 completion:(id /* block */)arg2;
- (void)_requestToJoinWithRequestBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_silentReauthWithCompletion:(id /* block */)arg1;
- (void)applyToJoinCircleWithJoinHandler:(id /* block */)arg1;
- (bool)canRetryCliqueStatus;
- (void)cancelApplicationToJoinCircle;
- (id)circleProxy;
- (unsigned long long)circleStatus;
- (int)circleSyncingStatus;
- (long long)cliqueStatus;
- (void)dealloc;
- (id)delegate;
- (id)initWithUiProvider:(id)arg1 delegate:(id)arg2 circleProxy:(id)arg3 octagonTrustProxy:(id)arg4;
- (void)joinCircleIgnoringBackups:(bool)arg1 completion:(id /* block */)arg2;
- (void)joinCircleWithCompletion:(id /* block */)arg1;
- (long long)nextRetryInterval;
- (id)octagonProxy;
- (id)peerID;
- (void)prepareCircleStateForRecovery;
- (void)promptForCredentials:(id /* block */)arg1;
- (void)resetCircleIncludingCloudKitData:(bool)arg1 cloudKitResetReasonDescription:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setCircleProxy:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOctagonProxy:(id)arg1;
- (void)setUiProvider:(id)arg1;
- (bool)synchronizeCircleViews;
- (id)uiProvider;
- (void)useCircleInfoToUpdateNameForDevices:(id)arg1;

@end
