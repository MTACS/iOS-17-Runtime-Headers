
@interface CMActivity : CMLogItem {
    struct CLMotionActivity { 
        int type; 
        int confidence; 
        int source; 
        int mountedState; 
        int mountedConfidence; 
        int conservativeMountedState; 
        double conservativeMountedProbability; 
        bool isStanding; 
        float tilt; 
        double timestamp; 
        bool isVehicleConnected; 
        int exitState; 
        double estExitTime; 
        double startTime; 
        int rawType; 
        int rawConfidence; 
        struct { 
            unsigned int motionHint : 1; 
            unsigned int gpsHint : 1; 
            unsigned int basebandHint : 1; 
            unsigned int wifiHint : 1; 
            unsigned int btHint : 1; 
        } vehicularFlags; 
        int vehicularConfidence; 
        int workoutDetectionType; 
        double workoutDetectionTime; 
        unsigned long long workoutEscalationTime; 
        int typeYouth; 
    }  fActivity;
}

@property (nonatomic, readonly) int confidence;
@property (nonatomic, readonly) bool hasExitedVehicle;
@property (nonatomic, readonly) bool isDriving;
@property (nonatomic, readonly) bool isMoving;
@property (nonatomic, readonly) bool isRunning;
@property (nonatomic, readonly) bool isWalking;
@property (nonatomic, readonly) bool maybeExitingVehicle;

+ (bool)supportsSecureCoding;

- (struct CLMotionActivity { int x1; int x2; int x3; int x4; int x5; int x6; double x7; bool x8; float x9; double x10; bool x11; int x12; double x13; double x14; int x15; int x16; struct { unsigned int x_17_1_1 : 1; unsigned int x_17_1_2 : 1; unsigned int x_17_1_3 : 1; unsigned int x_17_1_4 : 1; unsigned int x_17_1_5 : 1; } x17; int x18; int x19; double x20; unsigned long long x21; int x22; })activity;
- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasExitedVehicle;
- (id)initWithCoder:(id)arg1;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x1; int x2; int x3; int x4; int x5; int x6; double x7; bool x8; float x9; double x10; bool x11; int x12; double x13; double x14; int x15; int x16; struct { unsigned int x_17_1_1 : 1; unsigned int x_17_1_2 : 1; unsigned int x_17_1_3 : 1; unsigned int x_17_1_4 : 1; unsigned int x_17_1_5 : 1; } x17; int x18; int x19; double x20; unsigned long long x21; int x22; })arg1;
- (bool)isDriving;
- (bool)isMoving;
- (bool)isRunning;
- (bool)isWalking;
- (bool)maybeExitingVehicle;

@end
