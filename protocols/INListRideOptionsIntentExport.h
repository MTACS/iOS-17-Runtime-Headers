
@protocol INListRideOptionsIntentExport <NSObject, JSExport>

@required

- (CLPlacemark *)dropOffLocation;
- (id)init;
- (CLPlacemark *)pickupLocation;
- (void)setDropOffLocation:(CLPlacemark *)arg1;
- (void)setPickupLocation:(CLPlacemark *)arg1;

@end
