
@interface PKAccountProvisioningController : NSObject {
    PKAccountCredential * _accountCredential;
    NSObject<OS_dispatch_source> * _activationTimer;
    unsigned long long  _addToAMPState;
    unsigned long long  _addToIDMSState;
    <PKAccountProvisioningControllerDelegate> * _delegate;
    bool  _didAddToAMP;
    unsigned long long  _localPassActivationState;
    unsigned long long  _makeAccountPassDefaultOnLocalDeviceState;
    bool  _makeDefaultInAMP;
    double  _passActivationTimeout;
    bool  _passIsActivated;
    unsigned long long  _provisionLocalPassState;
    unsigned long long  _provisionWatchPassState;
    NSString * _provisionedPassUniqueID;
    PKPaymentProvisioningController * _provisioningController;
    bool  _usingRemoteLibrary;
    NPKCompanionAgentConnection * _watchConnection;
}

@property (nonatomic, readonly) unsigned long long addToAMPState;
@property (nonatomic, readonly) unsigned long long addToIDMSState;
@property (nonatomic) <PKAccountProvisioningControllerDelegate> *delegate;
@property (nonatomic) bool didAddToAMP;
@property (nonatomic, readonly) unsigned long long localPassActivationState;
@property (nonatomic, readonly) unsigned long long makeAccountPassDefaultOnLocalDeviceState;
@property (nonatomic) double passActivationTimeout;
@property (nonatomic, readonly) unsigned long long provisionLocalPassState;
@property (nonatomic, readonly) unsigned long long provisionWatchPassState;
@property (nonatomic, copy) NSString *provisionedPassUniqueID;

+ (bool)_isPaymentPassActivated:(id)arg1 forAccountCredential:(id)arg2;

- (void).cxx_destruct;
- (void)_handlePassActiviated;
- (void)_informDelegateOfError:(id)arg1;
- (void)_informDelegateOfStateUpdate;
- (id)_notificationDidChangeNames;
- (void)_passLibraryDidChange:(id)arg1;
- (void)_processRemainingTasks;
- (void)_setupAccountAndProvisionAccountCredenital:(id)arg1 provisioningController:(id)arg2 completion:(id /* block */)arg3;
- (void)_startPassActivationObserver;
- (void)_stopPassActivationObserver;
- (void)addToAMPAsDefault:(bool)arg1;
- (unsigned long long)addToAMPState;
- (void)addToIDMS;
- (unsigned long long)addToIDMSState;
- (void)dealloc;
- (id)delegate;
- (bool)didAddToAMP;
- (id)initWithAccountCredential:(id)arg1 provisioningController:(id)arg2 accountService:(id)arg3;
- (id)initWithAccountCredential:(id)arg1 provisioningController:(id)arg2 usingRemoteLibrary:(bool)arg3;
- (unsigned long long)localPassActivationState;
- (void)makeAccountPassDefaultOnLocalDevice;
- (unsigned long long)makeAccountPassDefaultOnLocalDeviceState;
- (double)passActivationTimeout;
- (void)provisionAccountPassToLocalDevice;
- (void)provisionAccountPassToWatchAsDefault:(bool)arg1;
- (unsigned long long)provisionLocalPassState;
- (unsigned long long)provisionWatchPassState;
- (id)provisionedPassUniqueID;
- (void)setDelegate:(id)arg1;
- (void)setDidAddToAMP:(bool)arg1;
- (void)setPassActivationTimeout:(double)arg1;
- (void)setProvisionedPassUniqueID:(id)arg1;

@end
