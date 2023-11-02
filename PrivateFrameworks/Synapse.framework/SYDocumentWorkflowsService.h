
@interface SYDocumentWorkflowsService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    SYDocumentWorkflowsRepository * _repository;
    NSObject<OS_dispatch_queue> * _serviceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serviceQueue;
@property (readonly) Class superclass;

+ (id)serviceName;

- (void).cxx_destruct;
- (void)beginListeningToConnections;
- (void)dealloc;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)serviceQueue;
- (void)setListener:(id)arg1;
- (void)setServiceQueue:(id)arg1;

@end
