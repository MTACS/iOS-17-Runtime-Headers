
@protocol INSaveParkingLocationIntentExport <NSObject, JSExport>

@required

- (id)init;
- (CLPlacemark *)parkingLocation;
- (NSString *)parkingNote;
- (void)setParkingLocation:(CLPlacemark *)arg1;
- (void)setParkingNote:(NSString *)arg1;

@end
