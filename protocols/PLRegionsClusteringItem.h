
@protocol PLRegionsClusteringItem <NSObject>

@required

- (struct CLLocationCoordinate2D { double x1; double x2; })pl_coordinate;
- (NSDate *)pl_date;
- (double)pl_gpsHorizontalAccuracy;
- (NSString *)pl_uuid;

@end
