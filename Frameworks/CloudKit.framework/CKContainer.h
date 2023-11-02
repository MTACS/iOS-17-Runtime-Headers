
@interface CKContainer : NSObject <SCKContainerProxying, SCWContainerProxying> {
    NSMutableArray * _codeServices;
    CKConvenienceConfiguration * _convenienceConfiguration;
    CKContainerImplementation * _implementation;
    CKDatabase * _organizationCloudDatabase;
    CKDatabase * _privateCloudDatabase;
    CKDatabase * _publicCloudDatabase;
    int  _scopedIdentityUpdateToken;
    CKDatabase * _sharedCloudDatabase;
}

@property (nonatomic, retain) NSMutableArray *codeServices;
@property (nonatomic, readonly, copy) CKContainerID *containerID;
@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (nonatomic, readonly) CKConvenienceConfiguration *convenienceConfiguration;
@property (nonatomic, readonly) CKContainerImplementation *implementation;
@property (nonatomic, readonly, copy) CKContainerOptions *options;
@property (nonatomic, readonly) CKDatabase *organizationCloudDatabase;
@property (nonatomic, readonly) CKDatabase *privateCloudDatabase;
@property (nonatomic, readonly) CKDatabase *publicCloudDatabase;
@property (nonatomic, readonly) int scopedIdentityUpdateToken;
@property (nonatomic, readonly, copy) CKContainerSetupInfo *setupInfo;
@property (nonatomic, readonly) CKDatabase *sharedCloudDatabase;
@property (copy) NSString *sourceApplicationBundleIdentifier;
@property (copy) NSString *sourceApplicationSecondaryIdentifier;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)_CKXPCClientToDiscretionaryDaemonInterface;
+ (void)_populateXPCInterfaceOnClientToDaemonContainerScopedInterfaceForOptionalSelector:(SEL)arg1 generateInterfaceBlock:(id /* block */)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (long long)containerEnvironmentForContainerID:(id)arg1 entitlements:(id)arg2;
+ (id)containerIDForContainerIdentifier:(id)arg1;
+ (id)containerIDForContainerIdentifier:(id)arg1 environment:(long long)arg2;
+ (id)containerWithIdentifier:(id)arg1;
+ (id)containersByIdentifier;
+ (bool)currentProcessCanUseCloudKit;
+ (id)defaultContainer;
+ (id)importantUserRecordAccessQueue;
+ (void)initialize;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (id)matterhornName;
+ (void)populateXPCInterfaceOnClientToDaemonContainerScopedInterfaceForSelector:(SEL)arg1 generateInterfaceBlock:(id /* block */)arg2;
+ (void)removeIdentifierFromContainersWithIdentifier:(id)arg1;
+ (id)uploadRequestFetchAllNotificationName;

- (void).cxx_destruct;
- (id)_initUnconfiguredContainerWithImplementation:(id)arg1;
- (id)_initWithContainerIdentifier:(id)arg1;
- (void)acceptShareMetadata:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)accountInfoWithCompletionHandler:(id /* block */)arg1;
- (void)accountStatusWithCompletionHandler:(id /* block */)arg1;
- (void)addOperation:(id)arg1;
- (void)cancelUploadRequests;
- (id)codeServiceWithName:(id)arg1;
- (id)codeServiceWithName:(id)arg1 databaseScope:(long long)arg2;
- (id)codeServiceWithName:(id)arg1 databaseScope:(long long)arg2 serviceInstanceURL:(id)arg3;
- (id)codeServiceWithName:(id)arg1 serviceInstanceURL:(id)arg2;
- (id)codeServices;
- (id)containerID;
- (id)containerIdentifier;
- (id)convenienceConfiguration;
- (id)databaseWithDatabaseScope:(long long)arg1;
- (void)dealloc;
- (void)discoverAllContactUserInfosWithCompletionHandler:(id /* block */)arg1;
- (void)discoverAllIdentitiesWithCompletionHandler:(id /* block */)arg1;
- (void)discoverUserIdentityWithEmailAddress:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)discoverUserIdentityWithPhoneNumber:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)discoverUserIdentityWithUserRecordID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)discoverUserInfoWithEmailAddress:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)discoverUserInfoWithUserRecordID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAllLongLivedOperationIDsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchCurrentDeviceIDWithCompletionHandler:(id /* block */)arg1;
- (void)fetchFullNameAndFormattedUsernameOfAccountWithCompletionHandler:(id /* block */)arg1;
- (void)fetchFullNameAndPrimaryEmailOnAccountWithCompletionHandler:(id /* block */)arg1;
- (void)fetchLongLivedOperationWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchOrgAdminUserRecordIDWithCompletionHandler:(id /* block */)arg1;
- (void)fetchShareMetadataWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchShareParticipantWithEmailAddress:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchShareParticipantWithLookupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchShareParticipantWithPhoneNumber:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchShareParticipantWithUserRecordID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchSignatureGeneratorForCurrentUserBoundaryKeyWithCompletionHandler:(id /* block */)arg1;
- (void)fetchUserRecordIDWithCompletionHandler:(id /* block */)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)getNewWebSharingIdentityDataWithCompletionHandler:(id /* block */)arg1;
- (void)getSynchronousContainerScopedDaemonProxyWithErrorHandler:(id /* block */)arg1 daemonProxyHandler:(id /* block */)arg2;
- (id)implementation;
- (id)initWithContainerID:(id)arg1;
- (id)initWithContainerID:(id)arg1 options:(id)arg2;
- (id)initWithContainerSetupInfo:(id)arg1;
- (id)initWithImplementation:(id)arg1 convenienceConfiguration:(id)arg2;
- (void)manuallyTriggerUploadRequests;
- (id)options;
- (id)organizationCloudDatabase;
- (id)privateCloudDatabase;
- (id)publicCloudDatabase;
- (void)registerForAssetUploadRequests:(id /* block */)arg1;
- (void)registerForAssetUploadRequests:(id /* block */)arg1 machServiceName:(id)arg2;
- (void)registerForPackageUploadRequests:(id /* block */)arg1;
- (void)registerForPackageUploadRequests:(id /* block */)arg1 machServiceName:(id)arg2;
- (void)registerSystemSharingUIObserver:(id)arg1;
- (void)requestApplicationPermission:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (int)scopedIdentityUpdateToken;
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(id /* block */)arg1;
- (id)serverPreferredPushEnvironmentWithError:(id*)arg1;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setCodeServices:(id)arg1;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (id)setupInfo;
- (id)sharedCloudDatabase;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (void)statusForApplicationPermission:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)submitEventMetric:(id)arg1;
- (void)submitEventMetric:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unregisterFromUploadRequests;
- (void)unregisterFromUploadRequestsWithMachServiceName:(id)arg1;
- (void)wipeAllCachesAndDie;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)_safari_containerWithIdentifier:(id)arg1 encryptionServiceName:(id)arg2 environment:(long long)arg3 useApplicationBundleIdentifierOverride:(bool)arg4;
+ (id)safari_cloudBookmarksContainer;
+ (id)safari_cloudExtensionsContainer;
+ (id)safari_cloudSettingsContainer;
+ (id)safari_cloudTabsContainer;
+ (id)safari_historyContainer;
+ (id)safari_historyManateeContainer;

// Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore

+ (id)remotemanagement_mirroringContainer;
+ (id)remotemanagement_mirroringContainerIdentifier;

// Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks

- (void)addDatabaseOperation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/StocksCore.framework/StocksCore

- (void)addDatabaseOperation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)wf_shortcutsContainer;

- (void)wf_setShortcutsAppAttribution;

@end
