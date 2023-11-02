
@protocol CLSTimeLocationTuple <NSObject>

@required

- (struct CLLocationCoordinate2D { double x1; double x2; })coordinates;
- (NSDate *)endDate;
- (NSDate *)expandedEndDate;
- (NSDate *)expandedStartDate;
- (NSDate *)startDate;
- (NSString *)timeLocationIdentifier;

@end
