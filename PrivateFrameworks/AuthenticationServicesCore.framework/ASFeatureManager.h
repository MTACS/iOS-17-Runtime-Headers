
@interface ASFeatureManager : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    ACMonitoredAccountStore * _accountStore;
    NSObject<OS_dispatch_queue> * _internalQueue;
    OTClique * _keychainClique;
    NSString * _primaryAppleAccountAltDSID;
    WBSAutoFillQuirksManager * _quirksManager;
}

@property (getter=isAirDropPasswordsAvailable, nonatomic, readonly) bool airDropPasswordsAvailable;
@property (getter=canKeychainSyncBeEnabled, nonatomic, readonly) bool canKeychainSyncBeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDeviceConfiguredToAllowPasskeys, nonatomic, readonly) bool deviceConfiguredToAllowPasskeys;
@property (nonatomic, readonly) bool hasPrimaryAppleAccount;
@property (readonly) unsigned long long hash;
@property (getter=isKeychainSyncEnabled, nonatomic, readonly) bool keychainSyncEnabled;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_fetchCurrentManagedConfiguration;
- (void)_keychainSyncingStatusMayHaveChanged;
- (bool)_shouldApplyPasskeyQuirks;
- (void)_updateAccountOnInternalQueue:(id)arg1;
- (void)_updateKeychainClique;
- (void)accountCredentialChanged:(id)arg1;
- (void)accountWasAdded:(id)arg1;
- (void)accountWasModified:(id)arg1;
- (void)accountWasRemoved:(id)arg1;
- (bool)arePasskeysDisallowedForRelyingParty:(id)arg1;
- (bool)canKeychainSyncBeEnabled;
- (bool)canRequestEnterpriseAttestationForRelyingParty:(id)arg1;
- (id)entepriseAttestationIdentityPersistentReferenceForRelyingParty:(id)arg1;
- (bool)hasPrimaryAppleAccount;
- (id)init;
- (bool)isAirDropPasswordsAvailable;
- (bool)isClientEntitledForInternalTestingWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (bool)isDeviceConfiguredToAllowPasskeys;
- (bool)isKeychainSyncEnabled;
- (bool)shouldUseFallbackUIForRelyingParty:(id)arg1;

@end
