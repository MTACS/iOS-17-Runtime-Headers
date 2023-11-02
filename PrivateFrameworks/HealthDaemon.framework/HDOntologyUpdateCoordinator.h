
@interface HDOntologyUpdateCoordinator : NSObject <HDPeriodicActivityDelegate, HDProfileReadyObserver, NSURLSessionTaskDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _contentionReductionLock;
    HDDaemon * _daemon;
    HDOntologyShardDownloader * _downloader;
    HDXPCGatedActivity * _fallbackActivity;
    HDOntologyFeatureCoordinator * _featureCoordinator;
    HDXPCGatedActivity * _gatedActivity;
    HDOntologyShardImporter * _importer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDAssertion * _lock_preparedDatabaseAccessibilityAssertion;
    HDAssertion * _lock_preparedRegistryAssertion;
    HDOntologyManifestUpdater * _manifestUpdater;
    HDPeriodicActivity * _periodicActivity;
    HDOntologyShardPruner * _pruner;
    HDOntologyShardRegistry * _shardRegistry;
    NSString * _threadLocalKeyIsRunningTransaction;
    id /* block */  _unitTesting_willTriggerGatedActivity;
    NSOperationQueue * _updateOperationQueue;
}

@property (nonatomic, readonly) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDOntologyShardDownloader *downloader;
@property (nonatomic, readonly) HDOntologyFeatureCoordinator *featureCoordinator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDOntologyShardImporter *importer;
@property (nonatomic, readonly) HDOntologyManifestUpdater *manifestUpdater;
@property (nonatomic, readonly) HDPrimaryProfile *profile;
@property (nonatomic, readonly) HDOntologyShardPruner *pruner;
@property (nonatomic, readonly) HDOntologyShardRegistry *shardRegistry;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTesting_willTriggerGatedActivity;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2;
- (id)daemon;
- (void)dealloc;
- (void)downloadRequiredShardsWithCompletion:(id /* block */)arg1;
- (id)downloader;
- (id)featureCoordinator;
- (id)importer;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (void)lockUpdateLock;
- (id)manifestUpdater;
- (id)ontologyServerURL;
- (bool)performOntologyTransactionForWrite:(bool)arg1 databaseTransaction:(id)arg2 error:(id*)arg3 transactionHandler:(id /* block */)arg4;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (id)profile;
- (void)profileDidBecomeReady:(id)arg1;
- (id)pruner;
- (void)setOntologyServerURL:(id)arg1;
- (void)setUnitTesting_willTriggerGatedActivity:(id /* block */)arg1;
- (id)shardRegistry;
- (void)triggerGatedUpdateWithMaximumDelay:(double)arg1 completion:(id /* block */)arg2;
- (id /* block */)unitTesting_willTriggerGatedActivity;
- (void)unlockUpdateLock;
- (void)updateOntologyWithReason:(long long)arg1 completion:(id /* block */)arg2;
- (bool)updateOntologyWithShardIdentifier:(id)arg1 schemaType:(id)arg2 schemaVersion:(long long)arg3 localShardURL:(id)arg4 shardVersion:(long long)arg5 error:(id*)arg6;
- (void)updateShardRegistryWithCompletion:(id /* block */)arg1;

@end
