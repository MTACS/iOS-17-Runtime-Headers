
@protocol PXPlacesGeotaggable <NSObject>

@required

- (long long)compareTo:(id <PXPlacesGeotaggable>)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;

@end
