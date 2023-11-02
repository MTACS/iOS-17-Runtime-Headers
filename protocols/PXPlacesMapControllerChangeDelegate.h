
@protocol PXPlacesMapControllerChangeDelegate <NSObject>

@required

- (void)dataSourceDidChange:(PXPlacesMapController *)arg1;
- (void)mapRegionDidChange:(PXPlacesMapController *)arg1;

@optional

- (void)locationServiceAuthorizationChanged;

@end
