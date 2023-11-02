
@protocol MNVirtualGarageProvider <NSObject>

@required

- (bool)assumesFullCharge;
- (void)setVirtualGarageDelegate:(id <MNVirtualGarageProviderDelegate>)arg1;
- (void)startVirtualGarageUpdates;
- (void)stopVirtualGarageUpdates;
- (void)updatedVehicleStateWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VGVehicle *, NSError *, void*
- (unsigned long long)vehiclesCount;
- (<MNVirtualGarageProviderDelegate> *)virtualGarageDelegate;

@end
