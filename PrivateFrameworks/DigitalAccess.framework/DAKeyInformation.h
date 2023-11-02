
@interface DAKeyInformation : NSObject <NSSecureCoding> {
    DAAlishaKeyInformation * _alishaKeyInformation;
    DAHomeKeyInformation * _homeKeyInformation;
    DAHydraKeyInformation * _hydraKeyInformation;
    long long  _keyType;
    NSString * _publicKeyIdentifier;
}

@property (nonatomic, readonly) DAAlishaKeyInformation *alishaKeyInformation;
@property (nonatomic, readonly) DAHomeKeyInformation *homeKeyInformation;
@property (nonatomic, readonly) DAHydraKeyInformation *hydraKeyInformation;
@property (nonatomic, readonly) long long keyType;
@property (nonatomic, readonly) NSString *publicKeyIdentifier;

+ (id)alishaKeyWithPublicKeyIdentifier:(id)arg1 alishaKeyInformation:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alishaKeyInformation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)homeKeyInformation;
- (id)hydraKeyInformation;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (long long)keyType;
- (id)publicKeyIdentifier;

@end
