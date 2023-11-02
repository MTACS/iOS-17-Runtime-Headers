
@interface HMDRemoteEventRouterServerConnection : NSObject <HMEMessageDatagramConnection> {
    long long  _connectionMode;
    HMDDevice * _device;
    NSUUID * _deviceIdentifier;
    bool  _supportsFragmentMessage;
    NSUUID * _userAccessControlProviderUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDevice:(id)arg1 connectionMode:(long long)arg2 supportsFragmentMessage:(bool)arg3 userAccessControlProviderUUID:(id)arg4;
- (id)initWithDeviceIdentifier:(id)arg1 device:(id)arg2 connectionMode:(long long)arg3 supportsFragmentMessage:(bool)arg4 userAccessControlProviderUUID:(id)arg5;

@end
