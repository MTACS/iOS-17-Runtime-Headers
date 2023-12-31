
@protocol PXPlacesMapAnnotationRenderer <PXPlacesMapRenderer>

@required

- (<MKAnnotation> *)annotationForGeotaggables:(NSOrderedSet *)arg1 initialCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (bool)supportsMoveAnimations;
- (MKAnnotationView *)viewForAnnotation:(id <MKAnnotation>)arg1 andMapView:(PXPlacesMapView *)arg2;

@end
