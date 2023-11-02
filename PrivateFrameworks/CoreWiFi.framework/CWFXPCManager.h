
@interface CWFXPCManager : NSObject <CWFXPCListenerDelegate, CWFXPCRequestProxyDelegate> {
    CWFXPCRequestProxy * _XPCRequestProxy;
    <CWFXPCManagerDelegate> * _delegate;
    NSMutableArray * _mutableXPCListeners;
    NSObject<OS_dispatch_queue> * _mutexQueue;
    RBSProcessMonitor * _processMonitor;
    NSMutableSet * _processMonitorPIDs;
    NSSet * _supportedRequestTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (retain) <CWFXPCManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy) NSSet *supportedRequestTypes;

- (void).cxx_destruct;
- (void)XPCListener:(id)arg1 XPCConnection:(id)arg2 canceledXPCRequestsWithUUID:(id)arg3;
- (void)XPCListener:(id)arg1 XPCConnection:(id)arg2 receivedXPCRequest:(id)arg3;
- (void)XPCListener:(id)arg1 XPCConnection:(id)arg2 updatedRegisteredEventIDs:(id)arg3;
- (void)XPCListener:(id)arg1 addedXPCConnection:(id)arg2;
- (void)XPCListener:(id)arg1 invalidatedXPCConnection:(id)arg2;
- (void)XPCRequestProxy:(id)arg1 XPCConnection:(id)arg2 canceledXPCRequestsWithUUID:(id)arg3;
- (void)XPCRequestProxy:(id)arg1 XPCConnection:(id)arg2 receivedXPCRequest:(id)arg3;
- (void)XPCRequestProxy:(id)arg1 invalidatedXPCConnection:(id)arg2;
- (void)XPCRequestProxy:(id)arg1 sendXPCEvent:(id)arg2 reply:(id /* block */)arg3;
- (void)__updateProcessMonitorConfiguration;
- (id)delegate;
- (id)endpointWithServiceType:(long long)arg1;
- (id)init;
- (id)initWithServiceTypes:(id)arg1;
- (void)invalidate;
- (id)localXPCClientWithServiceType:(long long)arg1;
- (id)registeredActivities;
- (id)registeredEventIDs;
- (void)resume;
- (void)sendXPCEvent:(id)arg1 reply:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSupportedRequestTypes:(id)arg1;
- (void)setTargetQueue:(id)arg1 requestType:(long long)arg2 interfaceName:(id)arg3;
- (id)supportedRequestTypes;
- (void)suspend;

@end
