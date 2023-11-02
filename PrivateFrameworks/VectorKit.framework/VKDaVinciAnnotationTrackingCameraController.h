
@interface VKDaVinciAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {
    float  _currentAnimationCompletedFraction;
    struct { 
        double latitude; 
        double longitude; 
    }  _currentAnimationPresentationEndCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    }  _currentAnimationPresentationStartCoordinate;
    bool  _zooming;
}

- (struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<geo::RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::MeterUnitDescription, double> { double x_3_1_1; } x3; })_centerCoordinate:(struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<geo::RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::MeterUnitDescription, double> { double x_3_1_1; } x3; })arg1 forEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })_effectiveEdgeInsets;
- (void)_goToAnnotationAnimated:(bool)arg1 duration:(double)arg2 timingFunction:(id /* block */)arg3 isInitial:(bool)arg4;
- (double)_minTrackingCameraDistance:(bool)arg1;
- (void)_rotateToHeadingAnimated:(bool)arg1 duration:(double)arg2;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })_scaledEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1 withCanvasSize:(struct CGSize { double x1; double x2; })arg2;
- (double)_zoomLevelForDistance:(struct Unit<geo::MeterUnitDescription, double> { double x1; })arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)updateFramerate;

@end
