
@protocol VKAnnotationTrackingCameraController <NSObject>

@required

- (struct { bool x1; double x2; bool x3; bool x4; })annotationTrackingBehavior;
- (bool)hasVehicleHeading;
- (bool)isAnimatingToTrackAnnotation;
- (bool)isTrackingHeading;
- (void)setAnnotationTrackingBehavior:(struct { bool x1; double x2; bool x3; bool x4; })arg1;
- (void)setHasVehicleHeading:(bool)arg1;
- (void)startTrackingAnnotation:(void *)arg1 trackHeading:(void *)arg2 animated:(void *)arg3 duration:(void *)arg4 timingFunction:(void *)arg5; // needs 5 arg types, found 10: <VKTrackableAnnotation> *, bool, bool, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, float, id /* block */, float, void*
- (void)stopTrackingAnnotation;
- (<VKTrackableAnnotation> *)trackingAnnotation;

@end
