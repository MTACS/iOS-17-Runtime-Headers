
@interface PRUISPosterSnapshotFilesystemCache : NSObject <PRUISPosterSnapshotCache> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    NSCache * _cacheLock_URLToSnapshotBundleCache;
    NSURL * _cacheURL;
    NSURL * _cacheURLInternalDirectory;
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSObject<OS_dispatch_queue> * _fileSystemQueue;
    BSAtomicFlag * _invalidationFlag;
}

@property (nonatomic, readonly) NSURL *cacheURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_defaultCacheLocationURL;
+ (id)_determineProviderFromSnapshotURL:(id)arg1;
+ (id)_snapshotURLForPosterPath:(id)arg1 relativeTo:(id)arg2;
+ (id)_snapshotURLForPosterPath:(id)arg1 snapshotDefinitionIdentifier:(id)arg2 interfaceOrientation:(long long)arg3 hardwareIdentifier:(id)arg4 userInterfaceStyle:(long long)arg5 relativeTo:(id)arg6;
+ (id)incomingCallSnapshotCache;

- (void).cxx_destruct;
- (void)_cacheLock_cleanupPostersBefore:(id)arg1;
- (void)_prepareSnapshotCache;
- (bool)cacheSnapshotBundle:(id)arg1 forRequest:(id)arg2;
- (bool)cacheSnapshotBundle:(id)arg1 forRequest:(id)arg2 completion:(id /* block */)arg3;
- (id)cacheURL;
- (bool)checkCacheIsReachable:(out id*)arg1;
- (void)cleanup;
- (void)dealloc;
- (void)discardSnapshotsForPosters:(id)arg1;
- (void)discardSnapshotsForPostersMatchingPredicate:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)invalidate;
- (id)latestSnapshotBundleForPoster:(id)arg1 snapshotDefinition:(id)arg2 interfaceOrientation:(long long)arg3 userInterfaceStyle:(long long)arg4 hardwareIdentifier:(id)arg5 error:(out id*)arg6;
- (id)latestSnapshotBundleForRequest:(id)arg1 error:(out id*)arg2;

@end
