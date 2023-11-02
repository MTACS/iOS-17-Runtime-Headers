
@interface AMSURLTaskInfo : NSObject {
    id /* block */  _completionBlock;
    AMSContiguousActionPerformer * _contiguousActionPerformer;
    NSMutableData * _data;
    NSError * _error;
    NSURLSessionTaskMetrics * _metrics;
    NSURLResponse * _originalResponse;
    bool  _performingBlockWithDataAccess;
    unsigned long long  _previousAuthorizationCredentialSource;
    AMSURLRequestProperties * _properties;
    AMSURLAction * _receivedAction;
    NSURLResponse * _response;
    long long  _retryCount;
    NSMutableSet * _retryIdentifiers;
    AMSURLSession * _session;
    unsigned long long  _signpostID;
    NSURLSessionTask * _task;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _taskLock;
    NSObject<OS_dispatch_queue> * _taskQueue;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, readonly) AMSContiguousActionPerformer *contiguousActionPerformer;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSURLSessionTaskMetrics *metrics;
@property (nonatomic, retain) NSURLResponse *originalResponse;
@property (nonatomic) unsigned long long previousAuthorizationCredentialSource;
@property (nonatomic, retain) AMSURLRequestProperties *properties;
@property (nonatomic, retain) AMSURLAction *receivedAction;
@property (nonatomic, retain) NSURLResponse *response;
@property (nonatomic) long long retryCount;
@property (nonatomic, readonly) NSSet *retryIdentifiers;
@property (nonatomic, retain) AMSURLSession *session;
@property (nonatomic) unsigned long long signpostID;
@property (nonatomic, readonly) NSURLSessionTask *task;
@property (nonatomic, readonly) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned int x2; } taskLock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *taskQueue;

+ (id)createTaskInfoForTask:(id)arg1;
+ (void)removeTaskInfoForTask:(id)arg1;
+ (id)sharedTaskQueue;
+ (id)sharedTaskStore;
+ (id)taskInfoForTask:(id)arg1;

- (void).cxx_destruct;
- (void)_performDataAccessUsingBlock:(id /* block */)arg1;
- (void)addRetryIdentifier:(id)arg1;
- (void)appendData:(id)arg1;
- (void)assertHasExclusiveAccess;
- (void)assertIsOnPrivateQueue;
- (id /* block */)completionBlock;
- (id)contiguousActionPerformer;
- (void)continueContiguousAsyncActionWithIdentifier:(unsigned long long)arg1 block:(id /* block */)arg2;
- (id)createMetricsContextForDecodedObject:(id)arg1;
- (id)data;
- (id)error;
- (void)finishContiguousAsyncActionWithIdentifier:(unsigned long long)arg1;
- (id)initWithTask:(id)arg1;
- (id)metrics;
- (void)migrateFromTaskInfo:(id)arg1;
- (id)originalResponse;
- (void)performAsyncBlock:(id /* block */)arg1;
- (void)performAsyncBlockWithData:(id /* block */)arg1;
- (void)performSyncBlock:(id /* block */)arg1;
- (void)performSyncBlockWithExclusiveAccess:(id /* block */)arg1;
- (unsigned long long)previousAuthorizationCredentialSource;
- (id)properties;
- (id)receivedAction;
- (id)response;
- (long long)retryCount;
- (id)retryIdentifiers;
- (id)session;
- (void)setAccount:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setOriginalResponse:(id)arg1;
- (void)setPreviousAuthorizationCredentialSource:(unsigned long long)arg1;
- (void)setProperties:(id)arg1;
- (void)setReceivedAction:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setSession:(id)arg1;
- (void)setSignpostID:(unsigned long long)arg1;
- (unsigned long long)signpostID;
- (unsigned long long)startContiguousAsyncActionWithInitialBlock:(id /* block */)arg1;
- (unsigned long long)startContiguousAsyncActionWithInitialDataBlock:(id /* block */)arg1;
- (id)task;
- (struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned int x2; })taskLock;
- (id)taskQueue;

@end
