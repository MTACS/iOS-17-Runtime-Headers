
@interface PKAppleBalanceInStoreTopUpToken : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _certificateChain;
    NSDate * _expirationDate;
    NSData * _payload;
    NSData * _signature;
    long long  _state;
    NSURL * _termsURL;
    NSString * _token;
    NSString * _tokenIdentifier;
    long long  _tokenType;
}

@property (nonatomic, copy) NSArray *certificateChain;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSData *payload;
@property (nonatomic, copy) NSData *signature;
@property (nonatomic) long long state;
@property (nonatomic, copy) NSURL *termsURL;
@property (nonatomic, copy) NSString *token;
@property (nonatomic, copy) NSString *tokenIdentifier;
@property (nonatomic) long long tokenType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificateChain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayableToken;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 accountIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (id)payload;
- (void)setCertificateChain:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTermsURL:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setTokenIdentifier:(id)arg1;
- (void)setTokenType:(long long)arg1;
- (id)signature;
- (long long)state;
- (id)termsURL;
- (id)token;
- (id)tokenIdentifier;
- (long long)tokenType;

@end
