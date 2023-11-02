
@protocol INDeleteParkingLocationIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (CLPlacemark *)parkingLocation;
- (NSString *)parkingNote;
- (void)setParkingLocation:(CLPlacemark *)arg1;
- (void)setParkingNote:(NSString *)arg1;

@end
