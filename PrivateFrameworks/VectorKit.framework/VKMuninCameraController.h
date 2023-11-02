
@interface VKMuninCameraController : VKCameraController <VKGesturingCameraController> {
    struct unique_ptr<(anonymous namespace)::BumpAnimator, std::default_delete<(anonymous namespace)::BumpAnimator>>="__ptr_"{__compressed_pair<(anonymous namespace)::BumpAnimator *, std::default_delete<(anonymous namespace)::BumpAnimator>>="__value_"^{BumpAnimator {}  _bumpAnimator;
    float  _cameraOffsetFactor;
    struct unique_ptr<(anonymous namespace)::PathAnimationDescription, std::default_delete<(anonymous namespace)::PathAnimationDescription>>="__ptr_"{__compressed_pair<(anonymous namespace)::PathAnimationDescription *, std::default_delete<(anonymous namespace)::PathAnimationDescription>>="__value_"^{PathAnimationDescription {}  _currentPathAnimation;
    struct optional<(anonymous namespace)::PointSegment>="_hasValue"B"_value"(ValueUnion="data"[3984C]"type"{PointSegment="_startPoint"{PointView="_point"{CollectionPoint="pointId"Q"frame"{RigidTransform<double, float>="_translation"{Matrix<double, 3, 1>="_e"[3d] {}  _currentPointSegment;
    unsigned char  _desiredLOD;
    void * _elevationLogic;
    struct Unit<geo::RadianUnitDescription, double> { 
        double _value; 
    }  _heading;
    double  _lastUpdateTime;
    void * _muninSceneLogic;
    struct _retain_ptr<VKTimedAnimation *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKTimedAnimation *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _offsetAnimation;
    struct _retain_ptr<VKTimedAnimation *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKTimedAnimation *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _panAnimation;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _panLocation;
    struct Spring<double, 1, gdc::SpringType::Angular> { 
        double _position; 
        double _velocity; 
        double _restingPosition; 
        double _kSpring; 
        double _kDamper; 
    }  _panSpring;
    bool  _panStopping;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _panTranslation;
    bool  _panning;
    struct shared_ptr<(anonymous namespace)::PathAnimator>="__ptr_"^{PathAnimator {}  _pathAnimator;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _pathAnimatorMutex;
    struct unique_ptr<(anonymous namespace)::PendingPathAnimation, std::default_delete<(anonymous namespace)::PendingPathAnimation>>="__ptr_"{__compressed_pair<(anonymous namespace)::PendingPathAnimation *, std::default_delete<(anonymous namespace)::PendingPathAnimation>>="__value_"^{PendingPathAnimation {}  _pendingPathAnimation;
    struct _retain_ptr<VKTimedAnimation *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKTimedAnimation *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _pinchResetAnimation;
    struct Unit<geo::RadianUnitDescription, double> { 
        double _value; 
    }  _pinchStartFieldOfView;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _pinchZoomOffset;
    bool  _pinching;
    struct Unit<geo::RadianUnitDescription, double> { 
        double _value; 
    }  _pitch;
    struct shared_ptr<geo::Task> { 
        struct Task {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _preparePath;
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
    }  _previousCameraFrame;
    bool  _restrictWidestFieldOfView;
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
    }  _rigPosition;
    unsigned long long  _tapIndex;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    bool  _virtualParallaxEnabled;
    struct Unit<geo::RadianUnitDescription, double> { 
        double _value; 
    }  _widestFieldOfView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool virtualParallaxEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Unit<geo::RadianUnitDescription, double> { double x1; })_horizontalFieldOfView:(struct Unit<geo::RadianUnitDescription, double> { double x1; })arg1;
- (struct Unit<geo::RadianUnitDescription, double> { double x1; })_pitchForScreenPoint:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;
- (void)_setHeading:(struct Unit<geo::RadianUnitDescription, double> { double x1; })arg1;
- (void)_updateDebugOverlay:(void*)arg1;
- (struct Unit<geo::RadianUnitDescription, double> { double x1; })_verticalFieldOfView:(struct Unit<geo::RadianUnitDescription, double> { double x1; })arg1;
- (double)_zoomRubberBandFov:(double)arg1;
- (double)altitude;
- (void)animatePath:(void*)arg1 animator:(const void*)arg2 preloadedRequiredViews:(void*)arg3 prePruneData:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)animatePath:(void*)arg1 withTarget:(const void*)arg2 lookAtTarget:(bool)arg3 constantLod:(bool)arg4 prePruneData:(bool)arg5 completionHandler:(id /* block */)arg6;
- (bool)canZoomInForTileSize:(long long)arg1;
- (bool)canZoomOutForTileSize:(long long)arg1;
- (bool)cancelPendingMove;
- (bool)cancelPendingMoveExceptBump;
- (struct { double x1; double x2; })centerCoordinate;
- (const void*)currentPoint;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (double)heading;
- (id)initWithTaskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg1 mapDataAccess:(void*)arg2 animationRunner:(struct AnimationRunner { struct MapEngine {} *x1; }*)arg3 runLoopController:(struct RunLoopController { struct MapEngine {} *x1; long long x2; }*)arg4 cameraDelegate:(id)arg5 muninSceneLogic:(void*)arg6 elevationLogic:(void*)arg7;
- (bool)isAnimationsRunning;
- (bool)isAnimationsRunningExceptBump;
- (bool)isBumpAnimationRunning;
- (bool)isPathAnimationRunning;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (void)moveAlongPath:(struct PathAnimationDescription { struct vector<md::mun::CollectionPoint, std::allocator<md::mun::CollectionPoint>> { struct CollectionPoint {} *x_1_1_1; struct CollectionPoint {} *x_1_1_2; struct __compressed_pair<md::mun::CollectionPoint *, std::allocator<md::mun::CollectionPoint>> { struct CollectionPoint {} *x_3_2_1; } x_1_1_3; } x1; struct Geocentric<double> { double x_2_1_1[3]; } x2; struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_3_1_1; struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_3_1[3]; } x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; bool x4; int x5; struct shared_ptr<(anonymous namespace)::PathAnimator>=^{PathAnimator {} x6; struct __shared_weak_count {} *x7; })arg1 tap:(struct TapDescription { struct Intersection { struct Geocentric<double> { double x_1_2_1[3]; } x_1_1_1; struct Matrix<double, 3, 1> { double x_2_2_1[3]; } x_1_1_2; } x1; struct Ray<double, 3> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_2_1_1; struct Matrix<double, 3, 1> { double x_2_2_1[3]; } x_2_1_2; } x2; struct CollectionPoint { unsigned long long x_3_1_1; struct RigidTransform<double, float> { struct Matrix<double, 3, 1> { double x_1_3_1[3]; } x_2_2_1; struct Quaternion<float> { struct Matrix<float, 3, 1> { float x_1_4_1[3]; } x_2_3_1; float x_2_3_2; } x_2_2_2; } x_3_1_2; struct Unit<geo::RadianUnitDescription, float> { float x_3_2_1; } x_3_1_3; struct Mercator3<double> { double x_4_2_1[3]; } x_3_1_4; unsigned long long x_3_1_5; struct small_vector<md::mun::PhotoInfo, 6UL> { struct PhotoInfo {} *x_6_2_1; struct PhotoInfo {} *x_6_2_2; struct PhotoInfo {} *x_6_2_3; unsigned long long x_6_2_4; struct type { unsigned char x_5_3_1[288]; } x_6_2_5[6]; } x_3_1_6; float x_3_1_7; unsigned int x_3_1_8; unsigned short x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; } x3; })arg2 preloadedViews:(struct unordered_map<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>, gdc::LayerDataRequestKeyHash, std::equal_to<gdc::LayerDataRequestKey>, std::allocator<std::pair<const gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>>> { struct __hash_table<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, std::__unordered_map_hasher<gdc::LayerDataRequestKey, std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, gdc::LayerDataRequestKeyHash, std::equal_to<gdc::LayerDataRequestKey>>, std::__unordered_map_equal<gdc::LayerDataRequestKey, std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, std::equal_to<gdc::LayerDataRequestKey>, gdc::LayerDataRequestKeyHash>, std::allocator<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; })arg3 continued:(bool)arg4;
- (bool)moveToPoint:(const void*)arg1 withHeading:(struct Unit<geo::RadianUnitDescription, double> { double x1; })arg2 withPitch:(struct Unit<geo::RadianUnitDescription, double> { double x1; })arg3 animated:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)pathAnimationComplete:(unsigned long long)arg1;
- (void)pathAnimationPrepared:(struct PathAnimationDescription { struct vector<md::mun::CollectionPoint, std::allocator<md::mun::CollectionPoint>> { struct CollectionPoint {} *x_1_1_1; struct CollectionPoint {} *x_1_1_2; struct __compressed_pair<md::mun::CollectionPoint *, std::allocator<md::mun::CollectionPoint>> { struct CollectionPoint {} *x_3_2_1; } x_1_1_3; } x1; struct Geocentric<double> { double x_2_1_1[3]; } x2; struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_3_1_1; struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_3_1[3]; } x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; bool x4; int x5; struct shared_ptr<(anonymous namespace)::PathAnimator>=^{PathAnimator {} x6; struct __shared_weak_count {} *x7; })arg1 tap:(struct TapDescription { struct Intersection { struct Geocentric<double> { double x_1_2_1[3]; } x_1_1_1; struct Matrix<double, 3, 1> { double x_2_2_1[3]; } x_1_1_2; } x1; struct Ray<double, 3> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_2_1_1; struct Matrix<double, 3, 1> { double x_2_2_1[3]; } x_2_1_2; } x2; struct CollectionPoint { unsigned long long x_3_1_1; struct RigidTransform<double, float> { struct Matrix<double, 3, 1> { double x_1_3_1[3]; } x_2_2_1; struct Quaternion<float> { struct Matrix<float, 3, 1> { float x_1_4_1[3]; } x_2_3_1; float x_2_3_2; } x_2_2_2; } x_3_1_2; struct Unit<geo::RadianUnitDescription, float> { float x_3_2_1; } x_3_1_3; struct Mercator3<double> { double x_4_2_1[3]; } x_3_1_4; unsigned long long x_3_1_5; struct small_vector<md::mun::PhotoInfo, 6UL> { struct PhotoInfo {} *x_6_2_1; struct PhotoInfo {} *x_6_2_2; struct PhotoInfo {} *x_6_2_3; unsigned long long x_6_2_4; struct type { unsigned char x_5_3_1[288]; } x_6_2_5[6]; } x_3_1_6; float x_3_1_7; unsigned int x_3_1_8; unsigned short x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; } x3; })arg2 preloadedViews:(struct unordered_map<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>, gdc::LayerDataRequestKeyHash, std::equal_to<gdc::LayerDataRequestKey>, std::allocator<std::pair<const gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>>> { struct __hash_table<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, std::__unordered_map_hasher<gdc::LayerDataRequestKey, std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, gdc::LayerDataRequestKeyHash, std::equal_to<gdc::LayerDataRequestKey>>, std::__unordered_map_equal<gdc::LayerDataRequestKey, std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, std::equal_to<gdc::LayerDataRequestKey>, gdc::LayerDataRequestKeyHash>, std::allocator<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; })arg3;
- (double)pitch;
- (void)resetPathAnimation;
- (void)runBumpAnimation:(const void*)arg1 targetPoint:(const void*)arg2 completionHandler:(id /* block */)arg3;
- (struct Matrix<float, 2, 1> { float x1[2]; })screenPointWithOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)selectLabelMarker:(const void*)arg1 completion:(id /* block */)arg2;
- (void)setCameraFrame:(struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<geo::RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<geo::MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<geo::MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<geo::RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<geo::RadianUnitDescription, double> { double x_5_1_1; } x5; })arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)setCurrentPoint:(const void*)arg1;
- (void)setCurrentPoint:(const void*)arg1 secondaryPoint:(struct optional<md::mun::CollectionPoint> { bool x1; union ValueUnion { unsigned char x_2_1_1[1864]; struct CollectionPoint { unsigned long long x_2_2_1; struct RigidTransform<double, float> { struct Matrix<double, 3, 1> { double x_1_4_1[3]; } x_2_3_1; struct Quaternion<float> { struct Matrix<float, 3, 1> { float x_1_5_1[3]; } x_2_4_1; float x_2_4_2; } x_2_3_2; } x_2_2_2; struct Unit<geo::RadianUnitDescription, float> { float x_3_3_1; } x_2_2_3; struct Mercator3<double> { double x_4_3_1[3]; } x_2_2_4; unsigned long long x_2_2_5; struct small_vector<md::mun::PhotoInfo, 6UL> { struct PhotoInfo {} *x_6_3_1; struct PhotoInfo {} *x_6_3_2; struct PhotoInfo {} *x_6_3_3; unsigned long long x_6_3_4; struct type { unsigned char x_5_4_1[288]; } x_6_3_5[6]; } x_2_2_6; float x_2_2_7; unsigned int x_2_2_8; unsigned short x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; } x_2_1_2; } x2; })arg2;
- (void)setCurrentSegment:(void*)arg1;
- (void)setVirtualParallaxEnabled:(bool)arg1;
- (void)setVkCamera:(id)arg1;
- (void)setWidestFieldOfView:(struct Unit<geo::RadianUnitDescription, double> { double x1; })arg1;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1 panAtStartPoint:(bool)arg2;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopAnimations;
- (void)stopAnimationsExceptBump;
- (void)stopPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)tapAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (void)transferGestureState:(id)arg1;
- (void)updateCurrentPointView:(bool)arg1;
- (void)updatePanWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 degrees:(double)arg2;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 newValue:(double)arg2;
- (void)updateWithTimestamp:(double)arg1 withContext:(void*)arg2;
- (bool)usesVKCamera;
- (bool)virtualParallaxEnabled;
- (void)willStopPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)zoomAnimated:(struct Unit<geo::RadianUnitDescription, double> { double x1; })arg1 completion:(id /* block */)arg2;
- (void)zoomAnimatedWithDuration:(struct Unit<geo::RadianUnitDescription, double> { double x1; })arg1 duration:(float)arg2 completion:(id /* block */)arg3;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;

@end
