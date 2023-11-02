
@interface NEIKEv2AuthenticationProtocol : NSObject <NSCopying> {
    unsigned long long  _digitalSignatureAlgorithm;
    bool  _isNonStandard;
    unsigned long long  _method;
}

@property (nonatomic, readonly) unsigned long long digitalSignatureAlgorithm;
@property (nonatomic, readonly) bool isDigitalSignature;
@property (nonatomic, readonly) bool isNonStandard;
@property (nonatomic, readonly) bool isSignature;
@property (nonatomic, readonly) unsigned long long method;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)digitalSignatureAlgorithm;
- (unsigned long long)hash;
- (id)initWithDigitalSignature:(unsigned long long)arg1;
- (id)initWithMethod:(unsigned long long)arg1;
- (id)initWithNonStandardDigitalSignature:(unsigned long long)arg1;
- (bool)isDigitalSignature;
- (bool)isEqual:(id)arg1;
- (bool)isNonStandard;
- (bool)isSignature;
- (unsigned long long)method;

@end
