
@interface CMMotionActivity : CMLogItem {
    double  fEndTime;
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
    }  fState;
}

@property (nonatomic, readonly) bool automotive;
@property (nonatomic, readonly) long long confidence;
@property (nonatomic, readonly) bool cycling;
@property (nonatomic, readonly) NSDate *endDate;
@property (getter=isMounted, nonatomic, readonly) bool mounted;
@property (nonatomic, readonly) double mountedProbability;
@property (nonatomic, readonly) bool running;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) bool stationary;
@property (nonatomic, readonly) bool unknown;
@property (getter=isVehicleBTHint, nonatomic, readonly) bool vehicleBTHint;
@property (getter=isVehicleBasebandHint, nonatomic, readonly) bool vehicleBasebandHint;
@property (getter=isVehicleConnected, nonatomic, readonly) bool vehicleConnected;
@property (getter=isVehicleGpsHint, nonatomic, readonly) bool vehicleGpsHint;
@property (getter=isVehicleMotionHint, nonatomic, readonly) bool vehicleMotionHint;
@property (getter=isVehicleWifiHint, nonatomic, readonly) bool vehicleWifiHint;
@property (nonatomic, readonly) bool walking;

+ (bool)supportsSecureCoding;

- (bool)automotive;
- (long long)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)cycling;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x1; int x2; int x3; int x4; int x5; int x6; double x7; bool x8; float x9; double x10; bool x11; int x12; double x13; double x14; int x15; int x16; struct { unsigned int x_17_1_1 : 1; unsigned int x_17_1_2 : 1; unsigned int x_17_1_3 : 1; unsigned int x_17_1_4 : 1; unsigned int x_17_1_5 : 1; } x17; int x18; int x19; double x20; unsigned long long x21; int x22; })arg1;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x1; int x2; int x3; int x4; int x5; int x6; double x7; bool x8; float x9; double x10; bool x11; int x12; double x13; double x14; int x15; int x16; struct { unsigned int x_17_1_1 : 1; unsigned int x_17_1_2 : 1; unsigned int x_17_1_3 : 1; unsigned int x_17_1_4 : 1; unsigned int x_17_1_5 : 1; } x17; int x18; int x19; double x20; unsigned long long x21; int x22; })arg1 endDate:(id)arg2;
- (bool)isMounted;
- (bool)isSameStateAs:(id)arg1;
- (bool)isVehicleBTHint;
- (bool)isVehicleBasebandHint;
- (bool)isVehicleConnected;
- (bool)isVehicleGpsHint;
- (bool)isVehicleMotionHint;
- (bool)isVehicleWifiHint;
- (struct CLMotionActivity { int x1; int x2; int x3; int x4; int x5; int x6; double x7; bool x8; float x9; double x10; bool x11; int x12; double x13; double x14; int x15; int x16; struct { unsigned int x_17_1_1 : 1; unsigned int x_17_1_2 : 1; unsigned int x_17_1_3 : 1; unsigned int x_17_1_4 : 1; unsigned int x_17_1_5 : 1; } x17; int x18; int x19; double x20; unsigned long long x21; int x22; }*)motionActivity;
- (double)mountedProbability;
- (bool)running;
- (id)startDate;
- (bool)stationary;
- (bool)unknown;
- (bool)walking;

@end
