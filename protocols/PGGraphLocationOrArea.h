
@protocol PGGraphLocationOrArea <NSObject>

@required

- (struct CLLocationCoordinate2D { double x1; double x2; })centroidCoordinate;
- (NSString *)label;
- (<PGGraphLocationOrAreaNodeCollection> *)locationOrAreaNodeCollection;
- (bool)supportsNameShortening;

@end
