
@protocol PXPlacesMapControllerSelectionDelegate <NSObject>

@required

- (void)didSelectGeotaggableItems:(NSOrderedSet *)arg1 fromMapView:(PXPlacesMapView *)arg2;

@end
