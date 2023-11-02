
@protocol CRMessagingServiceVehicleRepresenting <NSObject>

@required

- (NSString *)PPID;
- (NSArray *)accessoryProtocols;
- (NSDictionary *)analyticsDescription;
- (NSString *)bluetoothAddress;
- (NSData *)certificateSerialNumber;
- (NSString *)radarDescription;
- (bool)supportsCarPlayConnectionRequest;
- (bool)supportsEnhancedIntegration;
- (bool)supportsUSBCarPlay;
- (bool)supportsWiredBluetoothPairing;
- (bool)supportsWirelessCarPlay;
- (long long)transportType;
- (NSDictionary *)vehicleAccessoryInfoKeys;
- (NSString *)vehicleModelName;
- (NSString *)vehicleName;

@end
