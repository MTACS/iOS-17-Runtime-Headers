
@interface POMutableKeyExchangeResponseJWTBody : POKeyExchangeResponseJWTBody <POMutableJWTBody>

@property (readonly) NSDictionary *allData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *exp;
@property (readonly) unsigned long long hash;
@property (retain) NSDate *iat;
@property (retain) NSString *key;
@property (retain) NSString *key_context;
@property (readonly) Class superclass;

- (void)addCustomClaims:(id)arg1;
- (void)setExp:(id)arg1;
- (void)setIat:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setKey_context:(id)arg1;

@end
