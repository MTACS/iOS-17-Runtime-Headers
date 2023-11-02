
@protocol PLMomentProcessingProtocol <NSObject>

@required

- (struct CLLocationCoordinate2D { double x1; double x2; })pl_coordinate;
- (NSDate *)pl_endDate;
- (CLLocation *)pl_location;
- (unsigned short)pl_locationType;
- (unsigned long long)pl_numberOfAssets;
- (short)pl_originatorState;
- (NSDate *)pl_startDate;
- (NSString *)pl_uuid;

@end
