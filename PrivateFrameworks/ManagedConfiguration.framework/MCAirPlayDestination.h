
@interface MCAirPlayDestination : NSObject {
    NSString * _deviceID;
    NSString * _deviceName;
    NSString * _password;
}

@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, retain) NSString *password;

- (void).cxx_destruct;
- (id)deviceID;
- (id)deviceName;
- (id)password;
- (void)setDeviceID:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setPassword:(id)arg1;

@end
