
@interface CLBeacon : NSObject <NSCopying, NSSecureCoding> {
    CLBeaconInternal * _internal;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly) double accuracy;
@property (nonatomic, readonly, copy) NSNumber *major;
@property (nonatomic, readonly, copy) NSNumber *minor;
@property (nonatomic, readonly) long long proximity;
@property (nonatomic, readonly, copy) NSUUID *proximityUUID;
@property (nonatomic, readonly) long long rssi;
@property (nonatomic, readonly, copy) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (id)UUID;
- (double)accuracy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(long long)arg4 accuracy:(double)arg5 rssi:(long long)arg6;
- (id)initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(long long)arg4 accuracy:(double)arg5 rssi:(long long)arg6 timestamp:(double)arg7;
- (id)major;
- (id)minor;
- (long long)proximity;
- (id)proximityUUID;
- (int)referenceFrame;
- (long long)rssi;
- (void)setReferenceFrame:(int)arg1;
- (id)timestamp;

@end
