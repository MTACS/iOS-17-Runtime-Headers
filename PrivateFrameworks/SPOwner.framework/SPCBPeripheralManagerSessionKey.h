
@interface SPCBPeripheralManagerSessionKey : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleId;
    NSUUID * _userIdentifier;
}

@property (nonatomic, readonly, copy) NSString *bundleId;
@property (nonatomic, readonly, copy) NSUUID *userIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)userIdentifier;

@end
