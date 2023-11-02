
@interface AKPrivateEmail : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clientAppBundleId;
    NSString * _key;
    NSString * _privateEmailAddress;
}

@property (nonatomic, readonly, copy) NSString *clientAppBundleId;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSString *privateEmailAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientAppBundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAddress:(id)arg1 forKey:(id)arg2;
- (id)initWithAddress:(id)arg1 forKey:(id)arg2 withBundleId:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (id)privateEmailAddress;

@end
