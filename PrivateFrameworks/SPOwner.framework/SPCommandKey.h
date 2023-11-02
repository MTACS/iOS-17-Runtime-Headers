
@interface SPCommandKey : NSObject <NSCopying, NSSecureCoding, SPConnectionMaterial, SPNearbyToken> {
    SPBeaconingKey * _beaconingKey;
    NSData * _commandKey;
    NSData * _connectionToken;
    NSData * _nearbyToken;
    NSNumber * _primaryIndex;
    NSNumber * _secondaryIndex;
    long long  _type;
    NSDateInterval * dateInterval;
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
@property (nonatomic, copy) NSNumber *primaryIndex;
@property (nonatomic, copy) NSNumber *secondaryIndex;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

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
- (id)initWithBeaconingKey:(id)arg1 commandKey:(id)arg2 connectionToken:(id)arg3 nearbyToken:(id)arg4 primaryIndex:(id)arg5 secondaryIndex:(id)arg6 type:(long long)arg7;
- (id)initWithCoder:(id)arg1;
- (id)nearbyToken;
- (id)primaryIndex;
- (id)secondaryIndex;
- (void)setBeaconingKey:(id)arg1;
- (void)setCommandKey:(id)arg1;
- (void)setConnectionToken:(id)arg1;
- (void)setNearbyToken:(id)arg1;
- (void)setPrimaryIndex:(id)arg1;
- (void)setSecondaryIndex:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
