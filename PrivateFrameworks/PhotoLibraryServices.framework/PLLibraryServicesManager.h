
@interface PLLibraryServicesManager : NSObject <PFStateCaptureProvider, PLSyndicationDeleteManagerDelegate> {
    bool  _active;
    NSObject<OS_dispatch_queue> * _albumCountQueue;
    PLBackgroundJobService * _backgroundJobService;
    PLCacheDeleteRegistration * _cacheDeleteRegistration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _contactsAuthorizationUpdateLock;
    PLLibraryServicesStateNode * _currentStateNode;
    NSMutableDictionary * _externalWaiterCompletionBlocksByState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _fileSystemAssetImporterMutex;
    bool  _finalizing;
    NSObject<OS_dispatch_queue> * _helperQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _importMutex;
    NSError * _invalidationError;
    bool  _isCreateMode;
    PLLazyObject * _lazyAlbumCountCoalescer;
    PLLazyObject * _lazyCPLReadiness;
    PLLazyObject * _lazyCacheDeleteSupport;
    PLLazyObject * _lazyCameraPreviewWellManager;
    PLLazyObject * _lazyClientSideEncryptionManager;
    PLLazyObject * _lazyCloudPhotoLibraryManager;
    PLLazyObject * _lazyComputeCacheManager;
    PLLazyObject * _lazyCrashRecoverySupport;
    PLLazyObject * _lazyDatabaseContext;
    PLLazyObject * _lazyDeferredProcessingServiceHandler;
    PLLazyObject * _lazyDirectServerConfiguration;
    PLLazyObject * _lazyDupeManager;
    PLLazyObject * _lazyDuplicateProcessor;
    PLLazyObject * _lazyImageWriter;
    PLLazyObject * _lazyImportSessionCountCoalescer;
    PLLazyObject * _lazyKeywordManager;
    PLLazyObject * _lazyModelMigrator;
    PLLazyObject * _lazyMomentGenerationDataManager;
    PLLazyObject * _lazyPairingManager;
    PLLazyObject * _lazyQuickActionManager;
    PLLazyObject * _lazyRebuildJournalManager;
    PLLazyObject * _lazyRelationshipOrderKeyManager;
    PLLazyObject * _lazySearchIndexManager;
    PLLazyObject * _lazySyndicationDeleteManager;
    PLLazyObject * _lazyWellKnownPhotoLibraryIdentifier;
    PLPhotoLibraryBundle * _libraryBundle;
    <PLLibraryServicesDelegate> * _libraryServicesDelegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _localeUpdateLock;
    NSString * _logPrefix;
    unsigned int  _maxWaiterQoS;
    <PLMigrationServiceProtocol> * _migrationServiceProxy;
    NSMutableArray * _mutablePendingOperations;
    id  _operationCountObservee;
    NSObject<OS_dispatch_source> * _outstandingTransactionHandlerTimer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _outstandingTransactionHandlerTimerLock;
    PLPhotoLibraryPathManager * _pathManager;
    NSProgress * _postRunningProgress;
    NSProgress * _preRunningProgress;
    PLClientServerTransaction * _serverTransaction;
    PFStateCaptureHandler * _stateHandler;
    NSObject<OS_dispatch_queue> * _stateSerializationQueue;
    PLTrackableRequestManager * _trackableRequestManager;
    NSString * _upgradeClient;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly) PLBackgroundJobService *backgroundJobService;
