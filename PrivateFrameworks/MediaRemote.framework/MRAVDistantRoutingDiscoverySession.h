
@interface MRAVDistantRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRAVDistantRoutingDiscoveryClientProtocol> {
    unsigned int  _discoveryMode;
    NSDate * _discoveryModeDate;
    NSArray * _distantEndpoints;
    NSArray * _distantOutputDevices;
    bool  _enableThrottling;
    unsigned int  _endpointFeatures;
    NSDate * _hostedRoutingConnectionDate;
    bool  _hostedRoutingConnectionDidInitialize;
    NSXPCConnection * _hostedRoutingSessionConnection;
    NSArray * _notificationTokens;
    NSString * _routingContextUID;
    NSObject<OS_dispatch_queue> * _serialQueue;
    int  _serviceResetNotifyToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *distantEndpoints;
@property (nonatomic, retain) NSArray *distantOutputDevices;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCConnection *hostedRoutingSessionConnection;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serviceInterface;

- (void).cxx_destruct;
- (id)_hostedRoutingConnection;
- (void)_initializeHostedRoutingConnectionWithCompletion:(id /* block */)arg1;
- (void)_registerForPerRoutingContextNotifications;
- (void)_reloadAvailableDistantEndpoints;
- (void)_reloadAvailableDistantEndpointsWithEndpoints:(id)arg1;
- (void)_reloadAvailableDistantOutputDevices;
- (void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)arg1;
- (void)_reloadHostedRoutingServiceDiscoveryMode;
- (bool)_shouldAddLocalEndpoint;
- (id)availableEndpoints;
- (void)availableEndpointsDidChange:(id)arg1;
- (id)availableOutputDevices;
- (void)availableOutputDevicesDidChange:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (bool)devicePresenceDetected;
- (unsigned int)discoveryMode;
- (id)distantEndpoints;
- (id)distantOutputDevices;
- (unsigned int)endpointFeatures;
- (id)hostedRoutingSessionConnection;
- (id)initWithConfiguration:(id)arg1;
- (id)routingContextUID;
- (void)setDiscoveryMode:(unsigned int)arg1;
- (void)setDistantEndpoints:(id)arg1;
- (void)setDistantOutputDevices:(id)arg1;
- (void)setHostedRoutingSessionConnection:(id)arg1;
- (void)setRoutingContextUID:(id)arg1;

@end
