
@protocol MNVirtualGarageManagerObserver <NSObject>

@required

- (void)virtualGarageManager:(MNVirtualGarageManager *)arg1 didUpdateSelectedVehicle:(VGVehicle *)arg2;

@end
