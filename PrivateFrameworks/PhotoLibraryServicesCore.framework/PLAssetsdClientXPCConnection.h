
@interface PLAssetsdClientXPCConnection : NSObject <PLXPCProxyCreating> {
    PLAssetsdClientService * _assetsdClientService;
    NSXPCConnection * _connection;
    PLXPCMessageLogger * _connectionLogger;
    NSObject<OS_dispatch_queue> * _externalNotificationQueue;
    bool  _isShuttingDown;
    NSObject<OS_dispatch_queue> * _isolationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_makeNewResumedConnection;
- (void)_postInterruptedNotification;
- (id)_primitiveSynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_unboostingRemoteObjectProxy;
- (void)addBarrierBlock:(id /* block */)arg1;
- (void)addPhotoLibraryUnavailabilityHandler:(id /* block */)arg1;
- (id)connectionWithErrorHandler:(id /* block */)arg1;
- (void)handleInterruption;
- (void)handleInvalidation;
- (id)init;
- (void)invalidate;
- (void)prepareToShutdown;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
