
@interface CLBeaconIdentityCondition : CLCondition <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSNumber * _major;
    NSNumber * _minor;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSNumber *major;
@property (nonatomic, readonly, copy) NSNumber *minor;

+ (id)any;
+ (bool)supportsSecureCoding;

- (id)UUID;
- (id)_initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3;
- (bool)isEqual:(id)arg1;
- (id)major;
- (id)minor;
- (void)setUUID:(id)arg1;

@end
