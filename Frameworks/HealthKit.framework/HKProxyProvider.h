
@interface HKProxyProvider : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    _HKXPCConnection * _connection;
    long long  _connectionGeneration;
    NSString * _daemonLaunchNotificationName;
    NSXPCInterface * _exportedInterface;
    <_HKXPCExportable> * _exportedObject;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _lock_automaticProxyReconnectionHandler;
    int  _notifyToken;
    NSMutableArray * _pendingFetchContinuations;
    NSXPCInterface * _remoteInterface;
    NSString * _serviceIdentifier;
    bool  _shouldRetryOnInterruption;
    <HKProxyProviderSource> * _source;
    <HKProxyProviderSource> * _weakSource;
}

@property (copy) id /* block */ automaticProxyReconnectionHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) <_HKXPCExportable> *exportedObject;
@property (nonatomic, readonly, copy) NSString *serviceIdentifier;
@property bool shouldRetryOnInterruption;

+ (id)_relaunchQueue;

- (void).cxx_destruct;
- (id)_fetchConnectionAndGeneration:(long long*)arg1 error:(id*)arg2;
- (void)_fetchEndpointAndConnectionWithContinuation:(id /* block */)arg1;
- (void)_fetchProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_fetchRetryingProxyWithErrorCount:(long long)arg1 handler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)_getSynchronousProxyWithErrorCount:(long long)arg1 handler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)_getSynchronousProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_handleError:(id)arg1 connectionGeneration:(long long)arg2;
- (void)_lock_flushContinuationsWithConnection:(id)arg1 error:(id)arg2;
- (void)_lock_setUpConnectionWithEndpoint:(id)arg1;
- (id)_lock_sourceWithError:(id*)arg1;
- (void)_resetConnectionWithGeneration:(long long)arg1;
- (void)_serverDidFinishLaunching;
- (id /* block */)automaticProxyReconnectionHandler;
- (id)clientQueue;
- (id /* block */)clientQueueActionHandlerWithCompletion:(id /* block */)arg1;
- (id /* block */)clientQueueDoubleObjectHandlerWithCompletion:(id /* block */)arg1;
- (id /* block */)clientQueueObjectHandlerWithCompletion:(id /* block */)arg1;
- (id /* block */)clientQueueProgressHandlerWithHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)debugIdentifier;
- (id)description;
- (id)exportedObject;
- (void)fetchProxyServiceEndpointFromSource:(id)arg1 serviceIdentifier:(id)arg2 endpointHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (void)fetchProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)getSynchronousProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id)initWithSource:(id)arg1 serviceIdentifier:(id)arg2 exportedObject:(id)arg3 exportedInterface:(id)arg4 remoteInterface:(id)arg5;
- (void)invalidate;
- (id)proxyServiceEndpointFromSource:(id)arg1 serviceIdentifier:(id)arg2 error:(id*)arg3;
- (void)referenceSourceWeakly;
- (id)serviceIdentifier;
- (void)setAutomaticProxyReconnectionHandler:(id /* block */)arg1;
- (void)setShouldRetryOnInterruption:(bool)arg1;
- (bool)shouldRetryOnInterruption;

@end
