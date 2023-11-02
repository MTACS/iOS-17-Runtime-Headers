
@interface VKARWalkingCameraController : VKScreenCameraController <VKGesturingCameraController> {
    void * _arLogic;
    struct Coordinate3D<geo::Degrees, double> { 
        struct Unit<geo::DegreeUnitDescription, double> { 
            double _value; 
        } latitude; 
        struct Unit<geo::DegreeUnitDescription, double> { 
            double _value; 
        } longitude; 
        struct Unit<geo::MeterUnitDescription, double> { 
            double _value; 
        } altitude; 
    }  _coordinate;
    void * _elevationLogic;
    struct EulerAngles { 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } pitch; 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } yaw; 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } roll; 
    }  _eulerAngles;
    struct vector<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>, std::allocator<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent> *, std::allocator<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _gestures;
    struct Unit<geo::DegreeUnitDescription, double> { 
        double _value; 
    }  _heading;
    struct Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> { 
        struct { 
            struct { 
                unsigned int identifier; 
                void *metadata; 
            } key; 
        } _key; 
        double _value; 
        id _listener; 
        struct function<void (double)>="__f_"{__value_func<void (double)>="__buf_"{type="__lx"[24C] {} _delegate; 
        void *__f_; 
    }  _maxClipDistance;
    struct Quaternion<double> { 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _imaginary; 
        double _scalar; 
    }  _rotationCorrectionQuaternion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_buildDebugString:(void*)arg1;
- (void*)_locationProvider;
- (void)_updateClipPlanes;
- (void)_updateDebugOverlay:(void*)arg1;
- (double)altitude;
- (struct { double x1; double x2; })centerCoordinate;
- (double)currentZoomLevel;
- (double)distanceFromCenterCoordinate;
- (double)heading;
- (id)initWithTaskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg1 mapDataAccess:(void*)arg2 animationRunner:(struct AnimationRunner { struct MapEngine {} *x1; }*)arg3 runLoopController:(struct RunLoopController { struct MapEngine {} *x1; long long x2; }*)arg4 cameraDelegate:(id)arg5 arLogic:(void*)arg6 elevationLogic:(void*)arg7;
- (double)maxPitch;
- (double)maximumZoomLevel;
- (double)minPitch;
- (double)minimumZoomLevel;
- (double)pitch;
- (double)presentationHeading;
- (void)pushGesture:(void*)arg1;
- (void)setAltitude:(double)arg1;
- (void)setCamera:(struct shared_ptr<gdc::Camera> { struct Camera {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)setDistanceFromCenterCoordinate:(double)arg1;
- (void)setHeading:(double)arg1;
- (void)setPitch:(double)arg1;
- (void)setVkCamera:(id)arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3 duration:(double)arg4 timingFunction:(id /* block */)arg5;
- (void)stopTrackingAnnotation;
- (double)topDownMinimumZoomLevel;
- (void)updateWithTimestamp:(double)arg1 withContext:(void*)arg2;
- (bool)usesVKCamera;

@end
