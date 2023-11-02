
@interface NSURLSession : NSObject <NSCopying, __NSURLSessionTaskGroupForConfiguration> {
    NSDictionary * _atsState_ivar;
    NSMutableDictionary * _coalescing;
    NSObject<OS_dispatch_queue> * _delegateDispatchQueue;
    NSOperationQueue * _delegateQueue_ivar;
    __NSCFURLSessionDelegateWrapper * _delegateWrapper;
    <NSURLSessionDelegate> * _delegate_ivar;
    NSMutableDictionary * _httpFallbackHosts;
    bool  _invalid_ivar;
    bool  _isSharedSession_ivar;
    NSURLSessionConfiguration * _local_immutable_configuration_ivar;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned int  _notifierObject;
    struct IONotificationPort { } * _notifyPortRef;
    struct shared_ptr<NSObject<OS_nw_context>> { 
        NSObject<OS_nw_context> *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _nwContext;
    __CFN_ConnectionContextManager * _nwContextManager;
    unsigned int  _rootPort;
    bool  _sessionConnectionsNeedInvalidating;
    NSString * _sessionDescription_ivar;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sleepWakeLock;
    NSString * _tlsSessionCachePrefix;
    NSUUID * _uuid_ivar;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) NSURLSessionConfiguration *_groupConfiguration;
@property (readonly) NSURLSession *_groupSession;
@property (readonly) NSObject<OS_nw_context> *_networkContext;
@property (nonatomic, copy) NSString *_tlsSessionCachePrefix;
@property (readonly, copy) NSURLSessionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain) <NSURLSessionDelegate> *delegate;
@property (readonly, retain) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long nextSeed;
@property (nonatomic, readonly) NSString *rc_logIdentifier;
@property (copy) NSString *sessionDescription;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (bool)_backgroundServiceAvailable;
+ (void)_disableATS;
+ (void)_disableAppSSO;
+ (void)_enumerateHTTPHeaderFieldsWithCFHTTPMessage:(struct __CFHTTPMessage { }*)arg1 usingBlock:(id /* block */)arg2;
+ (void)_enumerateHTTPHeaderFieldsWithRequest:(id)arg1 usingBlock:(id /* block */)arg2;
+ (void)_getActiveSessionIdentifiersWithCompletionHandler:(id /* block */)arg1;
+ (void)_obliterateAllBackgroundSessionsWithCompletionHandler:(id /* block */)arg1;
+ (void)_releaseProcessAssertionForSessionIdentifier:(id)arg1;
+ (void)_sendPendingCallbacksForSessionIdentifier:(id)arg1;
+ (id)_sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateDispatchQueue:(id)arg3;
+ (void)_strictTrustEvaluate:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)new;
+ (id)sessionWithConfiguration:(id)arg1;
+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
+ (id)sharedSession;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_AVAssetDownloadTaskWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)_dataTaskWithRequest:(id)arg1 delegate:(id)arg2;
- (id)_dataTaskWithRequest:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_dataTaskWithTaskForClass:(id)arg1;
- (id)_dataTaskWithURL:(id)arg1 delegate:(id)arg2;
- (id)_dataTaskWithURL:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_downloadTaskWithRequest:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_downloadTaskWithRequest:(id)arg1 downloadFilePath:(id)arg2;
- (id)_downloadTaskWithResumeData:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_downloadTaskWithTaskForClass:(id)arg1;
- (id)_downloadTaskWithURL:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_groupConfiguration;
- (id)_groupSession;
- (id)_networkContext;
- (id)_tlsSessionCachePrefix;
- (id)_uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 delegate:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 delegate:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_uploadTaskWithResumeData:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_uploadTaskWithTaskForClass:(id)arg1;
- (void)_useTLSSessionCacheFromSession:(id)arg1;
- (id)aggregateAssetDownloadTaskWithURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5;
- (id)assetDownloadTaskWithConfiguration:(id)arg1;
- (id)assetDownloadTaskWithURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4;
- (id)assetDownloadTaskWithURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dataTaskWithRequest:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)dataTaskWithURL:(id)arg1;
- (id)dataTaskWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)defaultTaskGroup;
- (id)delegate;
- (id)delegateQueue;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)downloadTaskWithURL:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)finishTasksAndInvalidate;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (void)getAllTasksWithCompletionHandler:(id /* block */)arg1;
- (void)getTasksWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 delegateDispatchQueue:(id)arg4;
- (void)invalidateAndCancel;
- (void)resetWithCompletionHandler:(id /* block */)arg1;
- (id)sessionDescription;
- (void)setSessionDescription:(id)arg1;
- (void)set_tlsSessionCachePrefix:(id)arg1;
- (id)streamTaskWithHostName:(id)arg1 port:(long long)arg2;
- (id)streamTaskWithNetService:(id)arg1;
- (id)taskGroupWithConfiguration:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)uploadTaskWithResumeData:(id)arg1;
- (id)uploadTaskWithResumeData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (id)webSocketTaskWithRequest:(id)arg1;
- (id)webSocketTaskWithURL:(id)arg1;
- (id)webSocketTaskWithURL:(id)arg1 protocols:(id)arg2;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (void)_gkSendAsynchronousRequest:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

- (id)msv_dataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)msv_downloadTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)msv_uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

- (id)rc_logIdentifier;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (id)wf_sharedSession;

@end
