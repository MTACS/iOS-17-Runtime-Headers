
@interface CWFXPCListener : NSObject <CWFXPCConnectionDelegate, NSXPCListenerDelegate> {
    NSXPCListener * _XPCListener;
    NSArray * _bootArgs;
    <CWFXPCListenerDelegate> * _delegate;
    NSXPCInterface * _eventXPCInterface;
    NSMutableArray * _mutableXPCConnections;
    NSObject<OS_dispatch_queue> * _mutexQueue;
    NSXPCInterface * _requestXPCInterface;
    long long  _serviceType;
}

@property (nonatomic, readonly, retain) NSXPCListener *XPCListener;
@property (readonly, copy) NSString *debugDescription;
@property (retain) <CWFXPCListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long serviceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)XPCConnection:(id)arg1 canceledXPCRequestsWithUUID:(id)arg2;
- (void)XPCConnection:(id)arg1 receivedXPCRequest:(id)arg2;
- (void)XPCConnection:(id)arg1 updatedRegisteredEventIDs:(id)arg2;
- (id)XPCConnections;
- (id)XPCListener;
- (bool)__allowXPCConnection:(id)arg1 serviceType:(long long)arg2;
- (id)delegate;
- (id)init;
- (id)initWithServiceType:(long long)arg1;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)localXPCClient;
- (id)registeredActivities;
- (id)registeredEventIDs;
- (void)resume;
- (void)sendXPCEvent:(id)arg1 reply:(id /* block */)arg2;
- (long long)serviceType;
- (void)setDelegate:(id)arg1;
- (void)suspend;

@end
