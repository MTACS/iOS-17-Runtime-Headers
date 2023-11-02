
@interface VKGlobeCameraController : VKScreenCameraController <VKGesturingCameraController> {
    double  _beganDoublePanPitch;
    struct CameraManager { 
        int (**_vptr$CameraManager)(); 
        bool _panBegin; 
        bool _panInProgress; 
        bool _panEnd; 
        struct Matrix<int, 2, 1> { 
            int _e[2]; 
        } _panCurrentCursor; 
        struct Matrix<int, 2, 1> { 
            int _e[2]; 
        } _panPreviousCursor; 
        struct Matrix<int, 2, 1> { 
            int _e[2]; 
        } _panStartCursor; 
        struct Coordinate3D<geo::Radians, double> { 
            struct Unit<geo::RadianUnitDescription, double> { 
                double _value; 
            } latitude; 
            struct Unit<geo::RadianUnitDescription, double> { 
                double _value; 
            } longitude; 
            struct Unit<geo::MeterUnitDescription, double> { 
                double _value; 
            } altitude; 
        } _panStartPosition; 
        double _panDistance; 
        bool _panAtStartPosition; 
        bool _rotateBegin; 
        bool _rotateInProgress; 
        bool _rotateEnd; 
        struct Coordinate3D<geo::Radians, double> { 
            struct Unit<geo::RadianUnitDescription, double> { 
                double _value; 
            } latitude; 
            struct Unit<geo::RadianUnitDescription, double> { 
                double _value; 
            } longitude; 
            struct Unit<geo::MeterUnitDescription, double> { 
                double _value; 
            } altitude; 
        } _rotateStartPosition; 
        struct Matrix<int, 2, 1> { 
            int _e[2]; 
        } _rotateCurrentCursor; 
        double _rotateAngle; 
        bool _tiltBegin; 
        bool _tiltInProgress; 
        bool _tiltEnd; 
        struct Coordinate3D<geo::Radians, double> { 
            struct Unit<geo::RadianUnitDescription, double> { 
                double _value; 
            } latitude; 
            struct Unit<geo::RadianUnitDescription, double> { 
                double _value; 
            } longitude; 
            struct Unit<geo::MeterUnitDescription, double> { 
                double _value; 
            } altitude; 
        } _tiltStartPosition; 
        struct Matrix<int, 2, 1> { 
            int _e[2]; 
        } _tiltCurrentCursor; 
        struct Matrix<int, 2, 1> { 
            int _e[2]; 
        } _tiltPreviousCursor; 
        double _tiltAngle; 
        bool _zoomBegin; 
        bool _zoomInProgress; 
        bool _zoomEnd; 
        struct Coordinate3D<geo::Radians, double> { 
            struct Unit<geo::RadianUnitDescription, double> { 
                double _value; 
            } latitude; 
            struct Unit<geo::RadianUnitDescription, double> { 
                double _value; 
            } longitude; 
            struct Unit<geo::MeterUnitDescription, double> { 
                double _value; 
            } altitude; 
        } _zoomStartPosition; 
        struct Matrix<int, 2, 1> { 
            int _e[2]; 
        } _zoomCurrentCursor; 
        double _zoomFactor; 
        double _zoomStartDistance; 
        bool _zoomRotateToNorth; 
        bool _useTiltLimit; 
        int _tiltLimitMode; 
        bool _tiltLimitPushDownEnabled; 
        bool _tiltLimitTransferInProgress; 
        bool _tiltLimitPushDown; 
        double _startPushDownTilt; 
        double _tiltLimitTransferFraction; 
        double _startTiltLimitTilt; 
        struct Geocentric<double> { 
            double _e[3]; 
        } _startTiltLimitPosition; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _startTiltLimitDirection; 
        double _fullZoomTiltLimitFactor; 
        struct Box<double, 2> { 
            struct Matrix<double, 2, 1> { 
                double _e[2]; 
            } _minimum; 
            struct Matrix<double, 2, 1> { 
                double _e[2]; 
            } _maximum; 
        } _singleRestriction; 
        struct Box<double, 2> { 
            struct Matrix<double, 2, 1> { 
                double _e[2]; 
            } _minimum; 
            struct Matrix<double, 2, 1> { 
                double _e[2]; 
            } _maximum; 
        } _westOfDatelineRestriction; 
        struct Box<double, 2> { 
            struct Matrix<double, 2, 1> { 
                double _e[2]; 
            } _minimum; 
            struct Matrix<double, 2, 1> { 
                double _e[2]; 
            } _maximum; 
        } _eastOfDatelineRestriction; 
    }  _cameraManager;
    bool  _couldEnter3DMode;
    double  _currentDoublePanPitch;
    double  _currentZoomLevel;
    void * _globeView;
    bool  _isPitching;
    bool  _isRotating;
    double  _lastRotation;
    double  _maxZoomLevel;
    double  _minZoomLevel;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panLastScreenPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panStartScreenPoint;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    bool  _tourShouldResumeWhenDoneGesturing;
    bool  _wasPitched;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) void*globeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool tourShouldResumeWhenDoneGesturing;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { double x1; double x2; })_centerCoordinateForMapRegion:(id)arg1;
