
@interface NFRemoteAdminManager : NSObject <NFRemoteAdminManagerCallbacks, NSXPCConnectionDelegate> {
    NSXPCConnection * _connection;
    NSMutableSet * _eventListeners;
    bool  _hasEventListener;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedRemoteAdminManager;

- (void).cxx_destruct;
- (void)_connectIfNeeded;
- (void)appletStateChange:(id)arg1;
- (bool)cancelCardIngestion;
- (void)connectToServer:(id)arg1 callback:(id /* block */)arg2;
- (void)connectToServer:(id)arg1 initialClientRequestInfo:(id)arg2 callback:(id /* block */)arg3;
- (id)deleteAllAppletsAndCleanupWithTSM;
- (void)didInterruptXPCConnection:(id)arg1;
- (void)didInvalidateXPCConnection:(id)arg1;
- (id)getAPNPublicToken;
- (void)getSELDInfoForBroker:(id /* block */)arg1;
- (void)ingestCard:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (id)nextRequestForServer:(id)arg1;
- (id)primaryRegionTopic;
- (bool)queueServerConnection:(id)arg1;
- (bool)queueServerConnectionForApplets:(id)arg1;
- (void)readerModeCardIngestionStatus:(unsigned long long)arg1;
- (void)readerModeCardSessionToken:(id)arg1;
- (void)registerEventListener:(id)arg1;
- (id)registrationInfo;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)setRegistrationInfo:(id)arg1 primaryRegionTopic:(id)arg2;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)unregisterEventListener:(id)arg1;

@end
