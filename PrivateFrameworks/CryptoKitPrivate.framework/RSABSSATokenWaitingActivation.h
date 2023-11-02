
@interface RSABSSATokenWaitingActivation : NSObject {
    NSData * _blindedMessage;
    NSData * _blindingInverse;
    const struct ccrsabssa_ciphersuite { } * _ciphersuite;
    RSABSSATokenBlinder * _tokenBlinder;
    NSData * _tokenContent;
}

@property (nonatomic, readonly, retain) NSData *blindedMessage;
@property (nonatomic, readonly, retain) NSData *blindingInverse;
@property (nonatomic, readonly, retain) RSABSSATokenBlinder *tokenBlinder;
@property (nonatomic, readonly, retain) NSData *tokenContent;

- (void).cxx_destruct;
- (id)activateTokenWithServerResponse:(id)arg1 error:(id*)arg2;
- (id)blindedMessage;
- (id)blindingInverse;
- (id)initWithBlindingInverse:(id)arg1 blindedMessage:(id)arg2 tokenContent:(id)arg3 tokenBlinder:(id)arg4 ciphersuite:(const struct ccrsabssa_ciphersuite { }*)arg5;
- (id)tokenBlinder;
- (id)tokenContent;

@end
