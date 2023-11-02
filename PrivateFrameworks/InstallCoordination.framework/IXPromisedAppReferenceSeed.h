
@interface IXPromisedAppReferenceSeed : IXOwnedDataPromiseSeed <NSCopying, NSSecureCoding> {
    IXApplicationIdentity * _identity;
    unsigned long long  _installationDomain;
}

@property (nonatomic, retain) IXApplicationIdentity *identity;
@property (nonatomic) unsigned long long installationDomain;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)clientPromiseClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)installationDomain;
- (void)setIdentity:(id)arg1;
- (void)setInstallationDomain:(unsigned long long)arg1;

@end
