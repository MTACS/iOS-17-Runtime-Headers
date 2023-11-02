
@interface NSFileProviderManager : NSObject {
    NSMutableDictionary * _completionHandlersByItemID;
    NSXPCConnection<FPDDaemon> * _connection;
    NSURL * _documentStorageURL;
    NSFileProviderDomain * _domain;
    FPProgressUpdater * _downloadProxy;
    NSString * _groupName;
    bool  _isIncomingConnection;
    _FPFilePresenterObserver * _presentedFileObserver;
    NSArray * _presentedFiles;
    NSString * _providerIdentifier;
    <FPDDomainServicing><FPXPCAutomaticErrorProxy> * _remoteFileProvider;
    NSObject<OS_dispatch_semaphore> * _sem;
    NSObject<OS_dispatch_group> * _signalUpdateGroup;
    NSObject<OS_dispatch_queue> * _signalUpdateQueue;
    NSObject<OS_dispatch_source> * _signalUpdateSource;
    FPProgressUpdater * _uploadProxy;
}

@property (nonatomic, readonly) NSURL *documentStorageURL;
@property (copy) NSArray *presentedFiles;
@property (nonatomic, readonly) NSString *providerIdentifier;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (void)_registerNotificationsForProviderIdentifier:(id)arg1;
+ (void)addDomain:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)addDomain:(id)arg1 forProviderIdentifier:(id)arg2 byImportingDirectoryAtURL:(id)arg3 knownFolders:(id)arg4 completionHandler:(id /* block */)arg5;
+ (bool)addDomain:(id)arg1 forProviderIdentifier:(id)arg2 byImportingDirectoryAtURL:(id)arg3 knownFolders:(id)arg4 error:(id*)arg5;
+ (void)addDomain:(id)arg1 forProviderIdentifier:(id)arg2 byImportingDirectoryAtURL:(id)arg3 knownFolders:(id)arg4 synchronous:(bool)arg5 completionHandler:(id /* block */)arg6;
+ (void)addDomain:(id)arg1 forProviderIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)addDomain:(id)arg1 forProviderIdentifier:(id)arg2 error:(id*)arg3;
+ (void)addDomain:(id)arg1 forProviderIdentifier:(id)arg2 persona:(id)arg3 completionHandler:(id /* block */)arg4;
+ (bool)checkLocationEligibilityForDomain:(id)arg1 error:(id*)arg2;
+ (id)defaultManager;
+ (bool)fileProviderReadyForBackupOrMigrationForSourceURL:(id)arg1 error:(id*)arg2;
+ (void)getDomainsForProviderIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getDomainsWithCompletionHandler:(id /* block */)arg1;
+ (void)getIdentifierForUserVisibleFileAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)importDomain:(id)arg1 forProviderIdentifier:(id)arg2 fromDirectoryAtURL:(id)arg3 completionHandler:(id /* block */)arg4;
+ (bool)importDomain:(id)arg1 forProviderIdentifier:(id)arg2 fromDirectoryAtURL:(id)arg3 error:(id*)arg4;
+ (void)importDomain:(id)arg1 forProviderIdentifier:(id)arg2 fromDirectoryAtURL:(id)arg3 knownFolders:(id)arg4 completionHandler:(id /* block */)arg5;
+ (bool)importDomain:(id)arg1 forProviderIdentifier:(id)arg2 fromDirectoryAtURL:(id)arg3 knownFolders:(id)arg4 error:(id*)arg5;
+ (void)importDomain:(id)arg1 fromDirectoryAtURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)legacyDefaultManager;
+ (id)managerForDomain:(id)arg1;
+ (id)managerWithProviderIdentifier:(id)arg1 groupName:(id)arg2 domain:(id)arg3;
+ (id)placeholderURLForURL:(id)arg1;
+ (void)registerDomainServicer:(id)arg1 forDomain:(id)arg2;
+ (void)registerRootURL:(id)arg1 forDomain:(id)arg2;
+ (void)removeAllDomainsForProviderIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)removeAllDomainsWithCompletionHandler:(id /* block */)arg1;
+ (void)removeDomain:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)removeDomain:(id)arg1 forProviderIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)removeDomain:(id)arg1 mode:(long long)arg2 completionHandler:(id /* block */)arg3;
+ (id)resolvableErrorCodes;
+ (bool)writePlaceholderAtURL:(id)arg1 withDictionary:(id)arg2 error:(id*)arg3;
+ (bool)writePlaceholderAtURL:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_cacheProviderInfo;
- (void)_callCompletionHandlers:(id)arg1 error:(id)arg2;
- (id)_connection;
- (void)_failToSignalPendingChangesWithError:(id)arg1 completionHandlersByItemID:(id)arg2;
- (id)_initWithProviderIdentifier:(id)arg1;
- (id)_initWithProviderIdentifier:(id)arg1 domain:(id)arg2;
- (id)_initWithProviderIdentifier:(id)arg1 groupName:(id)arg2;
- (id)_initWithProviderIdentifier:(id)arg1 groupName:(id)arg2 domain:(id)arg3;
- (void)_signalPendingEnumerators;
- (id)_test_existingProgressForKind:(id)arg1;
- (void)addDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (void)disconnectWithReason:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)documentStorageURL;
- (void)domainServicerWithCompletionHandler:(id /* block */)arg1;
- (id)enumeratorForMaterializedItems;
- (id)enumeratorForPendingItems;
- (void)evictItemWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchDomainServicerSynchronously:(bool)arg1 useOutgoingConnection:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getDiagnosticAttributesForItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getDomainsWithCompletionHandler:(id /* block */)arg1;
- (void)getServiceWithName:(id)arg1 itemIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getUserVisibleURLForItemIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)globalProgressForKind:(id)arg1;
- (void)ingestFromCacheItemWithIdentifier:(id)arg1 requestedFields:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)isErrorSupportedForSignalResolved:(id)arg1;
- (id)itemIDForIdentifier:(id)arg1;
- (id)listAvailableTestingOperationsWithError:(id*)arg1;
- (void)lookupRequestingApplicationIdentifier:(id)arg1 reason:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)presentedFiles;
- (id)providerDomainID;
- (id)providerIdentifier;
- (void)reconnectWithCompletionHandler:(id /* block */)arg1;
- (void)registerURLSessionTask:(id)arg1 forItemWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)reimportItemsBelowItemWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllDomainsWithCompletionHandler:(id /* block */)arg1;
- (void)removeDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDomain:(id)arg1 options:(long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)removeDomain:(id)arg1 options:(long long)arg2 preservedLocation:(id*)arg3 error:(id*)arg4;
- (void)requestDownloadForItemWithIdentifier:(id)arg1 requestedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)requestDownloadForItemWithIdentifier:(id)arg1 requestedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)requestModificationOfFields:(unsigned long long)arg1 forItemWithIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)runTestingOperations:(id)arg1 error:(id*)arg2;
- (void)setConnected:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setEjectable:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setPresentedFiles:(id)arg1;
- (void)signalEnumeratorForContainerItemIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)signalErrorResolved:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startDownloadingItemWithIdentifier:(id)arg1 requestedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)startObservingDownloadProgress;
- (id)startObservingGlobalProgressForKind:(id)arg1;
- (void)startObservingUploadProgress;
- (id)temporaryDirectoryURLWithError:(id*)arg1;
- (void)waitForChangesOnItemsBelowItemWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)waitForSignalDeliveryWithCompletionHandler:(id /* block */)arg1;
- (void)waitForStabilizationWithCompletionHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (id)_br_createNSFileProviderManagerForDataSeparated:(bool)arg1 withDomainID:(id)arg2 didMatchedDomain:(bool*)arg3;
+ (id)br_getDomainForCurrentPersonaWithError:(id*)arg1;
+ (id)br_getDomainForDataSeparated:(bool)arg1 withIdentifier:(id)arg2 withError:(id*)arg3;
+ (id)br_getDomainForProvider:(id)arg1 withIdentifier:(id)arg2 error:(id*)arg3;
+ (id)br_getEnterpriseProviderManager;
+ (id)br_getLegacyEnterpriseProviderManager;
+ (id)br_getPrimaryProviderManager;
+ (id)br_getProviderManagerForDataSeparated:(bool)arg1;
+ (id)br_sharedProviderManager;
+ (id)br_sharedProviderManagerWithDomainID:(id)arg1;

