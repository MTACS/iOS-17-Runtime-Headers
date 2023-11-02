
@interface ACMKeychainTokenInfo : ACFKeychainItemInfo

@property (retain) NSString *indicator;
@property (retain) ACFPrincipal *principal;
@property (retain) NSData *tokenData;

+ (id)classCode;
+ (id)keychainTokenInfoWithPrincipal:(id)arg1;
+ (id)keychainTokenInfoWithPrincipal:(id)arg1 indicator:(id)arg2;

- (id)indicator;
- (id)init;
- (id)principal;
- (void)setIndicator:(id)arg1;
- (void)setPrincipal:(id)arg1;
- (void)setTokenData:(id)arg1;
- (id)tokenData;

@end
