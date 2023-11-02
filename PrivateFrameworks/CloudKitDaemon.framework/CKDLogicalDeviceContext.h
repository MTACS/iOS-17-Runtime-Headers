
@interface CKDLogicalDeviceContext : NSObject {
    CKDAccountDataSecurityObserver * _accountDataSecurityObserver;
    CKDLogicalDeviceScopedStateManager * _deviceScopedStateManager;
    CKDMetadataCache * _metadataCache;
    CKDOperationInfoCache * _operationInfoCache;
    NSHashTable * _sharedPcsCaches;
    <CKTestDeviceReferenceProtocol> * _testDeviceReference;
    <CKDTestServerProtocol> * _testServer;
    CKDThrottleManager * _throttleManager;
    CKDTokenRegistrationScheduler * _tokenRegistrationScheduler;
}

@property (nonatomic, retain) CKDAccountDataSecurityObserver *accountDataSecurityObserver;
@property (nonatomic, readonly) NSURL *cacheDirectory;
@property (nonatomic, readonly) CKSQLiteDatabase *deviceScopedDatabase;
@property (nonatomic, readonly) CKDLogicalDeviceScopedStateManager *deviceScopedStateManager;
@property (nonatomic, readonly) bool isLiveDevice;
@property (nonatomic, readonly) CKDMetadataCache *metadataCache;
@property (nonatomic, readonly) CKDOperationInfoCache *operationInfoCache;
@property (nonatomic, readonly) long long pushBehavior;
@property (nonatomic, retain) NSHashTable *sharedPcsCaches;
@property (nonatomic, readonly) <CKDTestDeviceProtocol> *testDevice;
@property (readonly) <CKTestDeviceReferenceProtocol> *testDeviceReference;
@property (nonatomic, readonly) <CKDTestServerProtocol> *testServer;
@property (nonatomic, readonly) CKDThrottleManager *throttleManager;
@property (nonatomic, readonly) CKDTokenRegistrationScheduler *tokenRegistrationScheduler;

+ (id)defaultContext;
+ (id)deviceContextForTestDeviceReference:(id)arg1;
+ (id)existingDefaultContext;

- (void).cxx_destruct;
- (id)_initWithTestDeviceReference:(id)arg1;
- (id)accountDataSecurityObserver;
- (id)cacheDirectory;
- (void)clearPCSMemoryCaches;
- (id)deviceScopedDatabase;
- (id)deviceScopedPushTopic:(id)arg1;
- (id)deviceScopedStateManager;
- (bool)isLiveDevice;
- (id)metadataCache;
- (id)operationInfoCache;
- (id)pcsCacheForContainerID:(id)arg1 accountOverrideInfo:(id)arg2 accountID:(id)arg3 encryptionServiceName:(id)arg4;
- (long long)pushBehavior;
- (void)setAccountDataSecurityObserver:(id)arg1;
- (void)setSharedPcsCaches:(id)arg1;
- (id)sharedPcsCaches;
- (id)testDevice;
- (id)testDeviceReference;
- (id)testServer;
- (id)throttleManager;
- (id)tokenRegistrationScheduler;

@end
