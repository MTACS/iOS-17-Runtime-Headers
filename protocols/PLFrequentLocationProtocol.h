
@protocol PLFrequentLocationProtocol <NSObject>

@required

- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (NSDateInterval *)dateInterval;
- (NSArray *)sortedMoments;

@end
