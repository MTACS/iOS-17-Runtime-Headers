
@interface SPTrackingAvoidanceResult : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    NSArray * _policies;
    long long  _type;
}

@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSArray *policies;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 policies:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)policies;
- (void)setIdentifier:(id)arg1;
- (void)setPolicies:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
