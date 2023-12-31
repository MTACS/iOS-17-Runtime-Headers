
@interface ICDelegationPlayInfoResponseToken : NSObject {
    NSDate * _expirationDate;
    NSString * _storefrontIdentifier;
    NSData * _tokenData;
}

@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSString *storefrontIdentifier;
@property (nonatomic, copy) NSData *tokenData;

- (void).cxx_destruct;
- (id)expirationDate;
- (void)setExpirationDate:(id)arg1;
- (void)setStorefrontIdentifier:(id)arg1;
- (void)setTokenData:(id)arg1;
- (id)storefrontIdentifier;
- (id)tokenData;

@end
