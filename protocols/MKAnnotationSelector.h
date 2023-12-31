
@protocol MKAnnotationSelector <NSObject>

@required

- (id /* block */)annotationCoordinateTest:(void *)arg1; // needs 1 arg types, found 5: id /* block */, struct CLLocationCoordinate2D { double x1; double x2; }, void*, id, SEL
- (id /* block */)annotationRectTest:(void *)arg1; // needs 1 arg types, found 5: id /* block */, struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }, void*, id, SEL
- (bool)shouldHideOffscreenSelectedAnnotation;

@end
