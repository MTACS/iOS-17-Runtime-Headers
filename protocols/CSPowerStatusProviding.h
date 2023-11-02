
@protocol CSPowerStatusProviding <NSObject>

@required

- (bool)isConnectedToExternalChargingSource;
- (bool)isConnectedToQiPower;
- (bool)isConnectedToWirelessInternalCharger;
- (bool)isConnectedToWirelessInternalChargingAccessory;
- (bool)isOnAC;

@end
