
@interface CAMZoomPinchGestureRecognizer : UIPinchGestureRecognizer {
    double  __zoomPinchInitialDistance;
}

@property (setter=_setZoomPinchInitialDistance:, nonatomic) double _zoomPinchInitialDistance;
@property (nonatomic, readonly) double zoomScale;

- (double)_distanceBetweenInitialTwoTouches;
- (double)_exponentialZoomScale;
- (double)_hybridZoomScale;
- (void)_setZoomPinchInitialDistance:(double)arg1;
- (double)_zoomPinchDistance;
- (double)_zoomPinchInitialDistance;
- (void)setState:(long long)arg1;
- (double)zoomScale;

@end
