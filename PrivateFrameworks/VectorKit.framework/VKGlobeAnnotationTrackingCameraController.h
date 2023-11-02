
@interface VKGlobeAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {
    void * _anchor;
    struct { 
        double latitude; 
        double longitude; 
    }  _currentAnimationEndCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    }  _currentAnimationPresentationEndCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    }  _currentAnimationPresentationStartCoordinate;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _currentAnimationStartCoordinate;
    void * _globeView;
    VKCameraRegionRestriction * _regionRestriction;
}

@property (nonatomic) void*globeView;
@property (nonatomic, retain) VKCameraRegionRestriction *regionRestriction;

- (void).cxx_destruct;
- (struct Matrix<int, 2, 1> { int x1[2]; })_centerCursor;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })_effectiveEdgeInsets;
- (void)_goToAnnotationAnimated:(bool)arg1 duration:(double)arg2 timingFunction:(id /* block */)arg3 isInitial:(bool)arg4;
- (struct Matrix<int, 2, 1> { int x1[2]; })_nonOffsetCenterCursor;
- (void)_rotateToHeadingAnimated:(bool)arg1 duration:(double)arg2;
- (void)dealloc;
- (void*)globeView;
- (id)init;
- (id)regionRestriction;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGlobeView:(void*)arg1;
- (void)setRegionRestriction:(id)arg1;

@end
