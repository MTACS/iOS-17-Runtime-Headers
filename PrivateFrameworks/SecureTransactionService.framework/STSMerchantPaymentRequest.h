
@interface STSMerchantPaymentRequest : STSInAppPaymentRequest {
    NSString * _appletIdentifier;
    long long  _merchantCapabilities;
    NSData * _merchantData;
    NSData * _networkMerchantIdentifier;
    unsigned int  _unpredictableNumber;
}

@property (nonatomic, retain) NSString *appletIdentifier;
@property (nonatomic) long long merchantCapabilities;
@property (nonatomic, retain) NSData *merchantData;
@property (nonatomic, retain) NSData *networkMerchantIdentifier;
@property (nonatomic) unsigned int unpredictableNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appletIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransactionAmount:(id)arg1 currencyCode:(id)arg2 countryCode:(id)arg3 transactionDate:(id)arg4 merchantCapabilities:(long long)arg5 merchantData:(id)arg6 unpredictableNumber:(unsigned int)arg7;
- (long long)merchantCapabilities;
- (id)merchantData;
- (id)networkMerchantIdentifier;
- (void)setAppletIdentifier:(id)arg1;
- (void)setMerchantCapabilities:(long long)arg1;
- (void)setMerchantData:(id)arg1;
- (void)setNetworkMerchantIdentifier:(id)arg1;
- (void)setUnpredictableNumber:(unsigned int)arg1;
- (id)toNFECommercePaymentRequest:(id)arg1;
- (unsigned int)unpredictableNumber;

@end
