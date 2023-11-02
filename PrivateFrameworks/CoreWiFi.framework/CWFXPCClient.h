
@interface CWFXPCClient : NSObject <CWFXPCEventProtocolPrivate, NSXPCProxyCreating> {
    NSXPCConnection * _XPCConnection;
    bool  _invalidated;
    NSMutableDictionary * _mutableActivityMap;
    NSMutableDictionary * _mutableEventAckMap;
    NSMutableDictionary * _mutableEventCallbackMap;
    NSMutableDictionary * _mutableEventIDMap;
    NSObject<OS_dispatch_queue> * _mutex;
    CWFXPCProxyConnection * _remoteXPCProxyConnection;
    long long  _serviceType;
}

@property bool invalidated;
@property (copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly, retain) CWFXPCProxyConnection *localXPCProxyConnection;
@property (nonatomic, retain) CWFXPCProxyConnection *remoteXPCProxyConnection;
@property (readonly) long long serviceType;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;

- (void).cxx_destruct;
- (void)__acknowledgeEventWithUUID:(id)arg1;
- (void)__beginActivity:(id)arg1 requestParameters:(id)arg2 reply:(id /* block */)arg3;
- (void)__receivedEvent:(id)arg1;
- (void)__startMonitoringEvent:(id)arg1 requestParameters:(id)arg2 reply:(id /* block */)arg3;
- (bool)beginActivity:(id)arg1 requestParameters:(id)arg2 error:(id*)arg3;
- (void)clearAllEventHandlers;
- (void)dealloc;
- (void)endActivity:(id)arg1 requestParameters:(id)arg2;
- (void)endAllActivities:(id)arg1;
- (id /* block */)eventHandlerWithEventID:(id)arg1;
- (id)init;
- (id)initWithServiceType:(long long)arg1;
- (id)initWithServiceType:(long long)arg1 endpoint:(id)arg2;
- (id)initWithServiceType:(long long)arg1 endpoint:(id)arg2 remoteXPCProxyConnection:(id)arg3;
- (id)initWithServiceType:(long long)arg1 remoteXPCProxyConnection:(id)arg2;
- (void)invalidate;
- (bool)invalidated;
- (id /* block */)invalidationHandler;
- (id)localXPCProxyConnection;
- (void)receivedAcknowledgedXPCEvent:(id)arg1 reply:(id /* block */)arg2;
- (void)receivedXPCEvent:(id)arg1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)remoteXPCProxyConnection;
- (void)resume;
- (long long)serviceType;
- (void)setEventHandler:(id /* block */)arg1 eventID:(id)arg2;
- (void)setInvalidated:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRemoteXPCProxyConnection:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (bool)startMonitoringEvent:(id)arg1 requestParameters:(id)arg2 error:(id*)arg3;
- (void)stopMonitoringAllEvents:(id)arg1;
- (void)stopMonitoringEvent:(id)arg1 requestParameters:(id)arg2;
- (void)suspend;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)targetQueue;

@end
