
@interface TRDeviceSetupConnectAction : TRDeviceSetupAction

@property (nonatomic, readonly, copy) NSString *deviceName;
@property (nonatomic, readonly, copy) NSString *networkPassword;
@property (nonatomic, readonly, copy) NSString *networkSSID;

- (id)deviceName;
- (id)init;
- (id)initWithDeviceName:(id)arg1 networkSSID:(id)arg2 networkPassword:(id)arg3;
- (id)networkPassword;
- (id)networkSSID;

@end
