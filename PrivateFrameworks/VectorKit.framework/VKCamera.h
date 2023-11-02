
@interface VKCamera : NSObject {
    double  _aspectRatio;
    double  _canonicalPitch;
    double  _distanceToGroundAndFarClipPlaneIntersection;
    double  _far;
    VKFootprint * _footprint;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _forward;
    double  _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
    struct { 
        bool orthographic; 
        double width; 
        double height; 
        double near; 
        double far; 
        double horizontalOffset; 
    }  _frustum;
    double  _height;
    double  _horizontalOffset;
    struct optional<double> { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[8]; 
            double type; 
        } _value; 
    }  _maxDistanceToGroundRestriction;
    double  _maxFarClipDistance;
    double  _maxHeight;
    double  _maxHeightNoPitch;
    double  _maxPitch;
    struct optional<double> { 
        bool _hasValue; 
        union ValueUnion { 
            unsigned char data[8]; 
            double type; 
        } _value; 
    }  _minDistanceToGroundRestriction;
    double  _minHeight;
    double  _ndcZNear;
    double  _near;
    bool  _needsUpdate;
    VKCameraRegionRestriction * _regionRestriction;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _right;
    struct RunLoopController { struct MapEngine {} *x1; long long x2; } * _runLoopController;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _scaledProjectionMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _scaledViewMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _scaledViewProjectionMatrix;
    double  _screenHeightOfGroundAndFarClipPlaneIntersection;
    double  _tanHalfHorizFOV;
    double  _tanHalfVerticalFOV;
    double  _terrainHeight;
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
    }  _transform;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _unscaledProjectionMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _unscaledViewMatrix;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _up;
    bool  _updating;
    struct Unit<geo::RadianUnitDescription, double> { 
        double _value; 
    }  _verticalFieldOfView;
    VKViewVolume * _viewVolume;
    double  _width;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    }  _worldMatrix;
}

