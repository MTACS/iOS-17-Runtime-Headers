
@interface NILocation : NSObject <NSCopying, NSSecureCoding> {
    double  _altitude;
    double  _course;
    double  _courseAccuracy;
    double  _ellipsoidalAltitude;
    long long  _floor;
    double  _horizontalAccuracy;
    double  _latitude;
    long long  _locationType;
    double  _longitude;
    long long  _signalEnvironment;
    double  _speed;
    double  _speedAccuracy;
    NSDate * _timestamp;
    double  _verticalAccuracy;
}

@property (nonatomic) double altitude;
@property (nonatomic) double course;
@property (nonatomic) double courseAccuracy;
@property (nonatomic) double ellipsoidalAltitude;
@property (nonatomic) long long floor;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double latitude;
@property (nonatomic) long long locationType;
@property (nonatomic) double longitude;
@property (nonatomic) long long signalEnvironment;
@property (nonatomic) double speed;
@property (nonatomic) double speedAccuracy;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic) double verticalAccuracy;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)altitude;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)course;
- (double)courseAccuracy;
- (id)description;
- (id)descriptionInternal;
- (double)ellipsoidalAltitude;
- (void)encodeWithCoder:(id)arg1;
- (long long)floor;
- (unsigned long long)hash;
- (double)horizontalAccuracy;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 altitude:(double)arg4 ellipsoidalAltitude:(double)arg5 horizontalAccuracy:(double)arg6 verticalAccuracy:(double)arg7 speed:(double)arg8 speedAccuracy:(double)arg9 course:(double)arg10 courseAccuracy:(double)arg11 floor:(long long)arg12 locationType:(long long)arg13 signalEnvironment:(long long)arg14;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (long long)locationType;
- (double)longitude;
- (void)setAltitude:(double)arg1;
- (void)setCourse:(double)arg1;
- (void)setCourseAccuracy:(double)arg1;
- (void)setEllipsoidalAltitude:(double)arg1;
- (void)setFloor:(long long)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLocationType:(long long)arg1;
- (void)setLongitude:(double)arg1;
- (void)setSignalEnvironment:(long long)arg1;
- (void)setSpeed:(double)arg1;
- (void)setSpeedAccuracy:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (long long)signalEnvironment;
- (double)speed;
- (double)speedAccuracy;
- (id)timestamp;
- (double)verticalAccuracy;

@end
