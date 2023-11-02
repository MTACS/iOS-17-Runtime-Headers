
@interface WBSKeychainSyncingMonitor : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    ACMonitoredAccountStore * _accountStore;
    unsigned long long  _cachedKeychainSyncSettingValue;
    NSObject<OS_dispatch_queue> * _internalQueue;
    OTClique * _keychainClique;
    NSString * _primaryAppleAccountAltDSID;
    NSObject<OS_dispatch_queue> * _syncStatusFetchingQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCurrentAppleIDManaged;
@property (nonatomic, readonly) bool isUsingiCloud;
@property (nonatomic, readonly) unsigned long long keychainSyncSettingValue;
@property (readonly) Class superclass;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_fetchKeychainSyncingStatus;
- (void)_keychainSyncingStatusMayHaveChanged;
- (void)_updateAccountOnInternalQueue:(id)arg1;
- (void)_updateKeychainClique;
- (void)accountCredentialChanged:(id)arg1;
- (void)accountWasAdded:(id)arg1;
- (void)accountWasModified:(id)arg1;
- (void)accountWasRemoved:(id)arg1;
- (id)init;
- (bool)isCurrentAppleIDManaged;
- (bool)isUsingiCloud;
- (unsigned long long)keychainSyncSettingValue;

@end
