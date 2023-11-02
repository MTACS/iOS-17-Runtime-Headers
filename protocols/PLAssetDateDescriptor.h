
@protocol PLAssetDateDescriptor <NSObject>

@required

- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (NSDate *)localDateAndCreateIfNeededWithLocalDateCreator:(PLLocalCreationDateCreator *)arg1;
- (NSString *)rawTimeZoneName;
- (NSNumber *)rawTimeZoneOffsetValue;
- (NSDate *)utcDate;
- (NSString *)uuid;

@end
