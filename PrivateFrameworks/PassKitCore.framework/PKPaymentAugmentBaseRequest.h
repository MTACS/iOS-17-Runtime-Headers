
@interface PKPaymentAugmentBaseRequest : PKPaymentWebServiceRequest {
    PKSecureElementApplet * _applet;
    NSString * _currencyCode;
    NSString * _merchantCountryCode;
    PKPaymentPass * _pass;
    PKPaymentApplication * _paymentApplication;
    long long  _type;
}

@property (nonatomic, retain) PKSecureElementApplet *applet;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, copy) NSString *merchantCountryCode;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, retain) PKPaymentApplication *paymentApplication;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)applet;
- (id)bodyDictionary;
- (id)currencyCode;
- (id)endpointComponents;
- (id)initWithPaymentPass:(id)arg1;
- (id)merchantCountryCode;
- (id)pass;
- (id)paymentApplication;
- (void)setApplet:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setMerchantCountryCode:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setPaymentApplication:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
