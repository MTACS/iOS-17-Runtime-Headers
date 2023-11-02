
@interface AXRemoteDevice : NSObject {
    bool  _connected;
    <AXRemoteDeviceConnectionDelegate> * _connectionDelegate;
    long long  _contextType;
    RPCompanionLinkDevice * _device;
    NSMutableDictionary * _deviceGestureCustomizations;
    RPCompanionLinkClient * _deviceLinkClient;
    NSArray * _deviceRemoteActions;
    long long  _deviceType;
}

@property (nonatomic) bool connected;
@property (nonatomic) <AXRemoteDeviceConnectionDelegate> *connectionDelegate;
@property (nonatomic) long long contextType;
@property (nonatomic, retain) RPCompanionLinkDevice *device;
@property (nonatomic, retain) NSMutableDictionary *deviceGestureCustomizations;
@property (nonatomic, retain) RPCompanionLinkClient *deviceLinkClient;
@property (nonatomic, retain) NSArray *deviceRemoteActions;
@property (nonatomic) long long deviceType;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)_deviceName;
- (void)_setRemoteAction:(id)arg1 forHandGestureEventUsage:(long long)arg2;
- (void)connectIfNecessary:(id /* block */)arg1;
- (bool)connected;
- (id)connectionDelegate;
- (long long)contextType;
- (id)customizedRemoteActionForHandGestureEventUsage:(long long)arg1;
- (id)device;
- (id)deviceGestureCustomizations;
- (id)deviceLinkClient;
- (id)deviceRemoteActions;
- (long long)deviceType;
- (void)disconnect;
- (id)displayName;
- (id)identifier;
- (id)initWithDevice:(id)arg1;
- (id)remoteActionsForPreferredContextType:(long long)arg1;
- (void)sendPayload:(id)arg1 withEventID:(id)arg2;
- (void)sendPayload:(id)arg1 withEventID:(id)arg2 withTimeout:(double)arg3 completion:(id /* block */)arg4;
- (void)setConnected:(bool)arg1;
- (void)setConnectionDelegate:(id)arg1;
- (void)setContextType:(long long)arg1;
- (void)setDevice:(id)arg1;
- (void)setDeviceGestureCustomizations:(id)arg1;
- (void)setDeviceLinkClient:(id)arg1;
- (void)setDeviceRemoteActions:(id)arg1;
- (void)setDeviceType:(long long)arg1;

@end
