
@interface VKAnnotationTrackingCameraController : VKCameraController {
    <VKTrackableAnnotation> * _annotation;
    <VKTrackableAnnotationPresentation> * _annotationPresentation;
    struct { 
        bool shouldZoomToFit; 
        double idealCenterCoordinateDistance; 
        bool shouldPreserveUserSpecifiedZoomLevel; 
        bool resetAfterTracking; 
    }  _behavior;
    VKTimedAnimation * _currentAnimation;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _currentAnimationEndCameraPosition;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _currentAnimationEndPoint;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _currentAnimationStartCameraPosition;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _currentAnimationStartPoint;
    VKTimedAnimation * _currentHeadingAnimation;
    void * _elevationLogic;
    struct { 
        unsigned int hasPendingChange : 1; 
        unsigned int paused : 1; 
        unsigned int trackingHeading : 1; 
        unsigned int hasPendingHeadingChange : 1; 
        unsigned int isInitialRegionChange : 1; 
        unsigned int isJumpingToAnnotation : 1; 
        unsigned int hasVehicleHeading : 1; 
        unsigned int annotationImplementsAccuracy : 1; 
        unsigned int annotationImplementsHasValidHeading : 1; 
        unsigned int annotationImplementsHeading : 1; 
        unsigned int annotationImplementsExpectedCoordinateUpdateInterval : 1; 
        unsigned int annotationImplementsExpectedHeadingUpdateInterval : 1; 
    }  _flags;
    bool  _hasUserSpecifiedZoomLevel;
    bool  _hasVehicleHeading;
    float  _headingAnimationCompletedAngle;
    long long  _headingAnimationDisplayRate;
    double  _pendingChangeDuration;
    double  _pendingHeadingChangeDuration;
}

@property (nonatomic, readonly) <VKTrackableAnnotation> *annotation;
@property (nonatomic) struct { bool x1; double x2; bool x3; bool x4; } behavior;
@property (nonatomic) void*elevationLogic;
@property (nonatomic) bool hasUserSpecifiedZoomLevel;
@property (nonatomic) bool hasVehicleHeading;
@property (nonatomic) long long headingAnimationDisplayRate;
@property (nonatomic, readonly) bool shouldForceZoomToFit;
@property (getter=isTrackingHeading, nonatomic, readonly) bool trackingHeading;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_goToAnnotationAnimated:(bool)arg1 duration:(double)arg2 timingFunction:(id /* block */)arg3 isInitial:(bool)arg4;
- (void)_rotateToHeadingAnimated:(bool)arg1 duration:(double)arg2;
- (id)annotation;
- (struct { bool x1; double x2; bool x3; bool x4; })behavior;
- (void)dealloc;
- (void*)elevationLogic;
- (bool)hasUserSpecifiedZoomLevel;
- (bool)hasVehicleHeading;
- (long long)headingAnimationDisplayRate;
- (id)initWithMapDataAccess:(struct MapDataAccess { }*)arg1 animationRunner:(struct AnimationRunner { }*)arg2 runLoopController:(struct RunLoopController { struct MapEngine {} *x1; long long x2; }*)arg3 cameraDelegate:(id)arg4;
- (bool)isAnimating;
- (bool)isTrackingHeading;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (void)setBehavior:(struct { bool x1; double x2; bool x3; bool x4; })arg1;
- (void)setElevationLogic:(void*)arg1;
- (void)setGesturing:(bool)arg1;
- (void)setHasUserSpecifiedZoomLevel:(bool)arg1;
- (void)setHasVehicleHeading:(bool)arg1;
- (void)setHeadingAnimationDisplayRate:(long long)arg1;
- (bool)shouldForceZoomToFit;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3 duration:(double)arg4 timingFunction:(id /* block */)arg5;
- (void)stopTrackingAnnotation;
- (void)updateFramerate;

@end
