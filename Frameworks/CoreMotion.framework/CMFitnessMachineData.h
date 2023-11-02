
@interface CMFitnessMachineData : NSObject <NSCopying, NSSecureCoding> {
    NSString * _deviceIdentifier;
    double  _elapsedTime;
    int  _externalFitnessType;
    double  _inclination;
    double  _instantaneousCadence;
    double  _instantaneousPower;
    double  _instantaneousSpeed;
    NSString * _manufacturer;
    NSString * _model;
    double  _resistanceLevel;
    double  _totalDistance;
    double  _totalElevationAscended;
    double  _totalEnergy;
    long long  _totalFloorsClimbed;
    long long  _totalStrideCount;
    long long  _totalStrokeCount;
    double  fTimestamp;
}

@property (nonatomic) NSString *deviceIdentifier;
@property (nonatomic) double elapsedTime;
@property (nonatomic) int externalFitnessType;
@property (nonatomic) double inclination;
@property (nonatomic) double instantaneousCadence;
@property (nonatomic) double instantaneousPower;
@property (nonatomic) double instantaneousSpeed;
@property (nonatomic) NSString *manufacturer;
@property (nonatomic) NSString *model;
@property (nonatomic) double resistanceLevel;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic) double totalDistance;
@property (nonatomic) double totalElevationAscended;
@property (nonatomic) double totalEnergy;
@property (nonatomic) long long totalFloorsClimbed;
@property (nonatomic) long long totalStrideCount;
@property (nonatomic) long long totalStrokeCount;

+ (bool)isAvailable;
+ (bool)supportsSecureCoding;

- (void)convertToCLFitnessMachineData:(struct _CLFitnessMachineData { double x1; double x2; double x3; double x4; double x5; long long x6; long long x7; long long x8; double x9; double x10; int x11; double x12; double x13; int x14; double x15; double x16; int x17; double x18; double x19; double x20; int x21; bool x22; }*)arg1 deviceId:(int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (double)elapsedTime;
- (void)encodeWithCoder:(id)arg1;
- (int)externalFitnessType;
- (double)inclination;
- (id)initWithCoder:(id)arg1;
- (id)initWithExernalBikeSensorData:(double)arg1 speed:(double)arg2 cadence:(double)arg3 power:(double)arg4 model:(id)arg5 deviceIdentifier:(id)arg6 manufacturer:(id)arg7 externalFitnessType:(int)arg8;
- (id)initWithTimestamp:(id)arg1;
- (void)initializeVariables;
- (double)instantaneousCadence;
- (double)instantaneousPower;
- (double)instantaneousSpeed;
- (id)manufacturer;
- (id)model;
- (double)resistanceLevel;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setExternalFitnessType:(int)arg1;
- (void)setInclination:(double)arg1;
- (void)setInstantaneousCadence:(double)arg1;
- (void)setInstantaneousPower:(double)arg1;
- (void)setInstantaneousSpeed:(double)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setResistanceLevel:(double)arg1;
- (void)setTotalDistance:(double)arg1;
- (void)setTotalElevationAscended:(double)arg1;
- (void)setTotalEnergy:(double)arg1;
- (void)setTotalFloorsClimbed:(long long)arg1;
- (void)setTotalStrideCount:(long long)arg1;
- (void)setTotalStrokeCount:(long long)arg1;
- (id)timestamp;
- (double)totalDistance;
- (double)totalElevationAscended;
- (double)totalEnergy;
- (long long)totalFloorsClimbed;
- (long long)totalStrideCount;
- (long long)totalStrokeCount;

@end
