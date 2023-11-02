
@interface CVACLLocation : NSObject {
    double  _altitude;
    double  _course;
    double  _horizontalAccuracy;
    double  _latitude;
    double  _longitude;
    double  _speed;
    double  _timestamp;
    double  _timestampSince1970;
    double  _verticalAccuracy;
}

@property (nonatomic) double altitude;
@property (nonatomic) double course;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double speed;
@property (nonatomic) double timestamp;
@property (nonatomic) double timestampSince1970;
@property (nonatomic) double verticalAccuracy;

- (double)altitude;
- (double)course;
- (id)dictionary;
- (double)horizontalAccuracy;
- (id)initWithCLLocation:(id)arg1 timestamp:(double)arg2;
- (id)initWithDictionary:(id)arg1;
- (double)latitude;
- (double)longitude;
- (void)setAltitude:(double)arg1;
- (void)setCourse:(double)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setSpeed:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTimestampSince1970:(double)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (double)speed;
- (double)timestamp;
- (double)timestampSince1970;
- (double)verticalAccuracy;

@end
