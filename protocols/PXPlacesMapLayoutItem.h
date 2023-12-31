
@protocol PXPlacesMapLayoutItem <NSObject>

@required

- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (NSOrderedSet *)geotaggables;
- (bool)isEqualToLayoutItem:(id <PXPlacesMapLayoutItem>)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;

@end
