
@interface POMutableKeyRequestJWTBody : POKeyRequestJWTBody <POMutableJWTBody>

@property (readonly) NSDictionary *allData;
@property (retain) NSString *aud;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *exp;
@property (readonly) unsigned long long hash;
@property (retain) NSDate *iat;
@property (retain) NSString *iss;
@property (retain) NSString *key_purpose;
@property (retain) NSString *nonce;
@property (retain) NSString *refresh_token;
@property (retain) NSString *request_nonce;
@property (retain) NSString *request_type;
@property (retain) NSString *sub;
@property (readonly) Class superclass;
@property (retain) NSString *username;
@property (retain) NSString *version;

- (void)addCustomClaims:(id)arg1;
- (void)setAud:(id)arg1;
- (void)setExp:(id)arg1;
- (void)setIat:(id)arg1;
- (void)setIss:(id)arg1;
- (void)setKey_purpose:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setRefresh_token:(id)arg1;
- (void)setRequest_nonce:(id)arg1;
- (void)setRequest_type:(id)arg1;
- (void)setSub:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setVersion:(id)arg1;

@end
