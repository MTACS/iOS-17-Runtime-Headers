
@interface SPCommandKeys : NSObject <NSCopying, NSSecureCoding, SPConnectionToken, SPNearbyToken> {
    SPBeaconingKey * _beaconingKey;
    NSData * _commandKey;
    NSData * _connectionToken;
    NSData * _nearbyToken;
}

@property (nonatomic, readonly, copy) NSData *address;
@property (nonatomic, copy) SPBeaconingKey *beaconingKey;
@property (nonatomic, copy) NSData *commandKey;
@property (nonatomic, copy) NSData *connectionToken;
@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *nearbyToken;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)beaconingKey;
- (id)commandKey;
- (id)connectionToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBeaconingKey:(id)arg1 commandKey:(id)arg2 connectionToken:(id)arg3 nearbyToken:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)nearbyToken;
- (void)setBeaconingKey:(id)arg1;
- (void)setCommandKey:(id)arg1;
- (void)setConnectionToken:(id)arg1;
- (void)setNearbyToken:(id)arg1;

@end