@property (readonly) PLCacheDeleteRegistration *cacheDeleteRegistration;
@property (readonly) PLCacheDeleteSupport *cacheDeleteSupport;
@property (readonly) PLCameraPreviewWellManager *cameraPreviewWellManager;
@property (readonly) PLChangeHandlingContainer *changeHandlingContainer;
@property (readonly) PFClientSideEncryptionManager *clientSideEncryptionManager;
@property (getter=isCloudPhotoLibraryEnabled, readonly) bool cloudPhotoLibraryEnabled;
@property (readonly) PLCloudPhotoLibraryManager *cloudPhotoLibraryManager;
@property (readonly) PLComputeCacheManager *computeCacheManager;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } contactsAuthorizationUpdateLock;
@property (readonly) PLLibraryServicesCPLReadiness *cplReadiness;
@property (readonly) PLAssetsdCrashRecoverySupport *crashRecoverySupport;
@property (getter=isCreateMode, readonly) bool createMode;
@property (setter=_setCurrentStateNode:, nonatomic, retain) PLLibraryServicesStateNode *currentStateNode;
@property (readonly) PLDatabaseContext *databaseContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) PLDeferredProcessingServiceHandler *deferredProcessingServicerHandler;
@property (readonly, copy) NSString *description;
@property (readonly) CPLConfiguration *directServerConfiguration;
@property (readonly) PLDupeManager *dupeManager;
@property (readonly) PLDuplicateProcessor *duplicateProcessor;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } fileSystemAssetImporterMutex;
@property (getter=isFinalizing, nonatomic) bool finalizing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *helperQueue;
@property (readonly) PLImageWriter *imageWriter;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } importMutex;
@property (nonatomic, readonly) NSError *invalidationError;
@property (readonly) PLKeywordManager *keywordManager;
@property (readonly) PLPhotoLibraryBundle *libraryBundle;
@property (retain) <PLLibraryServicesDelegate> *libraryServicesDelegate;
@property (readonly, copy) NSURL *libraryURL;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } localeUpdateLock;
@property (readonly, copy) NSString *logPrefix;
@property <PLMigrationServiceProtocol> *migrationServiceProxy;
@property (readonly) PLModelMigrator *modelMigrator;
@property (readonly) PLMomentGenerationDataManager *momentGenerationDataManager;
@property (nonatomic, readonly) NSMutableArray *mutablePendingOperations;
@property (nonatomic, retain) id operationCountObservee;
@property (readonly) PLPairing *pairingManager;
@property (readonly) PLPhotoLibraryPathManager *pathManager;
@property (readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain) NSProgress *postRunningProgress;
@property (nonatomic, retain) NSProgress *preRunningProgress;
@property (readonly) PLQuickActionManager *quickActionManager;
@property (readonly) PLRebuildJournalManager *rebuildJournalManager;
@property (readonly) PLRelationshipOrderKeyManager *relationshipOrderKeyManager;
@property (readonly) PLSearchIndexManager *searchIndexManager;
@property (readonly) long long state;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateSerializationQueue;
@property (readonly) Class superclass;
@property (readonly) PLSyndicationDeleteManager *syndicationDeleteManager;
@property (readonly) PLTrackableRequestManager *trackableRequestManager;
@property (copy) NSString *upgradeClient;
@property (readonly) long long wellKnownPhotoLibraryIdentifier;

+ (long long)_finalState;
+ (long long)_initialState;
+ (id)errorForInvalidationError:(id)arg1 userInfo:(id)arg2;
+ (Class)libraryServicesDelegateClass;
+ (id)libraryServicesManagerForLibraryURL:(id)arg1;
+ (void)setLibraryServicesDelegateClass:(Class)arg1;

