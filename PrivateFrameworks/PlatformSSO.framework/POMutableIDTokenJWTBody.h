
@interface POMutableIDTokenJWTBody : POIDTokenJWTBody <POMutableJWTBody>

@property (readonly) NSDictionary *allData;
@property (retain) NSString *aud;
@property (retain) NSArray *audArray;
@property (retain) NSString *azp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *exp;
@property (retain) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (retain) NSDate *iat;
@property (retain) NSString *iss;
@property (retain) NSString *name;
@property (retain) NSDate *nbf;
@property (retain) NSString *nonce;
@property (retain) NSString *preferred_username;
@property (retain) NSString *sub;
@property (readonly) Class superclass;

- (void)addCustomClaims:(id)arg1;
- (void)setAud:(id)arg1;
- (void)setAudArray:(id)arg1;
- (void)setAzp:(id)arg1;
- (void)setExp:(id)arg1;
- (void)setGroups:(id)arg1;
- (void)setIat:(id)arg1;
- (void)setIss:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNbf:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setPreferred_username:(id)arg1;
- (void)setSub:(id)arg1;

@end
