
@interface SPObservationLocation : NSObject <NSCopying, NSSecureCoding> {
    double  _altitude;
    double  _course;
    double  _courseAccuracy;
    NSNumber * _floorLevel;
    double  _horizontalAccuracy;
    double  _latitude;
    double  _longitude;
    double  _speed;
    double  _speedAccuracy;
    NSDate * _timestamp;
    double  _verticalAccuracy;
}

@property (nonatomic) double altitude;
@property (nonatomic) double course;
@property (nonatomic) double courseAccuracy;
@property (nonatomic, copy) NSNumber *floorLevel;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
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
- (void)encodeWithCoder:(id)arg1;
- (id)floorLevel;
- (double)horizontalAccuracy;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 altitude:(double)arg5 verticalAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 course:(double)arg9 courseAccuracy:(double)arg10 floorLevel:(id)arg11;
- (id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAcuracy:(double)arg4 altitude:(double)arg5 verticalAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 course:(double)arg9 courseAccuracy:(double)arg10 floorLevel:(id)arg11;
- (double)latitude;
- (double)longitude;
- (void)setAltitude:(double)arg1;
- (void)setCourse:(double)arg1;
- (void)setCourseAccuracy:(double)arg1;
- (void)setFloorLevel:(id)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setSpeed:(double)arg1;
- (void)setSpeedAccuracy:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (double)speed;
- (double)speedAccuracy;
- (id)timestamp;
- (double)verticalAccuracy;

@end
