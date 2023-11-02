
@interface ASCAppleIDCredential : NSObject <ASCCredentialProtocol> {
    AKAuthorization * _authorization;
    NSData * _identityToken;
    NSString * _state;
    NSString * _user;
}

@property (nonatomic, readonly) AKAuthorization *authorization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *identityToken;
@property (nonatomic, readonly, copy) NSString *state;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authorization;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identityToken;
- (id)initWithAuthorization:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 identityToken:(id)arg2 state:(id)arg3;
- (id)state;
- (id)user;

@end
