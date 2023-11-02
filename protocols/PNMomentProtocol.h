
@protocol PNMomentProtocol <NSObject>

@required

- (struct CLLocationCoordinate2D { double x1; double x2; })approximateCoordinate;
- (NSDate *)endDate;
- (unsigned long long)estimatedAssetCount;
- (bool)isCoarse;
- (NSString *)localIdentifier;
- (NSDate *)startDate;

@end
