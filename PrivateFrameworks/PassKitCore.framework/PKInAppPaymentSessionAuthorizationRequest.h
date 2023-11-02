
@interface PKInAppPaymentSessionAuthorizationRequest : NSObject {
    NSData * _applicationData;
    NSString * _countryCode;
    NSString * _currencyCode;
    unsigned long long  _merchantCapabilities;
    NSString * _merchantIdentifier;
    PKPaymentMerchantSession * _merchantSession;
    PKPaymentApplication * _paymentApplication;
    NSArray * _supportedNetworks;
    NSDecimalNumber * _transactionAmount;
}

@property (nonatomic, retain) NSData *applicationData;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic) unsigned long long merchantCapabilities;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, retain) PKPaymentMerchantSession *merchantSession;
@property (nonatomic, retain) PKPaymentApplication *paymentApplication;
@property (nonatomic, copy) NSArray *supportedNetworks;
@property (nonatomic, retain) NSDecimalNumber *transactionAmount;

- (void).cxx_destruct;
- (id)applicationData;
- (id)countryCode;
- (id)currencyCode;
- (unsigned long long)merchantCapabilities;
- (id)merchantIdentifier;
- (id)merchantSession;
- (id)paymentApplication;
- (void)setApplicationData:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setMerchantCapabilities:(unsigned long long)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setMerchantSession:(id)arg1;
- (void)setPaymentApplication:(id)arg1;
- (void)setSupportedNetworks:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (id)supportedNetworks;
- (id)transactionAmount;

@end
