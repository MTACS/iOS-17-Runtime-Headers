
@interface SPBeaconLocation : NSObject <NSCopying, NSSecureCoding> {
    double  _horizontalAccuracy;
    double  _latitude;
    double  _longitude;
    NSString * _source;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) double horizontalAccuracy;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (double)horizontalAccuracy;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 source:(id)arg5;
- (double)latitude;
- (double)longitude;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setSource:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)source;
- (id)timestamp;

@end
