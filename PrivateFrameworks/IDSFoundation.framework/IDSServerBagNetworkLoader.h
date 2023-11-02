
@interface IDSServerBagNetworkLoader : NSObject <IMConnectionMonitorDelegate> {
    IMURLRequestSession * _URLRequestSession;
    id /* block */  _URLSessionCreationBlock;
    IDSServerBagConfig * _config;
    IMConnectionMonitor * _connectionMonitor;
    id /* block */  _connectionMonitorBlock;
    unsigned long long  _loaderState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _storedCompletion;
}

@property (nonatomic, retain) IMURLRequestSession *URLRequestSession;
@property (nonatomic, copy) id /* block */ URLSessionCreationBlock;
@property (nonatomic, retain) IDSServerBagConfig *config;
@property (nonatomic, retain) IMConnectionMonitor *connectionMonitor;
@property (nonatomic, copy) id /* block */ connectionMonitorBlock;
@property (nonatomic, readonly) bool isLoading;
@property (nonatomic, readonly) bool isServerAvailable;
@property (nonatomic) unsigned long long loaderState;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) id /* block */ storedCompletion;

- (void).cxx_destruct;
- (id)URLRequestSession;
- (id /* block */)URLSessionCreationBlock;
- (id)config;
- (id)connectionMonitor;
- (id /* block */)connectionMonitorBlock;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 queue:(id)arg2 connectionMonitorBlock:(id /* block */)arg3 URLSessionCreationBlock:(id /* block */)arg4;
- (bool)isLoading;
- (bool)isServerAvailable;
- (void)loadBagIfPossibleWithCompletion:(id /* block */)arg1;
- (unsigned long long)loaderState;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)queue;
- (void)setConfig:(id)arg1;
- (void)setConnectionMonitor:(id)arg1;
- (void)setConnectionMonitorBlock:(id /* block */)arg1;
- (void)setLoaderState:(unsigned long long)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setQueue:(id)arg1;
- (void)setStoredCompletion:(id /* block */)arg1;
- (void)setURLRequestSession:(id)arg1;
- (void)setURLSessionCreationBlock:(id /* block */)arg1;
- (id /* block */)storedCompletion;

@end
