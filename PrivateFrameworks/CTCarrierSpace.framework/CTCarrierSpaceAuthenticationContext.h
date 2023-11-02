
@interface CTCarrierSpaceAuthenticationContext : NSObject <NSSecureCoding> {
    NSString * _authURL;
    NSString * _carrierName;
    NSString * _clientID;
    NSString * _iccid;
    NSString * _scope;
    NSString * _sourceApplicationAccountIdentifier;
    bool  _supportsState;
    NSString * _tokenURL;
}

@property (nonatomic, retain) NSString *authURL;
@property (nonatomic, retain) NSString *carrierName;
@property (nonatomic, retain) NSString *clientID;
@property (nonatomic, retain) NSString *iccid;
@property (nonatomic, retain) NSString *scope;
@property (nonatomic, retain) NSString *sourceApplicationAccountIdentifier;
@property (nonatomic) bool supportsState;
@property (nonatomic, retain) NSString *tokenURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authURL;
- (id)carrierName;
- (id)clientID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iccid;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)scope;
- (void)setAuthURL:(id)arg1;
- (void)setCarrierName:(id)arg1;
- (void)setClientID:(id)arg1;
- (void)setIccid:(id)arg1;
- (void)setScope:(id)arg1;
- (void)setSourceApplicationAccountIdentifier:(id)arg1;
- (void)setSupportsState:(bool)arg1;
- (void)setTokenURL:(id)arg1;
- (id)sourceApplicationAccountIdentifier;
- (bool)supportsState;
- (id)tokenURL;

@end
