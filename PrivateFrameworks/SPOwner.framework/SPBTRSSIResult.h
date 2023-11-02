
@interface SPBTRSSIResult : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _beaconIdentifier;
    long long  _bucket;
    long long  _rssi;
    NSDate * _timestamp;
}

@property (nonatomic, readonly, copy) NSUUID *beaconIdentifier;
@property (nonatomic, readonly) long long bucket;
@property (nonatomic, readonly) long long rssi;
@property (nonatomic, readonly, copy) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)beaconIdentifier;
- (long long)bucket;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBeaconIdentifier:(id)arg1 timestamp:(id)arg2 bucket:(long long)arg3 rssi:(long long)arg4;
- (id)initWithCoder:(id)arg1;
- (long long)rssi;
- (id)timestamp;

@end
