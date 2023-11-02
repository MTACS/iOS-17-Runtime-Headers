
@interface CRKIdentityConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _addsClientAuthAndServerAuthEKUs;
    NSString * _commonName;
    bool  _createsCertificateAuthority;
    NSString * _emailAddress;
    unsigned int  _hashingAlgorithm;
    long long  _keySizeInBits;
}

@property (nonatomic) bool addsClientAuthAndServerAuthEKUs;
@property (nonatomic, readonly, copy) NSString *commonName;
@property (nonatomic) bool createsCertificateAuthority;
@property (nonatomic, readonly, copy) NSData *dataRepresentation;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic) unsigned int hashingAlgorithm;
@property (nonatomic) long long keySizeInBits;

+ (id)configurationWithData:(id)arg1;
+ (bool)defaultCreatesCertificateAuthority;
+ (unsigned int)defaultHashingAlgorithm;
+ (long long)defaultKeySizeInBits;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)addsClientAuthAndServerAuthEKUs;
- (id)commonName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createsCertificateAuthority;
- (id)dataRepresentation;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hashingAlgorithm;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommonName:(id)arg1;
- (long long)keySizeInBits;
- (void)setAddsClientAuthAndServerAuthEKUs:(bool)arg1;
- (void)setCreatesCertificateAuthority:(bool)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setHashingAlgorithm:(unsigned int)arg1;
- (void)setKeySizeInBits:(long long)arg1;

@end
