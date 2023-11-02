
@interface PRUISPosterSnapshotController : NSObject <BSInvalidatable, PRPosterExtensionProviderObserver> {
    <PRUISPosterSnapshotCache> * _cache;
    NSURL * _cacheURL;
    NSObject<OS_dispatch_queue> * _completionBlockQueue;
    NSString * _expectedRole;
    id /* block */  _extensionBuilder;
    NSUUID * _instanceIdentifier;
    BSAtomicFlag * _invalidationFlag;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _lock_activeAssertions;
    <PRPosterExtensionProvider> * _lock_extensionSource;
    NSCountedSet * _lock_keepActiveAssertionReasons;
    NSMapTable * _lock_providerToSnapshotterMap;
    bool  _lock_receivedExtensionsUpdate;
    NSMapTable * _lock_snapshotIdentifierToSnapshotRequestMap;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) <PRUISPosterSnapshotCache> *cache;
@property (nonatomic, readonly, copy) NSURL *cacheURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)defaultRequestOutput;
+ (id)sharedIncomingCallSnapshotController;

- (void).cxx_destruct;
- (void)_invalidateAssertionReason:(id)arg1;
- (void)_lock_assertionsWereUpdated;
- (void)_snapshotRequestDidFinishWithResult:(id)arg1 definition:(id)arg2 error:(id)arg3 request:(id)arg4 completion:(id /* block */)arg5;
- (id)acquireKeepActiveAssertionForReason:(id)arg1;
- (id)cache;
- (id)cacheURL;
- (void)cleanupSnapshotCache;
- (void)dealloc;
- (void)discardSnapshotsForPosters:(id)arg1;
- (void)executeSnapshotRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithCacheURL:(id)arg1;
- (id)initWithExtensionProviderBuilder:(id /* block */)arg1 cache:(id)arg2;
- (id)initWithExtensionProviderBuilder:(id /* block */)arg1 cacheURL:(id)arg2;
- (void)invalidate;
- (bool)isActive;
- (id)latestSnapshotBundleForRequest:(id)arg1 error:(out id*)arg2;
- (void)posterExtensionProvider:(id)arg1 foundExtensions:(id)arg2;

@end
