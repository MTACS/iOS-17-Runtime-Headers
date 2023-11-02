
@interface IPInstallableStateData : NSObject <NSCopying, NSSecureCoding> {
    LSApplicationIdentity * _identity;
    bool  _installing;
}

@property (nonatomic, readonly) LSApplicationIdentity *identity;
@property (getter=isInstalling, nonatomic, readonly) bool installing;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentity:(id)arg1 isInstalling:(bool)arg2;
- (bool)isInstalling;

@end
