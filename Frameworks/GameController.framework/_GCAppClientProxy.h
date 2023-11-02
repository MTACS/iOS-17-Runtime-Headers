
@interface _GCAppClientProxy : NSObject <GCAdaptiveTriggersXPCProxyServiceRemoteServerInterface, GCBatteryXPCProxyServiceRemoteServerInterface, GCControllerServiceRemoteServerInterface, GCGameIntentXPCProxyServiceRemoteServerInterface, GCLightXPCProxyServiceRemoteServerInterface, GCMotionXPCProxyServiceRemoteServerInterface, GCPlayerIndicatorXPCProxyServiceRemoteServerInterface, GCSettingsXPCProxyServiceRemoteServerInterface, GCSystemGestureXPCProxyServiceRemoteServerInterface, _GCAppServerInterface, _GCDeviceClient> {
    <_GCIPCIncomingConnection> * _connection;
    id  _connectionInterruptedRegistration;
    id  _connectionInvalidationRegistration;
    <GCControllerServiceRemoteClientInterface> * _controllerServiceClient;
    unsigned long long  _controllerServiceClientPendingUpdates;
    _Atomic bool  _invalid;
    NSArray * _invalidationHandlers;
    NSObject<OS_os_transaction> * _keyboardMouseTransaction;
    NSMapTable * _publishedControllerDescriptions;
    _GCControllerManagerServer * _server;
}

@property (readonly) <_GCIPCObjectRegistry> *IPCObjectRegistry;
@property (readonly) <_GCIPCServiceRegistry> *IPCServiceRegistry;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (getter=isInvalid, nonatomic, readonly) bool invalid;
@property (copy) NSArray *invalidationHandlers;
@property (nonatomic, readonly) int processIdentifier;

+ (id)clientProxyWithConnection:(id)arg1 server:(id)arg2;
+ (id)settingsSuiteName;

- (void).cxx_destruct;
- (id)IPCObjectRegistry;
- (id)IPCServiceRegistry;
- (id)_initWithConnection:(id)arg1 server:(id)arg2;
- (void)_invalidate;
- (void)adaptiveTriggersXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(id /* block */)arg2;
- (id)addInvalidationHandler:(id /* block */)arg1;
- (void)batteryXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(id /* block */)arg2;
- (id)bundleIdentifier;
- (void)checkClipBufferingEnabledWithReply:(id /* block */)arg1;
- (void)checkEmulatedControllerEnabledWithReply:(id /* block */)arg1;
- (void)clientCanReceiveEventsDidChange:(bool)arg1;
- (void)connectToAdaptiveTriggersXPCProxyServiceWithClient:(id)arg1 reply:(id /* block */)arg2;
- (void)connectToBatteryXPCProxyServiceWithClient:(id)arg1 reply:(id /* block */)arg2;
- (void)connectToControllerServiceWithClient:(id)arg1 reply:(id /* block */)arg2;
- (void)connectToGameIntentXPCProxyServiceWithClient:(id)arg1 reply:(id /* block */)arg2;
- (void)connectToLightXPCProxyServiceWithClient:(id)arg1 reply:(id /* block */)arg2;
- (void)connectToMotionXPCProxyServiceWithClient:(id)arg1 reply:(id /* block */)arg2;
- (void)connectToPhotoVideoXPCProxyServiceWithClient:(id)arg1 reply:(id /* block */)arg2;
- (void)connectToPlayerIndicatorXPCProxyServiceWithClient:(id)arg1 reply:(id /* block */)arg2;
- (void)connectToSettingsXPCProxyServiceWithClient:(id)arg1 reply:(id /* block */)arg2;
- (void)connectToSystemGestureXPCProxyServiceWithClient:(id)arg1 reply:(id /* block */)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)enableFeature:(long long)arg1;
- (void)fetchControllerDescriptionsWithReply:(id /* block */)arg1;
- (void)gameIntentXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(id /* block */)arg2;
- (void)generateURLFor:(id)arg1 withReply:(id /* block */)arg2;
- (void)getTheLastGeneratedURLWithReply:(id /* block */)arg1;
- (id)init;
- (id)invalidationHandlers;
- (bool)isInvalid;
- (void)lightXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(id /* block */)arg2;
- (void)motionXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(id /* block */)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)onVideoRecordingStart:(id /* block */)arg1;
- (void)onVideoRecordingStopWithURL:(id)arg1 reply:(id /* block */)arg2;
- (void)pingWithReply:(id /* block */)arg1;
- (void)playerIndicatorXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(id /* block */)arg2;
- (int)processIdentifier;
- (bool)readBooleanValueWithName:(id)arg1;
- (id)redactedDescription;
- (void)setInvalidationHandlers:(id)arg1;
- (void)settingsXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(id /* block */)arg2;
- (void)systemGestureXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(id /* block */)arg2;
- (void)takeScreenshotWithReply:(id /* block */)arg1;

@end
