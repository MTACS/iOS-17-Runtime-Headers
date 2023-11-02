
@interface CVAPRDevice : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    CVAPRAngleMeasurement * _azimuth;
    CVAPRAngleMeasurement * _elevation;
    double  _mach_continuous_time;
    long long  _measurementNumber;
    double  _measurementTimestamp;
    CVAPRRangeMeasurement * _range;
    long long  _referenceFrame;
    NSNumber * _sessionID;
    double  _timestamp;
    double  _utc_time;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, retain) CVAPRAngleMeasurement *azimuth;
@property (nonatomic, retain) CVAPRAngleMeasurement *elevation;
@property (nonatomic) double mach_continuous_time;
@property (nonatomic) long long measurementNumber;
@property (nonatomic) double measurementTimestamp;
@property (nonatomic, retain) CVAPRRangeMeasurement *range;
@property (nonatomic) long long referenceFrame;
@property (nonatomic, retain) NSNumber *sessionID;
@property (nonatomic) double timestamp;
@property (nonatomic) double utc_time;

+ (id)classes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (void)addTimes;
- (id)azimuth;
- (id)elevation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)mach_continuous_time;
- (long long)measurementNumber;
- (double)measurementTimestamp;
- (id)range;
- (long long)referenceFrame;
- (id)sessionID;
- (void)setAzimuth:(id)arg1;
- (void)setElevation:(id)arg1;
- (void)setMach_continuous_time:(double)arg1;
- (void)setMeasurementNumber:(long long)arg1;
- (void)setMeasurementTimestamp:(double)arg1;
- (void)setRange:(id)arg1;
- (void)setReferenceFrame:(long long)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setUUID:(id)arg1;
- (void)setUtc_time:(double)arg1;
- (double)timestamp;
- (double)utc_time;

@end
