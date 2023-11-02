
@interface HMDAirPlayAccessory : HMDMediaAccessory <HMDAccessoryDisassociation, HMDAccessoryMinimumUserPrivilegeCapable, HMDAccessoryUserManagement, HMDDevicePreferenceDataSource, HMFLogging, HMFTimerDelegate> {
    HMFExponentialBackoffTimer * _configurationRetryTimer;
    long long  _minimumUserPriviledge;
    HMFPairingIdentity * _pairingIdentity;
    NSString * _password;
}

@property (nonatomic, readonly) HMFExponentialBackoffTimer *configurationRetryTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long minimumUserPriviledge;
@property (readonly, copy) HMFPairingIdentity *pairingIdentity;
@property (readonly, copy) NSString *password;
@property (readonly) Class superclass;
@property (readonly) bool supportsDisassociation;
@property (readonly) bool supportsUserManagement;

+ (void)initialize;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleUpdatedName:(id)arg1;
- (void)addUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addUserPairingIdentity:(id)arg1 isOwner:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)advertisement;
- (id)backingStoreObjects:(long long)arg1;
- (id)configurationRetryTimer;
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(bool)arg4;
- (void)disassociatePairingIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)disassociateWithCompletionHandler:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)handleUpdatedAdvertisement:(id)arg1;
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;
- (void)handleUpdatedPassword:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)logIdentifier;
- (id)messageSendPolicy;
- (long long)minimumUserPriviledge;
- (id)pairingIdentity;
- (void)pairingsWithCompletionHandler:(id /* block */)arg1;
- (id)password;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (void)removeUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeUserPairingIdentity:(id)arg1 isOwner:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setAdvertisement:(id)arg1;
- (void)setMinimumUserPriviledge:(long long)arg1;
- (void)setPairingIdentity:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setReachable:(bool)arg1;
- (bool)supportsDeviceWithCapabilities:(id)arg1;
- (bool)supportsDisassociation;
- (bool)supportsMinimumUserPrivilege;
- (bool)supportsUserManagement;
- (void)timerDidFire:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;

@end
