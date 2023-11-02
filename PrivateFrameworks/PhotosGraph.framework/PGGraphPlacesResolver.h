
@interface PGGraphPlacesResolver : NSObject

+ (id)_businessItemsAtCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 inCache:(id)arg2;
+ (id)_clusteredRegionsFromFeeder:(id)arg1;
+ (id)poiStringFromSpatialLookupCategory:(long long)arg1;
+ (id)resolvePlacesForMomentNode:(id)arg1 feeder:(id)arg2;
+ (id)resolvedPlaceForRegion:(id)arg1 withPlaceItems:(id)arg2;

@end
