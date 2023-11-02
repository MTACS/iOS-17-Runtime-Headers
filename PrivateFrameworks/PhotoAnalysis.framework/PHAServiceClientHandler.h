
@interface PHAServiceClientHandler : NSObject <NSXPCConnectionDelegate, PHAServiceOperationHandling, PHAServiceOperationListener, PLPhotoAnalysisServiceProtocol> {
    NSString * _clientBundleID;
    PHAExecutive * _executive;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _operationsByIdentifier;
    PHAManager * _photoAnalysisManager;
    id  _serviceUnavailableHandler;
    NSXPCConnection * _xpcConnection;
}

@property (readonly) NSString *clientBundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PHAExecutive *executive;
@property (readonly) unsigned long long hash;
@property (retain) PHAManager *photoAnalysisManager;
@property (retain) id serviceUnavailableHandler;
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)cancelOperationsWithIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (id)clientBundleID;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (id)contextInformationFromInvocation:(id)arg1;
- (id)description;
- (id)executive;
- (id)forwardingTargetForInvocation:(id)arg1 contextInformation:(id)arg2 cancelBackgroundActivities:(bool*)arg3;
- (void)handleOperation:(id)arg1;
- (id)init;
- (id)initWithXPCConnection:(id)arg1 executive:(id)arg2;
- (bool)isPhotos;
- (bool)isplphotosctl;
- (id)libraryURLFromContextInformation:(id)arg1;
- (id)managerForInvocation:(id)arg1 contextInformation:(id)arg2;
- (void)operationDidFinish:(id)arg1;
- (void)operationWillStart:(id)arg1;
- (id)photoAnalysisManager;
- (void)removeClientFromExecutiveIfNeeded;
- (id)serviceUnavailableHandler;
- (void)setExecutive:(id)arg1;
- (void)setPhotoAnalysisManager:(id)arg1;
- (void)setServiceUnavailableHandler:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)shutdown;
- (void)submitBlockToExecutiveStateQueue:(id /* block */)arg1;
- (bool)validateOperation:(id)arg1 forConnection:(id)arg2;
- (id)xpcConnection;
- (void)xpcHandlerInvalidate;

@end
