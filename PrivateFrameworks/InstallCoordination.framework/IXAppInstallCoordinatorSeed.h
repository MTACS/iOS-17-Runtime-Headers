
@interface IXAppInstallCoordinatorSeed : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _creator;
    unsigned int  _creatorEUID;
    IXApplicationIdentity * _identity;
    unsigned long long  _installationDomain;
    unsigned long long  _intent;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic) unsigned long long creator;
@property (nonatomic) unsigned int creatorEUID;
@property (nonatomic, retain) IXApplicationIdentity *identity;
@property (nonatomic) unsigned long long installationDomain;
@property (nonatomic) unsigned long long intent;
@property (nonatomic, retain) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)creator;
- (unsigned int)creatorEUID;
- (void)encodeWithCoder:(id)arg1;
- (id)identity;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)installationDomain;
- (unsigned long long)intent;
- (void)setCreator:(unsigned long long)arg1;
- (void)setCreatorEUID:(unsigned int)arg1;
- (void)setIdentity:(id)arg1;
- (void)setInstallationDomain:(unsigned long long)arg1;
- (void)setIntent:(unsigned long long)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;

@end
