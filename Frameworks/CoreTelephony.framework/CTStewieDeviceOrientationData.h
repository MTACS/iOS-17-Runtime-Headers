
@interface CTStewieDeviceOrientationData : NSObject <NSCopying, NSSecureCoding> {
    bool  _isDeviceStationary;
    bool  _targetLocked;
    NSDate * _timestamp;
    long long  _x;
}

@property (nonatomic) bool isDeviceStationary;
@property (nonatomic) bool targetLocked;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic) long long x;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDeviceStationary;
- (bool)isEqual:(id)arg1;
- (void)setIsDeviceStationary:(bool)arg1;
- (void)setTargetLocked:(bool)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setX:(long long)arg1;
- (bool)targetLocked;
- (id)timestamp;
- (long long)x;

@end
