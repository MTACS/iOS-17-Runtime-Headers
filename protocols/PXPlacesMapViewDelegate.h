
@protocol PXPlacesMapViewDelegate <NSObject>

@optional

- (void)mapView:(PXPlacesMapView *)arg1 didAddAnnotationViews:(NSArray *)arg2;
- (void)mapView:(PXPlacesMapView *)arg1 didSelectAnnotationView:(MKAnnotationView *)arg2;
- (void)mapView:(PXPlacesMapView *)arg1 regionDidChangeAnimated:(bool)arg2;
- (MKOverlayRenderer *)mapView:(PXPlacesMapView *)arg1 rendererForOverlay:(id <MKOverlay>)arg2;
- (MKAnnotationView *)mapView:(PXPlacesMapView *)arg1 viewForAnnotation:(id <MKAnnotation>)arg2;
- (void)mapViewDidFinishRenderingMap:(PXPlacesMapView *)arg1 fullyRendered:(bool)arg2;
- (void)mapViewWillStartLocatingUser:(PXPlacesMapView *)arg1;

@end
