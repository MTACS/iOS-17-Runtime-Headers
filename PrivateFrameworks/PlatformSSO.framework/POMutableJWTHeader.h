
@interface POMutableJWTHeader : POJWTHeader

@property (retain) NSString *alg;
@property (retain) NSString *apu;
@property (retain) NSString *apv;
@property (retain) NSString *cty;
@property (retain) NSString *enc;
@property (retain) NSDictionary *epk;
@property (retain) NSString *kid;
@property (retain) NSNumber *p2c;
@property (retain) NSString *p2s;
@property (retain) NSString *typ;
@property (retain) NSArray *x5c;
@property (retain) NSString *x5t;

- (void)addCustomClaims:(id)arg1;
- (void)addEphemeralPublicKey:(struct __SecKey { }*)arg1;
- (void)setAlg:(id)arg1;
- (void)setApu:(id)arg1;
- (void)setApv:(id)arg1;
- (void)setCty:(id)arg1;
- (void)setEnc:(id)arg1;
- (void)setEpk:(id)arg1;
- (void)setKid:(id)arg1;
- (void)setP2c:(id)arg1;
- (void)setP2s:(id)arg1;
- (void)setTyp:(id)arg1;
- (void)setX5c:(id)arg1;
- (void)setX5t:(id)arg1;

@end