@property (nonatomic) double aspectRatio;
@property (nonatomic) /* Warning: unhandled struct encoding: '{VKCameraState={RigidTransform<double' */ struct  cameraState; /* unknown property attribute:  double>=d}d} */
@property (nonatomic) double canonicalPitch;
@property (nonatomic, readonly) double distanceToGroundAndFarClipPlaneIntersection;
@property (nonatomic, readonly) double farClipDistance;
@property (nonatomic, readonly) VKFootprint *footprint;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  forwardVector; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic) double fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
@property (nonatomic, readonly) struct { bool x1; double x2; double x3; double x4; double x5; double x6; } frustum;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  groundPoint; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Unit<geo::RadianUnitDescription' */ struct  horizontalFieldOfView; /* unknown property attribute:  double>=d} */
@property (nonatomic) double horizontalOffset;
@property (nonatomic) struct optional<double> { bool x1; union ValueUnion { unsigned char x_2_1_1[8]; double x_2_1_2; } x2; } maxDistanceToGroundRestriction;
@property (nonatomic) double maxHeight;
@property (nonatomic) double maxHeightNoPitch;
@property (nonatomic) double maxPitch;
@property (nonatomic) struct optional<double> { bool x1; union ValueUnion { unsigned char x_2_1_1[8]; double x_2_1_2; } x2; } minDistanceToGroundRestriction;
@property (nonatomic) double minHeight;
@property (nonatomic) double ndcZNear;
@property (nonatomic, readonly) double nearClipDistance;
@property (nonatomic) const void*orientation;
@property (nonatomic, readonly) double pitch;
@property (nonatomic) const void*position;
@property (nonatomic, retain) VKCameraRegionRestriction *regionRestriction;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  rightVector; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic, readonly) const void*scaledProjectionMatrix;
@property (nonatomic, readonly) const void*scaledViewMatrix;
@property (nonatomic, readonly) const void*scaledViewProjectionMatrix;
@property (nonatomic, readonly) double screenHeightOfGroundAndFarClipPlaneIntersection;
@property (nonatomic, readonly) double tanHalfHorizFOV;
@property (nonatomic, readonly) double tanHalfVerticalFOV;
@property (nonatomic) double terrainHeight;
@property (nonatomic, readonly) const void*unscaledProjectionMatrix;
@property (nonatomic, readonly) const void*unscaledViewMatrix;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  upVector; /* unknown property attribute:  1>=[3d]} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{Unit<geo::RadianUnitDescription' */ struct  verticalFieldOfView; /* unknown property attribute:  double>=d} */
@property (nonatomic, readonly) VKViewVolume *viewVolume;
@property (nonatomic, readonly) double yaw;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setPosition:(const void*)arg1;
- (void)adjustClipPlanes;
- (id /* block */)annotationCoordinateTest;
- (id /* block */)annotationRectTest;
- (double)aspectRatio;
- (struct CameraFrame<geo::Radians, double> { struct Coordinate3D<geo::Radians, double> { struct Unit<geo::RadianUnitDescription, double> { double x_1_2_1; } x_1_1_1; struct Unit<geo::RadianUnitDescription, double> { double x_2_2_1; } x_1_1_2; struct Unit<geo::MeterUnitDescription, double> { double x_3_2_1; } x_1_1_3; } x1; struct Unit<geo::MeterUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::RadianUnitDescription, double> { double x_3_1_1; } x3; struct Unit<geo::RadianUnitDescription, double> { double x_4_1_1; } x4; struct Unit<geo::RadianUnitDescription, double> { double x_5_1_1; } x5; })cameraFrame:(bool)arg1;
- (struct VKCameraState { struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_1_1_1; struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_3_1[3]; } x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; struct Unit<geo::RadianUnitDescription, double> { double x_3_1_1; } x3; double x4; })cameraState;
- (double)canonicalPitch;
- (double)depthForViewWidth:(double)arg1;
- (id)description;
- (id)descriptionDictionaryRepresentation;
- (id)detailedDescription;
- (double)displayZoomLevel;
- (double)distanceToGroundAndFarClipPlaneIntersection;
- (double)farClipDistance;
- (id)footprint;
- (struct Matrix<double, 3, 1> { double x1[3]; })forwardVector;
- (double)fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
- (struct { bool x1; double x2; double x3; double x4; double x5; double x6; })frustum;
- (struct Matrix<double, 3, 1> { double x1[3]; })groundPlaneIntersectionPoint;
- (struct Matrix<double, 3, 1> { double x1[3]; })groundPoint;
- (struct optional<gm::Matrix<double, 3, 1>> { bool x1; union ValueUnion { unsigned char x_2_1_1[24]; struct Matrix<double, 3, 1> { double x_2_2_1[3]; } x_2_1_2; } x2; })groundPointFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct optional<gm::Matrix<double, 3, 1>> { bool x1; union ValueUnion { unsigned char x_2_1_1[24]; struct Matrix<double, 3, 1> { double x_2_2_1[3]; } x_2_1_2; } x2; })groundPointFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1 atGroundLevel:(double)arg2;
- (struct Unit<geo::RadianUnitDescription, double> { double x1; })horizontalFieldOfView;
- (double)horizontalOffset;
- (id)initWithRunLoopController:(struct RunLoopController { struct MapEngine {} *x1; long long x2; }*)arg1;
- (struct optional<double> { bool x1; union ValueUnion { unsigned char x_2_1_1[8]; double x_2_1_2; } x2; })maxDistanceToGroundRestriction;
- (double)maxHeight;
- (double)maxHeightNoPitch;
- (double)maxPitch;
- (struct Mercator3<double> { double x1[3]; })mercatorPosition;
- (struct optional<double> { bool x1; union ValueUnion { unsigned char x_2_1_1[8]; double x_2_1_2; } x2; })minDistanceToGroundRestriction;
- (double)minHeight;
- (double)ndcZNear;
- (double)nearClipDistance;
- (const void*)orientation;
- (double)pitch;
- (const void*)position;
- (id)regionRestriction;
- (struct Matrix<double, 3, 1> { double x1[3]; })rightVector;
- (const void*)scaledProjectionMatrix;
- (const void*)scaledViewMatrix;
- (const void*)scaledViewProjectionMatrix;
- (double)screenHeightOfGroundAndFarClipPlaneIntersection;
- (struct CGPoint { double x1; double x2; })screenPointFromGroundPoint:(const void*)arg1;
- (void)setAspectRatio:(double)arg1;
- (void)setCameraState:(struct VKCameraState { struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_1_1_1; struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_3_1[3]; } x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; struct Unit<geo::RadianUnitDescription, double> { double x_3_1_1; } x3; double x4; })arg1;
- (void)setCanonicalPitch:(double)arg1;
- (void)setFractionOfScreenAboveFarClipPlaneAtCanonicalPitch:(double)arg1;
- (void)setHorizontalOffset:(double)arg1;
- (void)setMaxDistanceToGroundRestriction:(struct optional<double> { bool x1; union ValueUnion { unsigned char x_2_1_1[8]; double x_2_1_2; } x2; })arg1;
- (void)setMaxHeight:(double)arg1;
- (void)setMaxHeightNoPitch:(double)arg1;
- (void)setMaxPitch:(double)arg1;
- (void)setMercatorPosition:(const void*)arg1;
- (void)setMinDistanceToGroundRestriction:(struct optional<double> { bool x1; union ValueUnion { unsigned char x_2_1_1[8]; double x_2_1_2; } x2; })arg1;
- (void)setMinHeight:(double)arg1;
- (void)setNdcZNear:(double)arg1;
- (void)setNeedsUpdate;
- (void)setOrientation:(const void*)arg1;
- (void)setPosition:(const void*)arg1;
- (void)setRegionRestriction:(id)arg1;
- (void)setTerrainHeight:(double)arg1;
- (void)setVerticalFieldOfView:(struct Unit<geo::RadianUnitDescription, double> { double x1; })arg1;
- (double)tanHalfHorizFOV;
- (double)tanHalfVerticalFOV;
- (double)terrainHeight;
- (const void*)unscaledProjectionMatrix;
- (const void*)unscaledViewMatrix;
- (struct Matrix<double, 3, 1> { double x1[3]; })upVector;
- (void)updateCamera:(struct shared_ptr<gdc::Camera> { struct Camera {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)updateIfNeeded;
- (struct Unit<geo::RadianUnitDescription, double> { double x1; })verticalFieldOfView;
- (struct View<double> { struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_1_1_1; struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_3_1[3]; } x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct Matrix<double, 4, 4> { double x_2_1_1[16]; } x2; struct Matrix<double, 4, 4> { double x_3_1_1[16]; } x3; struct Matrix<double, 4, 4> { double x_4_1_1[16]; } x4; double x5; double x6; struct ViewSize { unsigned short x_7_1_1; unsigned short x_7_1_2; } x7; int x8; })view:(struct ViewSize { unsigned short x1; unsigned short x2; })arg1;
- (id)viewVolume;
- (double)widthOfViewAtDepth:(double)arg1;
- (double)yaw;
- (float)zoomAtCentrePoint;
- (float)zoomAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
