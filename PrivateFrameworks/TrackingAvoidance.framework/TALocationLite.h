
@interface TALocationLite : NSObject <TAEventProtocol> {
    double  _altitude;
    double  _course;
    double  _courseAccuracy;
    double  _deltaDistance;
    double  _deltaDistanceAccuracy;
    double  _groundAltitude;
    double  _groundAltitudeUncertainty;
    double  _horizontalAccuracy;
    bool  _isSimulatedOrSpoofed;
    double  _latitude;
    double  _longitude;
    double  _pressure;
    double  _pressureUncertainty;
    double  _speed;
    double  _speedAccuracy;
    NSDate * _timestamp;
    double  _verticalAccuracy;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) double course;
@property (nonatomic, readonly) double courseAccuracy;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double deltaDistance;
@property (nonatomic, readonly) double deltaDistanceAccuracy;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double groundAltitude;
@property (nonatomic, readonly) double groundAltitudeUncertainty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double horizontalAccuracy;
@property (nonatomic, readonly) bool isSimulatedOrSpoofed;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) double pressure;
@property (nonatomic, readonly) double pressureUncertainty;
@property (nonatomic, readonly) double speed;
@property (nonatomic, readonly) double speedAccuracy;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDate *timestamp;
@property (nonatomic, readonly) double verticalAccuracy;

+ (bool)distanceFromLocation:(id)arg1 toLocation:(id)arg2 satisfyNSigma:(unsigned long long)arg3 satisfyMinDistance:(double)arg4;
+ (struct { double x1; double x2; double x3; })estimateSpeedFrom:(id)arg1 to:(id)arg2;
+ (double)residualDistanceFromLocation:(id)arg1 toLocation:(id)arg2 nSigma:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)altitude;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)course;
- (double)courseAccuracy;
- (double)deltaDistance;
- (double)deltaDistanceAccuracy;
- (id)description;
- (id)descriptionDictionary;
- (double)distanceFromLocation:(id)arg1;
- (bool)distanceToLocation:(id)arg1 satisfyNSigma:(unsigned long long)arg2 satisfyMinDistance:(double)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (double)groundAltitude;
- (double)groundAltitudeUncertainty;
- (unsigned long long)hash;
- (double)horizontalAccuracy;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4;
- (id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 altitude:(double)arg5 verticalAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 course:(double)arg9 courseAccuracy:(double)arg10 deltaDistance:(double)arg11 deltaDistanceAccuracy:(double)arg12 groundAltitude:(double)arg13 groundAltitudeUncertainty:(double)arg14 pressure:(double)arg15 pressureUncertainty:(double)arg16 isSimulatedOrSpoofed:(bool)arg17;
- (bool)isEqual:(id)arg1;
- (bool)isSimulatedOrSpoofed;
- (double)latitude;
- (double)longitude;
- (double)pressure;
- (double)pressureUncertainty;
- (double)speed;
- (double)speedAccuracy;
- (id)timestamp;
- (double)verticalAccuracy;

@end
