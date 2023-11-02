
@protocol TVRMSPairingSession <NSObject>

@required

- (NSString *)advertisedAppName;
- (NSString *)advertisedDeviceModel;
- (NSString *)advertisedDeviceName;
- (void)beginPairing;
- (<TVRMSPairingSessionDelegate> *)delegate;
- (void)endPairing;
- (NSString *)passcode;
- (void)setAdvertisedAppName:(NSString *)arg1;
- (void)setAdvertisedDeviceModel:(NSString *)arg1;
- (void)setAdvertisedDeviceName:(NSString *)arg1;
- (void)setDelegate:(id <TVRMSPairingSessionDelegate>)arg1;
- (void)setPasscode:(NSString *)arg1;

@end
