
@interface POMutableAssertionJWTBody : POAssertionJWTBody <POMutableJWTBody>

@property (readonly) NSDictionary *allData;
@property (retain) NSString *aud;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *exp;
@property (readonly) unsigned long long hash;
@property (retain) NSDate *iat;
@property (retain) NSString *iss;
@property (retain) NSString *nonce;
@property (retain) NSMutableData *password;
@property (retain) NSString *request_nonce;
@property (retain) NSString *scope;
@property (retain) NSString *sub;
@property (readonly) Class superclass;
@property (retain) NSString *use;

- (void)addCustomClaims:(id)arg1;
- (void)setAud:(id)arg1;
- (void)setExp:(id)arg1;
- (void)setIat:(id)arg1;
- (void)setIss:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setRequest_nonce:(id)arg1;
- (void)setScope:(id)arg1;
- (void)setSub:(id)arg1;

@end
