
@interface PKInAppPaymentSessionAuthorizeParamaters : NSObject {
    NSData * _authenticationCredential;
    long long  _cryptogramType;
    bool * _isFeatureNotSupportedError;
    NSData * _networkMerchantIdentifier;
    NSData * _nonce;
}

@property (nonatomic, retain) NSData *authenticationCredential;
@property (nonatomic) long long cryptogramType;
@property (nonatomic) bool*isFeatureNotSupportedError;
@property (nonatomic, retain) NSData *networkMerchantIdentifier;
@property (nonatomic, retain) NSData *nonce;

- (void).cxx_destruct;
- (id)authenticationCredential;
- (long long)cryptogramType;
- (id)initWithNonce:(id)arg1 authenticationCredential:(id)arg2 networkMerchantIdentifier:(id)arg3 cryptogramType:(long long)arg4;
- (bool*)isFeatureNotSupportedError;
- (id)networkMerchantIdentifier;
- (id)nonce;
- (void)setAuthenticationCredential:(id)arg1;
- (void)setCryptogramType:(long long)arg1;
- (void)setIsFeatureNotSupportedError:(bool*)arg1;
- (void)setNetworkMerchantIdentifier:(id)arg1;
- (void)setNonce:(id)arg1;

@end
