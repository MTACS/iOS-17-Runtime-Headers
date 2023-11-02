
@interface __NSURLSessionLocal : NSURLSession <NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionDelegate_Internal, NSURLSessionSubclass, NSURLSessionTaskDelegatePrivate, __NSURLSessionTaskGroupForConfiguration> {
    unsigned long long  _identSeed;
    id /* block */  _invalidateCallback;
    NSObject<OS_dispatch_queue> * _invalidateQueue;
    bool  _isInvalid;
    NSMutableArray * _outstandingTasks;
    NSURLSessionConfiguration * _proxyConfig;
    NSURLSession * _proxySession;
    NSURLSession * _sessionForCacheLookups;
    bool  _shouldRecreateProxySession;
    void * _tubeManager;
    NSHashTable * _unownedUnresumedTasks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unownedUnresumedTasksLock;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _xCookieStorageInitLock;
    const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; } * _xCookies;
    bool  _xCookiesInitComplete;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _xCredStorageInitLock;
    const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; } * _xCreds;
    bool  _xCredsInitComplete;
}

@property (readonly) NSURLSessionConfiguration *_groupConfiguration;
@property (readonly) NSURLSession *_groupSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)AVAggregateAssetDownloadTaskForURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5;
- (id)AVAssetDownloadTaskForURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 downloadConfiguration:(id)arg5;
- (id)AVAssetDownloadTaskForURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)_dataTaskWithTaskForClass:(id)arg1;
- (id)_downloadTaskWithTaskForClass:(id)arg1;
- (void)_onqueue_completeInvalidation:(bool)arg1;
- (void)_onqueue_flushWithCompletionHandler:(id /* block */)arg1;
- (void)_onqueue_getTasksWithCompletionHandler:(id /* block */)arg1;
- (void)_onqueue_resetStorageWithCompletionHandler:(id /* block */)arg1;
- (id)_uploadTaskWithTaskForClass:(id)arg1;
- (void)_useTLSSessionCacheFromSession:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 delegateDispatchQueue:(id)arg4;
- (unsigned long long)nextSeed;
- (id)webSocketTaskForRequest:(id)arg1;
- (id)webSocketTaskForURL:(id)arg1 protocols:(id)arg2;

@end
