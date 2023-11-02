
@protocol MKZoomingGestureControlConfiguration <NSObject>

@required

- (double)decelerationThreshold;
- (double)maximumZoomInVelocity;
- (double)maximumZoomOutVelocity;
- (double)zoomDraggingResistance;
- (double)zoomOutFrictionScale;

@end
