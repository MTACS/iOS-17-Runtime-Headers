
@interface SOProfile : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _URLPrefix;
    NSArray * _deniedBundleIdentifiers;
    NSString * _extensionBundleIdentifier;
    NSArray * _hosts;
    long long  _pssoAuthenticationMethod;
    NSString * _realm;
    long long  _screenLockedBehavior;
    long long  _type;
}

@property (nonatomic, retain) NSArray *URLPrefix;
@property (nonatomic, retain) NSArray *deniedBundleIdentifiers;
@property (nonatomic, retain) NSString *extensionBundleIdentifier;
@property (nonatomic, retain) NSArray *hosts;
@property (nonatomic) long long pssoAuthenticationMethod;
@property (nonatomic, retain) NSString *realm;
@property (nonatomic) long long screenLockedBehavior;
@property (nonatomic) long long type;

+ (id)stringWithAuthenticationMethod:(long long)arg1;
+ (id)stringWithProfileType:(long long)arg1;
+ (id)stringWithScreenLockedBehavior:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URLPrefix;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deniedBundleIdentifiers;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (id)hosts;
- (id)initWithCoder:(id)arg1;
- (long long)pssoAuthenticationMethod;
- (id)realm;
- (long long)screenLockedBehavior;
- (void)setDeniedBundleIdentifiers:(id)arg1;
- (void)setExtensionBundleIdentifier:(id)arg1;
- (void)setHosts:(id)arg1;
- (void)setPssoAuthenticationMethod:(long long)arg1;
- (void)setRealm:(id)arg1;
- (void)setScreenLockedBehavior:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setURLPrefix:(id)arg1;
- (long long)type;

@end
