
@interface VKNavCameraController : VKCameraController <VKGesturingCameraController, VKNavContextObserver, VKNavigationCameraController> {
    unsigned char  _alternateFramingSource;
    float  _animationTime;
    VKAttachedNavGestureCameraBehavior * _attachedGestureBehavior;
    struct Unit<geo::MeterUnitDescription, double> { 
        double _value; 
    }  _cameraDistanceFromTarget;
    struct CameraFrame<geo::Radians, double> { 
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
        } _target; 
        struct Unit<geo::MeterUnitDescription, double> { 
            double _value; 
        } _distanceFromTarget; 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } _pitch; 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } _heading; 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } _roll; 
    }  _cameraFrame;
    void * _cameraManager;
    unsigned long long  _cameraMode;
    struct Unit<geo::RadianUnitDescription, double> { 
        double _value; 
    }  _cameraPitch;
    unsigned char  _cameraType;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _clientFramingInsets;
    struct vector<geo::Coordinate3D<geo::Radians, double>, std::allocator<geo::Coordinate3D<geo::Radians, double>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<geo::Coordinate3D<geo::Radians, double> *, std::allocator<geo::Coordinate3D<geo::Radians, double>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _coordinatesToFrame;
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
    }  _cornerCoordinates;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
            struct __rep { 
                union { 
                    struct __long { 
                        char *__data_; 
                        unsigned long long __size_; 
                        unsigned int __cap_ : 63; 
                        unsigned int __is_long_ : 1; 
                    } __l; 
                    struct __short { 
                        BOOL __data_[23]; 
                        unsigned char __padding_[0]; 
                        unsigned int __size_ : 7; 
                        unsigned int __is_long_ : 1; 
                    } __s; 
                    struct __raw { 
                        unsigned long long __words[3]; 
                    } __r; 
                } ; 
            } __value_; 
        } __r_; 
    }  _currentStyleName;
    VKDaVinciGestureCameraController * _davinciGestureCameraController;
    double  _depthNear;
    double  _desiredZoomScale;
    VKDetachedNavGestureCameraBehavior * _detachedGestureBehavior;
    bool  _didNavCameraTransition;
    struct Spring<double, 1, gdc::SpringType::Linear> { 
        double _position; 
        double _velocity; 
        double _restingPosition; 
        double _kSpring; 
        double _kDamper; 
    }  _distanceFromTargetSpring;
    bool  _enableDynamicFrameRate;
    bool  _enablePan;
    bool  _enablePitch;
    bool  _enableRotate;
    bool  _enableZoom;
    double  _farClipPlaneFactor;
    bool  _frameAllGroupedManeuvers;
    double  _framingDistanceAfterManeuver;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _framingEdgeInset;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _framingEdgeInsetProportional;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _framingScreenRect;
    VKGestureCameraBehavior * _gestureBehavior;
    double  _halfPuckSize;
    struct Unit<geo::RadianUnitDescription, double> { 
        double _value; 
    }  _headingDelta;
    struct Unit<geo::RadianUnitDescription, double> { 
        double _value; 
    }  _headingMinDelta;
    struct Spring<double, 1, gdc::SpringType::Angular> { 
        double _position; 
        double _velocity; 
        double _restingPosition; 
        double _kSpring; 
        double _kDamper; 
    }  _headingSpring;
    unsigned char  _headingType;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _idealPuckScreenPosition;
    bool  _ignorePointsBehind;
    double  _ignoreStyleChangeStartTime;
    bool  _isDetached;
    bool  _isElevatedRoute;
    bool  _isIgnoringStyleChange;
    bool  _isTracking;
    struct unique_ptr<md::LabelMetrics, std::default_delete<md::LabelMetrics>> { 
        struct __compressed_pair<md::LabelMetrics *, std::default_delete<md::LabelMetrics>> { 
            struct LabelMetrics {} *__value_; 
        } __ptr_; 
    }  _labelMetrics;
    struct CameraFrame<geo::Radians, double> { 
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
        } _target; 
        struct Unit<geo::MeterUnitDescription, double> { 
            double _value; 
        } _distanceFromTarget; 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } _pitch; 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } _heading; 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } _roll; 
    }  _lastCalculatedCameraFrame;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _lastProjectedPosition;
    double  _lastSARUpdateTime;
    unsigned long long  _lastTargetStyleIdentifier;
    bool  _leftHanded;
    struct { 
        double latitude; 
        double longitude; 
    }  _locationCoordinate;
    unsigned char  _maneuversToFrame;
    double  _maxCameraHeight;
    struct Unit<geo::RadianUnitDescription, double> { 
        double _value; 
    }  _maxCameraPitch;
    double  _maxFramingDistance;
    double  _maxHeightDeltaChangeHorizontal;
    double  _maxHeightDeltaChangeVertical;
    unsigned char  _maxManeuversToFrame;
    double  _maxZoomScale;
    double  _minCameraHeight;
    struct Unit<geo::RadianUnitDescription, double> { 
        double _value; 
    }  _minCameraPitch;
    double  _minHeightDeltaChangeHorizontal;
    double  _minHeightDeltaChangeVertical;
    double  _minZoomScale;
    VKNavContext * _navContext;
    bool  _needsUpdate;
    float  _panReturnDelayTime;
    bool  _panning;
    struct Spring<double, 1, gdc::SpringType::Linear> { 
        double _position; 
        double _velocity; 
        double _restingPosition; 
        double _kSpring; 
        double _kDamper; 
    }  _pitchSpring;
    bool  _pitching;
    struct vector<NavCameraPixelFrameRate, std::allocator<NavCameraPixelFrameRate>> { 
        struct NavCameraPixelFrameRate {} *__begin_; 
        struct NavCameraPixelFrameRate {} *__end_; 
        struct __compressed_pair<NavCameraPixelFrameRate *, std::allocator<NavCameraPixelFrameRate>> { 
            struct NavCameraPixelFrameRate {} *__value_; 
        } __end_cap_; 
    }  _pixelChangeFrameRate;
    struct WindowedSampler<60UL> { 
        double _min; 
        double _max; 
        double _avg; 
        double _sum; 
        struct optional<unsigned long> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[8]; 
                unsigned long long type; 
            } _value; 
        } _idx; 
        struct array<double, 60UL> { 
            double __elems_[60]; 
        } _samples; 
    }  _pixelSamples;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _previousMapEdgeInsets;
    unsigned long long  _previousSearchItemCount;
    double  _previousUpdateTime;
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
    }  _puckCoordinate;
    struct Unit<geo::RadianUnitDescription, double> { 
        double _value; 
    }  _puckCourse;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _puckMovementBoundsMax;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _puckMovementBoundsMin;
    struct Sampler { 
        double _min; 
        double _max; 
        double _avg; 
        double _sum; 
        unsigned long long _count; 
    }  _requesteDisplayRateSampler;
    long long  _requestedDisplayRate;
    bool  _rotating;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinate;
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
    }  _routeFocusCoordinate;
    VKSceneConfiguration * _sceneConfiguration;
    struct shared_ptr<gss::StylesheetQuery<gss::ScenePropertyID>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _sceneQuery;
    VKScreenCanvas<VKInteractiveMap> * _screenCanvas;
    struct Spring<double, 2, gdc::SpringType::Linear> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _position; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _velocity; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _restingPosition; 
        double _kSpring; 
        double _kDamper; 
    }  _screenPositionSpring;
    unsigned char  _secondaryAlternateFramingSource;
    unsigned char  _segmentsToFrame;
    bool  _sentZoomNotification;
    struct Monitorable<md::ConfigValue<GEOConfigKeyBOOL, bool>> { 
        struct { 
            struct { 
                unsigned int identifier; 
                void *metadata; 
            } key; 
        } _key; 
        bool _value; 
        id _listener; 
        struct function<void (bool)>="__f_"{__value_func<void (bool)>="__buf_"{type="__lx"[24C] {} _delegate; 
        void *__f_; 
    }  _showAttributes;
    struct Monitorable<md::ConfigValue<GEOConfigKeyBOOL, bool>> { 
        struct { 
            struct { 
                unsigned int identifier; 
                void *metadata; 
            } key; 
        } _key; 
        bool _value; 
        id _listener; 
        struct function<void (bool)>="__f_"{__value_func<void (bool)>="__buf_"{type="__lx"[24C] {} _delegate; 
        void *__f_; 
    }  _showConsole;
    struct Monitorable<md::ConfigValue<GEOConfigKeyBOOL, bool>> { 
        struct { 
            struct { 
                unsigned int identifier; 
                void *metadata; 
            } key; 
        } _key; 
        bool _value; 
        id _listener; 
        struct function<void (bool)>="__f_"{__value_func<void (bool)>="__buf_"{type="__lx"[24C] {} _delegate; 
        void *__f_; 
    }  _showLegend;
    struct Monitorable<md::ConfigValue<GEOConfigKeyBOOL, bool>> { 
        struct { 
            struct { 
                unsigned int identifier; 
                void *metadata; 
            } key; 
        } _key; 
        bool _value; 
        id _listener; 
        struct function<void (bool)>="__f_"{__value_func<void (bool)>="__buf_"{type="__lx"[24C] {} _delegate; 
        void *__f_; 
    }  _showOverlay;
    struct Monitorable<md::ConfigValue<GEOConfigKeyBOOL, bool>> { 
        struct { 
            struct { 
                unsigned int identifier; 
                void *metadata; 
            } key; 
        } _key; 
        bool _value; 
        id _listener; 
        struct function<void (bool)>="__f_"{__value_func<void (bool)>="__buf_"{type="__lx"[24C] {} _delegate; 
        void *__f_; 
    }  _showProperties;
    VKTimedAnimation * _snapHeadingAnimation;
    VKTimedAnimation * _snapPitchAnimation;
    unsigned char  _styleLegsToFrame;
    unsigned char  _styleManeuversToFrame;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    VKTimedAnimation * _transitionAnimation;
    struct CameraFrame<geo::Radians, double> { 
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
        } _target; 
        struct Unit<geo::MeterUnitDescription, double> { 
            double _value; 
        } _distanceFromTarget; 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } _pitch; 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } _heading; 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } _roll; 
    }  _transitionFrame;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _viewableScreenRect;
    bool  _zooming;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) struct AnimationRunner { struct MapEngine {} *x1; }*animationRunner;
@property (nonatomic) struct { double x1; double x2; } centerCoordinate;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } clientFramingInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double distanceFromCenterCoordinate;
@property (readonly) unsigned long long hash;
@property (nonatomic) double heading;
@property (nonatomic, readonly) bool isFullyPitched;
@property (nonatomic, readonly) bool isPitched;
@property (nonatomic, readonly) bool isRotated;
@property (nonatomic, readonly) void*mapDataAccess;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) GEOMapRegion *mapRegionIgnoringEdgeInsets;
@property (nonatomic, readonly) double maxPitch;
@property (nonatomic, readonly) double minPitch;
@property (nonatomic) double pitch;
@property (nonatomic, readonly) struct RunLoopController { struct MapEngine {} *x1; long long x2; }*runLoopController;
@property (nonatomic) VKSceneConfiguration *sceneConfiguration;
@property (nonatomic) VKScreenCanvas<VKInteractiveMap> *screenCanvas;
@property (readonly) Class superclass;
@property (nonatomic) double zoomScale;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addAdditionalRoutePointsToFrameToList:(void*)arg1;
- (bool)_addStepToFraming:(unsigned long long)arg1 forRoute:(id)arg2;
- (void)_addWaypointToFraming:(id)arg1 forRoute:(id)arg2;
- (double)_calculateMaxPixelChangeAndUpdateCorners;
- (bool)_canZoomIn;
- (bool)_canZoomOut;
- (struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<geo::RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::MeterUnitDescription, double> { double x_3_1_1; } x3; })_coordinateForGeoLocation:(struct { double x1; double x2; double x3; })arg1;
- (float)_currentRoadSignOffset;
- (id)_debugText:(bool)arg1 showNavCameraDebugConsoleAttributes:(bool)arg2 includeSensitiveAttributes:(bool)arg3;
- (id)_detachedGestureController;
- (struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID>> { void *x1; struct __shared_weak_count {} *x2; })_getActiveSceneManager;
- (bool)_hasRunningAnimation;
- (double)_normalizedZoomLevelForDisplayZoomLevel:(double)arg1;
- (void)_setDetached:(bool)arg1;
- (void)_setNavCameraIsDetached:(bool)arg1;
- (void)_setNavCameraTransitionComplete:(bool)arg1;
- (void)_setNeedsUpdate;
- (void)_snapHeading;
- (void)_snapPitch;
- (bool)_springsNeedUpdate;
- (void)_updateCameraLimits;
- (void)_updateClipPlanes;
- (void)_updateDebugOverlay;
- (void)_updateDebugText;
- (void)_updateDidNavCameraTransition;
- (void)_updateForAnimatedEdgeInsets;
- (void)_updateLabelMetrics;
- (void)_updateObserverCouldZoomIn:(bool)arg1 couldZoomOut:(bool)arg2;
- (void)_updateRouteSinuosity;
- (void)_updateSceneQuery;
- (void)_updateSceneStyles:(bool)arg1 updatePitchLimitOnly:(bool)arg2;
- (void)_updateSprings:(double)arg1;
- (void)_updateStyles;
- (void)_updateZoomScaleLimts;
- (double)altitude;
- (void)animateCameraWithDuration:(float)arg1 fromFrame:(const void*)arg2 completionHandler:(id /* block */)arg3;
- (struct Unit<geo::RadianUnitDescription, double> { double x1; })calculateHeading;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })calculateViewableScreenRect;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })calculateViewableScreenRectForEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<geo::RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<geo::MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<geo::MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<geo::RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<geo::RadianUnitDescription, double> { double x_5_1_1; } x5; })cameraFrame;
- (unsigned char)cameraHeadingType;
- (bool)canEnter3DMode;
- (bool)canZoomInForTileSize:(long long)arg1;
- (bool)canZoomOutForTileSize:(long long)arg1;
- (void)canvasDidLayout;
- (struct { double x1; double x2; })centerCoordinate;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })clientFramingInsets;
- (struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<geo::RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<geo::MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<geo::MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<geo::RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<geo::RadianUnitDescription, double> { double x_5_1_1; } x5; })currentCameraFrame;
- (double)currentZoomLevel;
- (void)dealloc;
- (long long)defaultDisplayRate;
- (id)detailedDescription;
- (long long)displayRate;
- (double)distanceFromCenterCoordinate;
- (double)distanceToManeuver:(unsigned long long)arg1;
- (double)heading;
- (float)idealPitchForNormalizedZoomLevel:(float)arg1;
- (id)init;
- (id)initWithTaskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg1 device:(void*)arg2 mapDataAccess:(void*)arg3 animationRunner:(struct AnimationRunner { struct MapEngine {} *x1; }*)arg4 runLoopController:(struct RunLoopController { struct MapEngine {} *x1; long long x2; }*)arg5 cameraDelegate:(id)arg6;
- (bool)isGesturing;
- (bool)isPitchEnabled;
- (bool)isRotateEnabled;
- (struct Unit<geo::RadianUnitDescription, double> { double x1; })maxCameraPitch;
- (float)maxPitchForNormalizedZoomLevel:(float)arg1;
- (double)maxZoomHeight;
- (double)maxZoomScale;
- (float)maximumNormalizedZoomLevel;
- (double)maximumZoomLevel;
- (struct Unit<geo::RadianUnitDescription, double> { double x1; })minCameraPitch;
- (float)minPitchForNormalizedZoomLevel:(float)arg1;
- (double)minZoomHeight;
- (double)minZoomScale;
- (float)minimumNormalizedZoomLevel;
- (double)minimumZoomLevel;
- (void)navContextCameraHeadingOverrideDidChange:(id)arg1;
- (void)navContextStateDidChange:(id)arg1;
- (double)pitch;
- (void)pitchTo:(double)arg1 animated:(bool)arg2;
- (void)projectCoordinate:(struct { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; }*)arg2;
- (struct optional<double> { union { BOOL x_1_1_1; double x_1_1_2; } x1; bool x2; })puckAnimator:(id)arg1 getElevationWithCoordinate:(const void*)arg2;
- (void)puckAnimator:(id)arg1 runAnimation:(id)arg2;
- (void)puckAnimator:(id)arg1 updatedPosition:(const void*)arg2 course:(const void*)arg3;
- (void)puckAnimatorDidStop:(id)arg1;
- (struct Matrix<double, 2, 1> { double x1[2]; })puckScreenPoint;
- (void)resetSpringsToResting;
- (struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<geo::RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<geo::MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<geo::MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<geo::RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<geo::RadianUnitDescription, double> { double x_5_1_1; } x5; })restingCameraFrame;
- (void)returnToPuck;
- (void)returnToTrackingWithDelay:(double)arg1 resetZoom:(bool)arg2;
- (void)rotateTo:(double)arg1 animated:(bool)arg2;
- (struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<geo::RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::MeterUnitDescription, double> { double x_3_1_1; } x3; })routeCoordinateAtDistance:(double)arg1;
- (struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<geo::RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::MeterUnitDescription, double> { double x_3_1_1; } x3; })routeLocationAtDistance:(double)arg1 fromManeuver:(unsigned long long)arg2;
- (id)sceneConfiguration;
- (id)screenCanvas;
- (void)setCamera:(struct shared_ptr<gdc::Camera> { struct Camera {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setCameraFrame:(struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<geo::RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<geo::MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<geo::MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<geo::RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<geo::RadianUnitDescription, double> { double x_5_1_1; } x5; })arg1;
- (void)setClientFramingInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setEdgeInsetsAnimating:(bool)arg1;
- (void)setNavContext:(id)arg1;
- (void)setSceneConfiguration:(id)arg1;
- (void)setScreenCanvas:(id)arg1;
- (void)setVkCamera:(id)arg1;
- (void)setZoomScale:(double)arg1;
- (bool)snapMapIfNecessary:(bool)arg1;
- (void)startIgnoreStyleChangeTimer;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1 panAtStartPoint:(bool)arg2;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startWithPounce:(bool)arg1 startLocation:(struct { double x1; double x2; })arg2 startCourse:(double)arg3 pounceCompletionHandler:(id /* block */)arg4;
- (void)stop;
- (void)stopAnimations;
- (void)stopIgnoreStyleChange;
- (void)stopPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopSnappingAnimations;
- (void)stylesheetDidChange;
- (void)stylesheetDidReload;
- (bool)tapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)tileSize;
- (double)topDownMinimumZoomLevel;
- (void)transferGestureState:(id)arg1;
- (void)updateCameraState;
- (void)updateLocation:(const void*)arg1 andCourse:(const void*)arg2;
- (void)updateManeuversToFrame;
- (void)updatePanWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 degrees:(double)arg2;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)updatePointsToFrame;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 newValue:(double)arg2;
- (void)updateSpringsForFramingCamera;
- (void)updateSpringsForTrackingCamera;
- (void)updateState;
- (void)updateWithTimestamp:(double)arg1 withContext:(void*)arg2;
- (bool)usesVKCamera;
- (bool)wantsTimerTick;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (double)zoomScale;

@end
