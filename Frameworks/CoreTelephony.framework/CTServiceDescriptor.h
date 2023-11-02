
@interface CTServiceDescriptor : NSObject <NSCopying, NSSecureCoding> {
    long long  _domain;
    NSString * _identifier;
    NSNumber * _instance;
}

@property (nonatomic) long long domain;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSNumber *instance;

+ (id)descriptorWithSubscriptionContext:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)telephonyDescriptorWithInstance:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(long long)arg1 instance:(id)arg2;
- (id)instance;
- (bool)isEqual:(id)arg1;
- (void)setDomain:(long long)arg1;
- (void)setInstance:(id)arg1;

@end
