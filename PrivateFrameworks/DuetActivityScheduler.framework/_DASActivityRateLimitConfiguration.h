
@interface _DASActivityRateLimitConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
    NSArray * _rateLimits;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *rateLimits;

+ (id)rateLimitConfigurationWithName:(id)arg1 andLimits:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 andLimits:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)rateLimits;
- (void)setName:(id)arg1;
- (void)setRateLimits:(id)arg1;

@end