- (void).cxx_destruct;
- (void)_addPendingOperationsForStateNode:(id)arg1;
- (void)_awaitLibraryState:(long long)arg1 sync:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)_canTransitionToState:(long long)arg1 error:(id*)arg2;
- (void)_cancelPendingOperations;
- (id)_determineWellKnownPhotoLibraryIdentifier;
- (void)_dispatchAwaitLibraryStateCompletionHandler:(id /* block */)arg1 group:(id)arg2 error:(id)arg3;
- (void)_dispatchExternalWaitersForState:(long long)arg1;
- (id)_enqueueAwaitOperation;
- (void)_enqueueExternalWaiterCompletionBlockForState:(long long)arg1 completionBlock:(id /* block */)arg2;
- (bool)_enqueueOperation:(id)arg1 error:(id*)arg2;
- (void)_handleCoalescerActionWithScope:(id)arg1 class:(Class)arg2 forIDs:(id)arg3 context:(id)arg4;
- (void)_handleLibraryStateCompletedAllOperations;
- (void)_increaseStateQueueQoSIfNeeded;
- (void)_initCameraPreviewWellManager;
- (void)_initCloudPhotoLibraryManager;
- (void)_initLazyWellKnownPhotoLibraryIdentifier;
- (void)_initSyndicationPhotoLibrarySpecificServices;
- (void)_initSystemPhotoLibrarySpecificServices;
- (void)_invalidate;
- (void)_invalidateAlbumCountCoalescer;
- (void)_invalidateBackgroundJobService;
- (void)_invalidateCPLReadiness;
- (void)_invalidateCacheDeleteSupport;
- (void)_invalidateCameraPreviewWellManager;
- (void)_invalidateClientSideEncryptionManager;
- (void)_invalidateCloudPhotoLibraryManager;
- (void)_invalidateComputeCacheManager;
- (void)_invalidateCrashRecoverySupport;
- (void)_invalidateDatabaseContext;
- (void)_invalidateDirectServerConfiguration;
- (void)_invalidateDupeManager;
- (void)_invalidateDuplicateProcessor;
- (void)_invalidateImageWriter;
- (void)_invalidateImportSessionCountCoalescer;
- (void)_invalidateKeywordManager;
- (void)_invalidateModelMigrator;
- (void)_invalidateMomentGenerationDataManager;
- (void)_invalidateOutstandingTransactionHandlerTimer;
- (void)_invalidatePairingManager;
- (void)_invalidateQuickActionManager;
- (void)_invalidateRebuildJournalManager;
- (void)_invalidateRelationshipOrderKeyManager;
- (void)_invalidateSearchIndexManager;
- (void)_invalidateSyndicationDeleteManager;
- (void)_invalidateSyndicationPhotoLibrarySpecificServices;
- (void)_invalidateSystemPhotoLibrarySpecificServices;
- (id)_libraryServicesStateNodeWithState:(long long)arg1;
- (id)_newContainer:(Class)arg1 scope:(id)arg2;
- (id)_newOrderKeyManager;
- (void)_resetStateQueueQoS;
- (void)_setCameraRollCountedInQuota:(bool)arg1;
- (void)_setCurrentStateNode:(id)arg1;
- (void)_startObservingLibraryStateCompletedAllOperations;
- (long long)_state;
- (void)_stopObservingLibraryStateCompletedAllOperations;
- (void)_transitionToState:(long long)arg1;
- (void)_waitForAwaitOperation:(id)arg1;
- (bool)activate:(id*)arg1;
- (id)activeOperations;
- (void)awaitLibraryState:(long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)awaitLibraryState:(long long)arg1 error:(id*)arg2;
- (id)backgroundJobService;
- (id)cacheDeleteRegistration;
- (id)cacheDeleteSupport;
- (id)cameraPreviewWellManager;
- (id)changeHandlingContainer;
- (id)clientSideEncryptionManager;
- (id)cloudPhotoLibraryManager;
- (id)computeCacheManager;
- (struct os_unfair_lock_s { unsigned int x1; })contactsAuthorizationUpdateLock;
- (id)cplReadiness;
- (id)crashRecoverySupport;
- (unsigned long long)createOptions;
- (void)currentLocaleDidChangeNotification:(id)arg1;
- (id)currentStateNode;
- (id)databaseContext;
- (void)deactivateWithInvalidationError:(id)arg1;
- (void)dealloc;
- (id)deferredProcessingServicerHandler;
- (id)description;
- (void)didBecomeNonSystemPhotoLibrary;
- (void)didRemainSystemPhotoLibrary;
- (id)directServerConfiguration;
- (id)dupeManager;
- (id)duplicateProcessor;
- (bool)enqueueOperation:(id)arg1 error:(id*)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })fileSystemAssetImporterMutex;
- (bool)finalize:(id*)arg1;
- (id)helperQueue;
- (id)imageWriter;
- (struct os_unfair_lock_s { unsigned int x1; })importMutex;
- (id)initWithLibraryBundle:(id)arg1 backgroundJobService:(id)arg2 cacheDeleteRegistration:(id)arg3 delegateClass:(Class)arg4;
- (void)initializeChangeHandling;
- (void)initializeConstraintsDirector;
- (void)invalidateReverseLocationDataOnAllAssets;
- (id)invalidationError;
- (bool)isActive;
- (bool)isCloudPhotoLibraryEnabled;
- (bool)isCreateMode;
- (bool)isFinalizing;
- (bool)isSearchIndexingEnabled;
- (bool)isSyndicationPhotoLibrary;
- (bool)isSystemPhotoLibrary;
- (id)journalManagerForName:(id)arg1;
- (id)keywordManager;
- (id)libraryBundle;
- (id)libraryServicesDelegate;
- (id)libraryURL;
- (struct os_unfair_lock_s { unsigned int x1; })localeUpdateLock;
- (id)logPrefix;
- (id)migrationServiceProxy;
- (id)modelMigrator;
- (id)momentGenerationDataManager;
- (id)mutablePendingOperations;
- (id)newAlbumCountCoalescer;
- (id)newClientSideEncryptionManager;
- (id)newCloudPhotoLibraryManager;
- (id)newComputeCacheManager;
- (id)newCrashRecoverySupport;
- (id)newDirectServerConfiguration;
- (id)newImportSessionCountCoalescer;
- (id)newMomentGenerationDataManager;
- (id)newRebuildJournalManager;
- (id)newSearchIndexManager;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)operationCountObservee;
- (id)pairingManager;
- (id)pathManager;
- (id)pendingOperations;
- (void)performBlockWithImportMutex:(id /* block */)arg1;
- (void)performFileSystemAssetImporterWorkWithLibrary:(id)arg1 block:(id /* block */)arg2;
- (void)performTransactionForSyndicationDeleteManager:(id)arg1 name:(const char *)arg2 transaction:(id /* block */)arg3;
- (id)persistentStoreCoordinator;
- (id)postRunningProgress;
- (id)preRunningProgress;
- (id)quickActionManager;
- (id)rebuildJournalManager;
- (void)refreshAlbumCountForAlbumIDs:(id)arg1;
- (void)refreshImportSessionCountForImportSessionIDs:(id)arg1;
- (void)registerOutstandingTransactionsHandler:(id /* block */)arg1;
- (id)relationshipOrderKeyManager;
- (id)searchIndexManager;
- (void)setActive:(bool)arg1;
- (void)setContactsAuthorizationUpdateLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setCreateMode:(bool)arg1 options:(id)arg2;
- (void)setFileSystemAssetImporterMutex:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setFinalizing:(bool)arg1;
- (void)setICloudPhotosEnabledInternal:(bool)arg1;
- (void)setImportMutex:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setLibraryServicesDelegate:(id)arg1;
- (void)setLocaleUpdateLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setMigrationServiceProxy:(id)arg1;
- (void)setOperationCountObservee:(id)arg1;
- (void)setPostRunningProgress:(id)arg1;
- (void)setPreRunningProgress:(id)arg1;
- (void)setUpgradeClient:(id)arg1;
- (void)shutdownLibraryWithDescription:(id)arg1;
- (long long)state;
- (id)stateCaptureDictionary;
- (id)stateSerializationQueue;
- (id)statusDescription;
- (id)syndicationDeleteManager;
- (id)trackableRequestManager;
- (bool)transitionToState:(long long)arg1 error:(id*)arg2;
- (bool)updateGreenTeaSavedContactsAuthorizationIfNeeded;
- (bool)updateSavedLocaleIfNeeded;
- (id)upgradeClient;
- (long long)wellKnownPhotoLibraryIdentifier;
- (bool)willBecomeNonSystemPhotoLibrary:(id*)arg1;

@end