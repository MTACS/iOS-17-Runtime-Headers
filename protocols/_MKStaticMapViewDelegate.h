
@protocol _MKStaticMapViewDelegate <NSObject>

@optional

- (MKOverlayRenderer *)mapView:(_MKStaticMapView *)arg1 rendererForOverlay:(id <MKOverlay>)arg2;
- (MKAnnotationView *)mapView:(_MKStaticMapView *)arg1 viewForAnnotation:(id <MKAnnotation>)arg2;
- (void)mapViewDidFailLoadingMap:(_MKStaticMapView *)arg1 withError:(NSError *)arg2;
- (void)mapViewDidFinishLoadingMap:(_MKStaticMapView *)arg1;
- (void)mapViewWillStartLoadingMap:(_MKStaticMapView *)arg1;

@end
