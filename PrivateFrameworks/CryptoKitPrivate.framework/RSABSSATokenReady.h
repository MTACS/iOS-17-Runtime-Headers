
@interface RSABSSATokenReady : NSObject {
    NSData * _keyId;
    NSData * _signature;
    NSData * _tokenContent;
}

@property (nonatomic, readonly, retain) NSData *keyId;
@property (nonatomic, readonly, retain) NSData *signature;
@property (nonatomic, readonly, retain) NSData *tokenContent;

- (void).cxx_destruct;
- (id)initWithTokenContent:(id)arg1 tokenSignature:(id)arg2 keyId:(id)arg3;
- (id)keyId;
- (id)signature;
- (id)tokenContent;

@end
