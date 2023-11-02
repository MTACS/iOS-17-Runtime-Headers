
@interface SPSecureLocation : NSObject <NSCopying, NSSecureCoding> {
    double  _altitude;
    double  _course;
    NSString * _findMyId;
    NSNumber * _floor;
    double  _horizontalAccuracy;
    double  _latitude;
    NSString * _locationLabel;
    double  _longitude;
    long long  _motionActivityState;
    long long  _publishReason;
    double  _speed;
    NSDate * _timestamp;
    double  _verticalAccuracy;
}

@property (nonatomic) double altitude;
@property (nonatomic) double course;
@property (nonatomic, copy) NSString *findMyId;
@property (nonatomic, copy) NSNumber *floor;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double latitude;
@property (nonatomic, copy) NSString *locationLabel;
@property (nonatomic) double longitude;
@property (nonatomic) long long motionActivityState;
@property (nonatomic) long long publishReason;
@property (nonatomic) double speed;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic) double verticalAccuracy;

+ (id)_stringFromMotionState:(long long)arg1;
+ (id)_stringFromPublishReason:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)altitude;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)course;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)findMyId;
- (id)floor;
- (double)horizontalAccuracy;
- (id)initWithCoder:(id)arg1;
- (double)latitude;
- (id)locationLabel;
- (double)longitude;
- (long long)motionActivityState;
- (long long)publishReason;
- (void)setAltitude:(double)arg1;
- (void)setCourse:(double)arg1;
- (void)setFindMyId:(id)arg1;
- (void)setFloor:(id)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setLongitude:(double)arg1;
- (void)setMotionActivityState:(long long)arg1;
- (void)setPublishReason:(long long)arg1;
- (void)setSpeed:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (double)speed;
- (id)timestamp;
- (double)verticalAccuracy;

@end
