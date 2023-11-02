
@interface POMutableLoginResponseJWTBody : POLoginResponseJWTBody <POMutableJWTBody>

@property (readonly) NSDictionary *allData;
@property (retain) NSString *aud;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSNumber *expires_in;
@property (retain) NSDate *expires_on;
@property (readonly) unsigned long long hash;
@property (retain) NSDate *iat;
@property (retain) NSString *id_token;
@property (retain) NSString *iss;
@property (retain) NSString *refresh_token;
@property (retain) NSNumber *refresh_token_expires_in;
@property (readonly) Class superclass;
@property (retain) NSString *token_type;

- (void)addCustomClaims:(id)arg1;
- (void)setAud:(id)arg1;
- (void)setExpires_in:(id)arg1;
- (void)setExpires_on:(id)arg1;
- (void)setIat:(id)arg1;
- (void)setId_token:(id)arg1;
- (void)setIss:(id)arg1;
- (void)setRefresh_token:(id)arg1;
- (void)setRefresh_token_expires_in:(id)arg1;
- (void)setToken_type:(id)arg1;

@end
