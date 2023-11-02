
@interface HMMTRAttestationStatus : NSObject <MTRDeviceAttestationDelegate> {
    HMMTRAccessoryServer * _accessoryServer;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSNumber * _failSafeExpiryTimeoutSecs;
    HMMTRUIDialogPresenter * _uiDialogPresenter;
}

@property (nonatomic, retain) HMMTRAccessoryServer *accessoryServer;
@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSNumber *failSafeExpiryTimeoutSecs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMMTRUIDialogPresenter *uiDialogPresenter;

- (void).cxx_destruct;
- (id)accessoryServer;
- (id)clientQueue;
- (void)deviceAttestation:(id)arg1 completedForDevice:(void*)arg2 attestationDeviceInfo:(id)arg3 error:(id)arg4;
- (id)failSafeExpiryTimeoutSecs;
- (id)initWithQueue:(id)arg1 uiDialogPresenter:(id)arg2 failSafeExpiryTimeoutSecs:(id)arg3;
- (void)populateDelegate:(id)arg1;
- (void)setAccessoryServer:(id)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setUiDialogPresenter:(id)arg1;
- (id)uiDialogPresenter;

@end
