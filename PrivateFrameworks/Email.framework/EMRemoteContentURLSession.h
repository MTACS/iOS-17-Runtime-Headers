
@interface EMRemoteContentURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate> {
    EFLocked * _activeTasks;
    EMRemoteContentURLCache * _cache;
    NSOperationQueue * _delegateQueue;
    EFLocked * _observers;
    NSURLSession * _session;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sessionLock;
    NSString * _sourceBundleIdentifier;
}

@property (nonatomic, readonly) EMRemoteContentURLCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *sourceBundleIdentifier;
@property (readonly) Class superclass;

+ (id)genericHTTPHeaderFields;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)_createURLSession;
- (void)abortTask:(id)arg1;
- (id)cache;
- (id)dataTaskWithRequest:(id)arg1 isSynthetic:(bool)arg2 allowProxying:(bool)arg3 failOpen:(bool)arg4 completionHandler:(id /* block */)arg5;
- (id)dataTaskWithRequest:(id)arg1 isSynthetic:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)delegateQueue;
- (id)initWithCache:(id)arg1;
- (id)initWithCache:(id)arg1 sourceBundleIdentifier:(id)arg2;
- (void)invalidateAndCancel:(bool)arg1;
- (void)registerObserver:(id)arg1;
- (id)sourceBundleIdentifier;
- (void)unregisterObserver:(id)arg1;

@end
