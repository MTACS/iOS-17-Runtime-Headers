
@interface JTMotionData : NSObject {
    struct { 
        double x; 
        double y; 
        double z; 
        double w; 
    }  _currentAttitude;
    CMMotionManager * _motionManager;
    NSOperationQueue * _motionQueue;
    double  _pitchRadians;
    CMAttitude * _refAttitude;
    double  _rollRadians;
    bool  _started;
    double  _yawRadians;
}

@property (nonatomic) struct { double x1; double x2; double x3; double x4; } currentAttitude;
@property (nonatomic, retain) CMMotionManager *motionManager;
@property (nonatomic, retain) NSOperationQueue *motionQueue;
@property (nonatomic) double pitchRadians;
@property (nonatomic, retain) CMAttitude *refAttitude;
@property (nonatomic) double rollRadians;
@property bool started;
@property (nonatomic) double yawRadians;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (struct { double x1; double x2; double x3; double x4; })currentAttitude;
- (struct { double x1; double x2; double x3; double x4; })currentOrientation;
- (struct { double x1; double x2; double x3; double x4; })getOrientation:(struct { double x1; double x2; double x3; double x4; })arg1;
- (id)init;
- (id)motionManager;
- (id)motionQueue;
- (double)pitchRadians;
- (id)refAttitude;
- (double)rollRadians;
- (void)setCurrentAttitude:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setMotionManager:(id)arg1;
- (void)setMotionQueue:(id)arg1;
- (void)setPitchRadians:(double)arg1;
- (void)setRefAttitude:(id)arg1;
- (void)setRollRadians:(double)arg1;
- (void)setStarted:(bool)arg1;
- (void)setYawRadians:(double)arg1;
- (void)startMotion;
- (bool)started;
- (void)stopMotion;
- (struct { double x1; double x2; double x3; double x4; })syntheticOrientation;
- (double)yawRadians;

@end
