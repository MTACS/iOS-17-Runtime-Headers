
@protocol MNVirtualGarageProviderDelegate <NSObject>

@required

- (void)virtualGarageProvider:(id <MNVirtualGarageProvider>)arg1 didUpdateSelectedVehicle:(VGVehicle *)arg2;

@end
