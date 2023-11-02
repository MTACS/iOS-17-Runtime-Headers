
@interface PKPayLaterFinancingControllerConfiguration : NSObject {
    NSNumber * _adamIdentifier;
    unsigned long long  _channel;
    unsigned long long  _channelType;
    NSString * _currencyCode;
    bool  _isMerchantTokenRequest;
    bool  _isMultiTokenRequest;
    NSString * _merchantCountryCode;
    NSString * _merchantIdentifier;
    NSString * _merchantName;
    NSString * _originURL;
    NSArray * _supportedNetworks;
    long long  _suppressionMode;
    NSDecimalNumber * _transactionAmount;
    NSString * _webMerchantIdentifier;
    NSString * _webMerchantName;
}

@property (nonatomic, copy) NSNumber *adamIdentifier;
@property (nonatomic, readonly) unsigned long long channel;
@property (nonatomic, readonly) unsigned long long channelType;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic) bool isMerchantTokenRequest;
@property (nonatomic) bool isMultiTokenRequest;
@property (nonatomic, copy) NSString *merchantCountryCode;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, copy) NSString *merchantName;
@property (nonatomic, copy) NSString *originURL;
@property (nonatomic, copy) NSArray *supportedNetworks;
@property (nonatomic) long long suppressionMode;
@property (nonatomic, copy) NSDecimalNumber *transactionAmount;
@property (nonatomic, copy) NSString *webMerchantIdentifier;
@property (nonatomic, copy) NSString *webMerchantName;

- (void).cxx_destruct;
- (id)adamIdentifier;
- (unsigned long long)channel;
- (unsigned long long)channelType;
- (id)currencyCode;
- (id)initWithCurrencyCode:(id)arg1 channel:(unsigned long long)arg2;
- (id)initWithTransactionAmount:(id)arg1 currencyCode:(id)arg2 merchantCountryCode:(id)arg3 merchantIdentifier:(id)arg4 originURL:(id)arg5 webMerchantIdentifier:(id)arg6 webMerchantName:(id)arg7 merchantName:(id)arg8 adamIdentifier:(id)arg9 isMerchantTokenRequest:(bool)arg10 isMultiTokenRequest:(bool)arg11 channel:(unsigned long long)arg12 channelType:(unsigned long long)arg13 supportedNetworks:(id)arg14 suppressionMode:(long long)arg15;
- (bool)isMerchantTokenRequest;
- (bool)isMultiTokenRequest;
- (id)merchantCountryCode;
- (id)merchantIdentifier;
- (id)merchantName;
- (id)originURL;
- (void)setAdamIdentifier:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setIsMerchantTokenRequest:(bool)arg1;
- (void)setIsMultiTokenRequest:(bool)arg1;
- (void)setMerchantCountryCode:(id)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setMerchantName:(id)arg1;
- (void)setOriginURL:(id)arg1;
- (void)setSupportedNetworks:(id)arg1;
- (void)setSuppressionMode:(long long)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setWebMerchantIdentifier:(id)arg1;
- (void)setWebMerchantName:(id)arg1;
- (id)supportedNetworks;
- (long long)suppressionMode;
- (id)transactionAmount;
- (void)updateMerchantIdentifier:(id)arg1 originURL:(id)arg2 webMerchantIdentifier:(id)arg3 webMerchantName:(id)arg4;
- (void)updateTransactionAmount:(id)arg1;
- (id)webMerchantIdentifier;
- (id)webMerchantName;

@end
