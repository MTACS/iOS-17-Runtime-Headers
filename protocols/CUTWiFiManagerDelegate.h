
@protocol CUTWiFiManagerDelegate <NSObject>

@optional

- (void)cutWiFiManager:(CUTWiFiManager *)arg1 generatedPowerReading:(NSDictionary *)arg2;
- (void)cutWiFiManagerDeviceAttached:(CUTWiFiManager *)arg1;
- (void)cutWiFiManagerLinkDidChange:(CUTWiFiManager *)arg1 context:(NSDictionary *)arg2;

@end