- (double)_fovAdjustment;
- (void)_updateCanEnter3DMode;
- (void)_updateIsPitched;
- (void)adjustLoadingForAnimation:(float)arg1 progressFactor:(float)arg2;
- (double)altitude;
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(id /* block */)arg2 cursor:(struct Matrix<int, 2, 1> { int x1[2]; })arg3 stepHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)animateToRestriction:(id)arg1 duration:(double)arg2 timingFunction:(id /* block */)arg3;
- (struct Geocentric<double> { double x1[3]; })cameraPosition;
- (bool)canEnter3DMode;
- (struct { double x1; double x2; })centerCoordinate;
- (id /* block */)createMoveToZoomOutZoomInFrameFunction:(struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<geo::RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<geo::MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<geo::MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<geo::RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<geo::RadianUnitDescription, double> { double x_5_1_1; } x5; })arg1 toLatLon:(struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<geo::RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<geo::MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<geo::MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<geo::RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<geo::RadianUnitDescription, double> { double x_5_1_1; } x5; })arg2;
- (double)currentZoomLevel;
- (double)distanceFromCenterCoordinate;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (double)earthRadiusAt:(double)arg1;
- (void)enter3DMode;
- (void)exit3DMode;
- (void)flyoverTourAnimation:(id)arg1 animateToStart:(bool)arg2 labelChanged:(id /* block */)arg3 stateChange:(id /* block */)arg4;
- (double)geocAngleBetween:(struct { double x1; double x2; })arg1 andCoordinate:(struct { double x1; double x2; })arg2;
- (void*)globeView;
- (double)greatCircleMidPointLatitude:(double)arg1 fromLongitude:(double)arg2 toLongitude:(double)arg3;
- (double)heading;
- (id)initWithTaskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg1 mapDataAccess:(void*)arg2 animationRunner:(struct AnimationRunner { struct MapEngine {} *x1; }*)arg3 runLoopController:(struct RunLoopController { struct MapEngine {} *x1; long long x2; }*)arg4 cameraDelegate:(id)arg5;
- (void)interruptFlyoverTourAnimation;
- (bool)isFlyoverTourStarted;
- (bool)isFullyPitched;
- (bool)isPitched;
- (id)mapRegion;
- (id)mapRegionIgnoringEdgeInsets;
- (double)maxPitch;
- (double)maximumZoomLevel;
- (double)minPitch;
- (double)minimumZoomLevel;
- (void)moveTo:(struct { double x1; double x2; })arg1 height:(double)arg2 useHeight:(bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(id /* block */)arg8 completion:(id /* block */)arg9;
- (void)moveTo:(struct { double x1; double x2; })arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)moveToZoomOutZoomInTransition:(struct { double x1; double x2; })arg1 height:(double)arg2 useHeight:(bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(id /* block */)arg8 completion:(id /* block */)arg9;
- (void)panWithOffset:(struct CGPoint { double x1; double x2; })arg1 relativeToScreenPoint:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3 duration:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)pauseFlyoverTourAnimation;
- (double)pitch;
- (void)pitch:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (double)presentationYaw;
- (void)resumeFlyoverTourAnimation;
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)rotateTo:(double)arg1 animated:(bool)arg2;
- (void)setCamera:(struct shared_ptr<gdc::Camera> { struct Camera {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setCenterCoordinate3D:(struct { double x1; double x2; double x3; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)setCenterCoordinateDistanceRange:(struct { double x1; double x2; bool x3; })arg1 duration:(double)arg2 timingFunction:(id /* block */)arg3;
- (void)setCurrentZoomLevel:(double)arg1;
- (void)setGesturing:(bool)arg1;
- (void)setGlobeView:(void*)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)setMaxZoomLevel:(double)arg1;
- (void)setMinZoomLevel:(double)arg1;
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(id /* block */)arg3;
- (void)setTourShouldResumeWhenDoneGesturing:(bool)arg1;
- (void)setYaw:(double)arg1 animated:(bool)arg2;
- (float)slowDownFactorFromLoadProgress;
- (bool)snapMapIfNecessary:(bool)arg1;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3 duration:(double)arg4 timingFunction:(id /* block */)arg5;
- (void)stopFlyoverTourAnimation;
- (void)stopGlobeAnimations;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)tapZoom:(struct CGPoint { double x1; double x2; })arg1 levels:(double)arg2 completionHandler:(id /* block */)arg3;
- (long long)tileSize;
- (void)tiltTo:(double)arg1 animated:(bool)arg2 exaggerate:(bool)arg3;
- (double)topDownMinimumZoomLevel;
- (bool)tourShouldResumeWhenDoneGesturing;
- (void)updateCameraManager;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updateState;
- (double)widestLatitudeForMapRegion:(id)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (double)zoomForMapRegion:(id)arg1;
- (void)zoomToDistance:(struct CGPoint { double x1; double x2; })arg1 distance:(double)arg2 time:(double)arg3;
- (void)zoomToDistance:(struct CGPoint { double x1; double x2; })arg1 distance:(double)arg2 time:(double)arg3 completionHandler:(id /* block */)arg4;

@end
