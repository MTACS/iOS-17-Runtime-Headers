
@protocol PXMutablePlacesMapContainerConfiguration <NSObject>

@required

- (bool)enableNearbyAssetsAffordance;
- (bool)gridViewEnabled;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })initialCoordinateRegion;
- (NSString *)localizedNavigationItemTitle;
- (void)setEnableNearbyAssetsAffordance:(bool)arg1;
- (void)setGridViewEnabled:(bool)arg1;
- (void)setInitialCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLocalizedNavigationItemTitle:(NSString *)arg1;

@end
