
@interface PXRemoteDiagnosticsService : NSObject <NSXPCListenerDelegate> {
    <PXDiagnosticsAgent> * _agent;
    NSObject<OS_dispatch_queue> * _diagnosticsQueue;
    NSXPCListener * _listener;
}

@property (nonatomic, retain) <PXDiagnosticsAgent> *agent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)startServerOnInternalDevicesWithAgentClass:(Class)arg1;

- (void).cxx_destruct;
- (void)_startListening;
- (id)agent;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setAgent:(id)arg1;

@end
