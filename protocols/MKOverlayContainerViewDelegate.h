
@protocol MKOverlayContainerViewDelegate <MKOverlayDrawableProvider>

@required

- (void)overlayContainerAddedDrawables:(NSArray *)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })overlayContainerVisibleMapRect:(MKOverlayContainerView *)arg1;
- (VKMapView *)vk_mapLayer;

@end
