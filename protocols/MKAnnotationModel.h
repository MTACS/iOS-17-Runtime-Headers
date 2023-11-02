
@protocol MKAnnotationModel <NSObject>

@required

- (void)addAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1 allowAnimation:(bool)arg2;
- (void)deselectAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1 animated:(bool)arg2;
- (void)moveAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1 fromCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 animated:(bool)arg3 duration:(double)arg4;
- (void)removeAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1;
- (void)selectAnnotationRepresentation:(id <MKAnnotationRepresentation>)arg1 animated:(bool)arg2;

@end
