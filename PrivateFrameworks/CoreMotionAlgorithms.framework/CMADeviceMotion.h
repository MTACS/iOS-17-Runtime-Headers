
@interface CMADeviceMotion : NSObject {
    struct { 
        double x; 
        double y; 
        double z; 
    }  _acceleration;
    struct { 
        double x; 
        double y; 
        double z; 
        double w; 
    }  _quaternion;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _rotationRate;
    double  _timestamp;
}

@property (nonatomic) struct { double x1; double x2; double x3; } acceleration;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; } quaternion;
@property (nonatomic) struct { double x1; double x2; double x3; } rotationRate;
@property (nonatomic) double timestamp;

- (struct { double x1; double x2; double x3; })acceleration;
- (struct { double x1; double x2; double x3; double x4; })quaternion;
- (struct { double x1; double x2; double x3; })rotationRate;
- (void)setAcceleration:(struct { double x1; double x2; double x3; })arg1;
- (void)setQuaternion:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setRotationRate:(struct { double x1; double x2; double x3; })arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
