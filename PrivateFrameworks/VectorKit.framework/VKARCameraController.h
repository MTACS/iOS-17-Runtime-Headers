
@interface VKARCameraController : VKScreenCameraController <VKGesturingCameraController> {
    double  _altitudeOffset;
    struct Quaternion<double> { 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _imaginary; 
        double _scalar; 
    }  _arOrientation;
    struct RigidTransform<double, double> { 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _translation; 
        struct Quaternion<double> { 
            struct Matrix<double, 3, 1> { 
                double _e[3]; 
            } _imaginary; 
            double _scalar; 
        } _rotation; 
    }  _arTransform;
    struct RigidTransform<double, double> { 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _translation; 
        struct Quaternion<double> { 
            struct Matrix<double, 3, 1> { 
                double _e[3]; 
            } _imaginary; 
            double _scalar; 
        } _rotation; 
    }  _baseTransform;
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
    struct RigidTransform<double, double> { 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _translation; 
        struct Quaternion<double> { 
            struct Matrix<double, 3, 1> { 
                double _e[3]; 
            } _imaginary; 
            double _scalar; 
        } _rotation; 
    }  _currentARTransform;
    struct Coordinate2D<geo::Radians, double> { 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } latitude; 
        struct Unit<geo::RadianUnitDescription, double> { 
            double _value; 
        } longitude; 
    }  _currentCoordinate;
    double  _currentZoomLevel;
    struct Unit<geo::DegreeUnitDescription, double> { 
        double _value; 
    }  _fieldOfView;
    struct Unit<geo::RadianUnitDescription, double> { 
        double _value; 
    }  _fovy;
    void * _globeView;
    double  _height;
    long long  _interfaceOrientation;
    struct Quaternion<double> { 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _imaginary; 
        double _scalar; 
    }  _interfaceOrientationRotation;
    struct RigidTransform<double, double> { 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _translation; 
        struct Quaternion<double> { 
            struct Matrix<double, 3, 1> { 
                double _e[3]; 
            } _imaginary; 
            double _scalar; 
        } _rotation; 
    }  _lastARTransform;
    void * _mapEngine;
    double  _maxZoomLevel;
    struct RigidTransform<double, double> { 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } _translation; 
        struct Quaternion<double> { 
            struct Matrix<double, 3, 1> { 
                double _e[3]; 
            } _imaginary; 
            double _scalar; 
        } _rotation; 
    }  _offsetTransform;
    bool  _overrideARFieldOfView;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    VKTimedAnimation * _transitionAnimation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) /* Warning: unhandled struct encoding: '{Unit<geo::DegreeUnitDescription' */ struct  fieldOfView; /* unknown property attribute:  double>=d} */
@property (nonatomic) void*globeView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float heightScale;
@property (nonatomic) void*mapEngine;
@property (nonatomic) /* Warning: unhandled struct encoding: '{RigidTransform<double' */ struct  offsetTransform; /* unknown property attribute:  1>=[3d]}d}} */
@property (nonatomic) bool overrideARFieldOfView;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_fovAdjustment;
- (struct Matrix<double, 3, 1> { double x1[3]; })_intersectAndResolveWorldCollision:(const void*)arg1;
- (void)_setupPounceAnimation:(const void*)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double x_1_1_1[3]; } x1; struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_2_1_1; double x_2_1_2; } x2; })_transformFromARCamera:(id)arg1;
- (void)_updateARContext;
- (void)_updateBaseTransform;
- (double)altitude;
- (struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double x_1_1_1[3]; } x1; struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_2_1_1; double x_2_1_2; } x2; })arCameraTransform;
- (void)arSessionWasInterrupted:(unsigned long long)arg1;
- (struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<geo::RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<geo::MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<geo::MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<geo::RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<geo::RadianUnitDescription, double> { double x_5_1_1; } x5; })cameraFrame;
- (struct Geocentric<double> { double x1[3]; })cameraPosition;
- (struct { double x1; double x2; })centerCoordinate;
- (double)currentZoomLevel;
- (void)dealloc;
- (double)distanceFromCenterCoordinate;
- (struct Unit<geo::DegreeUnitDescription, double> { double x1; })fieldOfView;
- (void*)globeView;
- (double)heading;
- (float)heightScale;
- (id)initWithTaskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg1 mapDataAccess:(struct MapDataAccess { }*)arg2 animationRunner:(struct AnimationRunner { struct MapEngine {} *x1; }*)arg3 runLoopController:(struct RunLoopController { struct MapEngine {} *x1; long long x2; }*)arg4 cameraDelegate:(id)arg5;
- (bool)isFullyPitched;
- (bool)isPitched;
- (void*)mapEngine;
- (id)mapRegion;
- (id)mapRegionIgnoringEdgeInsets;
- (double)maxPitch;
- (double)maximumZoomLevel;
- (double)minPitch;
- (double)minimumZoomLevel;
- (struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double x_1_1_1[3]; } x1; struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_2_1_1; double x_2_1_2; } x2; })offsetTransform;
- (bool)overrideARFieldOfView;
- (double)pitch;
- (double)presentationYaw;
- (void)setCamera:(struct shared_ptr<gdc::Camera> { struct Camera {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setCurrentZoomLevel:(double)arg1;
- (void)setFieldOfView:(struct Unit<geo::DegreeUnitDescription, double> { double x1; })arg1;
- (void)setGlobeView:(void*)arg1;
- (void)setMapEngine:(void*)arg1;
- (void)setMaxZoomLevel:(double)arg1;
- (void)setOffsetTransform:(struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double x_1_1_1[3]; } x1; struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOverrideARFieldOfView:(bool)arg1;
- (void)setYaw:(double)arg1 animated:(bool)arg2;
- (long long)tileSize;
- (double)topDownMinimumZoomLevel;
- (void)trasitionToARModeAtCoordinate:(struct { double x1; double x2; })arg1 withDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)trasitionToARModeFromCameraFrame:(const void*)arg1 withDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)updateCameraFrameFromARTransform;
- (void)updateGlobeFromCamera;
- (void)updateWithARSession:(id)arg1;
- (void)updateWithTimestamp:(double)arg1 withContext:(void*)arg2;

@end