- (id)getFPDomainsWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (bool)br_addDomain:(id)arg1 forProviderIdentifier:(id)arg2 error:(id*)arg3;
+ (bool)br_importDomain:(id)arg1 forProviderIdentifier:(id)arg2 fromDirectoryAtURL:(id)arg3 error:(id*)arg4;
+ (bool)br_importDomain:(id)arg1 forProviderIdentifier:(id)arg2 fromDirectoryAtURL:(id)arg3 knownFolders:(id)arg4 error:(id*)arg5;

- (void)_br_addDomain:(id)arg1 retries:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_br_removeDomain:(id)arg1 options:(long long)arg2 retries:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)br_addDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)br_removeDomain:(id)arg1 options:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)br_removeDomain:(id)arg1 options:(long long)arg2 sync:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)br_removeDomain:(id)arg1 sync:(bool)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

+ (bool)br_addDomain:(id)arg1 forProviderIdentifier:(id)arg2 error:(id*)arg3;
+ (bool)br_importDomain:(id)arg1 forProviderIdentifier:(id)arg2 fromDirectoryAtURL:(id)arg3 error:(id*)arg4;
+ (bool)br_importDomain:(id)arg1 forProviderIdentifier:(id)arg2 fromDirectoryAtURL:(id)arg3 knownFolders:(id)arg4 error:(id*)arg5;

- (void)_br_addDomain:(id)arg1 retries:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_br_removeDomain:(id)arg1 options:(long long)arg2 retries:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)br_addDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)br_removeDomain:(id)arg1 options:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)br_removeDomain:(id)arg1 options:(long long)arg2 sync:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)br_removeDomain:(id)arg1 sync:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
