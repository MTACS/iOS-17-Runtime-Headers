
@interface VKARWalkingArrivalStoreFront : NSObject {
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _dimensionsInMeters;
    struct OrientedBox<double, 2U, double, double> { 
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
        } _transform; 
        struct Box<double, 2> { 
            struct Matrix<double, 2, 1> { 
                double _e[2]; 
            } _minimum; 
            struct Matrix<double, 2, 1> { 
                double _e[2]; 
            } _maximum; 
        } _bounds; 
    }  _face;
    struct Unit<geo::MeterUnitDescription, double> { 
        double _value; 
    }  _undulation;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Unit<geo::MeterUnitDescription' */ struct  appliedUndulation; /* unknown property attribute:  double>=d} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Coordinate3D<geo::Degrees' */ struct  bottomCenterCoordinate; /* unknown property attribute:  double>=d}} */
@property (nonatomic, readonly) struct Mercator3<double> { double x1[3]; } bottomCenterPoint;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{OrientedBox<double' */ struct  face; /* unknown property attribute:  1>=[2d]}}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Unit<geo::MeterUnitDescription' */ struct  faceHeightInMeters; /* unknown property attribute:  double>=d} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Unit<geo::MeterUnitDescription' */ struct  faceWidthInMeters; /* unknown property attribute:  double>=d} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<double' */ struct  normal; /* unknown property attribute:  1>=[3d]} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Unit<geo::MeterUnitDescription, double> { double x1; })appliedUndulation;
- (struct Coordinate3D<geo::Degrees, double> { struct Unit<geo::DegreeUnitDescription, double> { double x_1_1_1; } x1; struct Unit<geo::DegreeUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::MeterUnitDescription, double> { double x_3_1_1; } x3; })bottomCenterCoordinate;
- (struct Mercator3<double> { double x1[3]; })bottomCenterPoint;
- (id)description;
- (struct OrientedBox<double, 2U, double, double> { struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double x_1_2_1[3]; } x_1_1_1; struct Quaternion<double> { struct Matrix<double, 3, 1> { double x_1_3_1[3]; } x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_2_1[2]; } x_2_1_1; struct Matrix<double, 2, 1> { double x_2_2_1[2]; } x_2_1_2; } x2; })face;
- (struct Unit<geo::MeterUnitDescription, double> { double x1; })faceHeightInMeters;
- (struct Unit<geo::MeterUnitDescription, double> { double x1; })faceWidthInMeters;
- (id)initWithGEOOrientedBox:(id)arg1 undulationProvider:(id /* block */)arg2;
- (id)initWithOrientedRect:(const void*)arg1;
- (id)initWithOrientedRect:(const void*)arg1 undulationProvider:(id /* block */)arg2;
- (id)initWithYaw:(float)arg1 pitch:(float)arg2 roll:(float)arg3 x:(double)arg4 y:(double)arg5 z:(double)arg6 w:(float)arg7 h:(float)arg8 undulationProvider:(id /* block */)arg9;
- (bool)isEqual:(id)arg1;
- (struct Matrix<double, 3, 1> { double x1[3]; })normal;

@end
