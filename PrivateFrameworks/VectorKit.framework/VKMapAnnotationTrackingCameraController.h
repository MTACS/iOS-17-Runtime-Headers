
@interface VKMapAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {
    float  _currentAnimationCompletedFraction;
    bool  _zooming;
}

- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })_effectiveEdgeInsets;
- (void)_goToAnnotationAnimated:(bool)arg1 duration:(double)arg2 timingFunction:(id /* block */)arg3 isInitial:(bool)arg4;
- (double)_minTrackingCameraDistance:(bool)arg1;
- (void)_rotateToHeadingAnimated:(bool)arg1 duration:(double)arg2;
- (double)_zoomLevelForCameraPosition:(struct Matrix<double, 3, 1> { double x1[3]; })arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)updateFramerate;

@end
