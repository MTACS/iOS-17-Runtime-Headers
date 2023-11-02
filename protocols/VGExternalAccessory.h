
@protocol VGExternalAccessory <NSObject, VGVehicleStateProviding>

@required

- (bool)isConnectedToAccessoryWithIdentifier:(NSString *)arg1;
- (bool)isConnectedToVehicle:(VGVehicle *)arg1;

@end
