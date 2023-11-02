
@interface PKPaymentDigitalIssuanceProductCredential : PKPaymentCredential {
    PKCurrencyAmount * _balance;
    NSString * _currency;
    PKCurrencyAmount * _price;
    PKPaymentSetupProduct * _product;
    NSString * _productIdentifier;
    PKServiceProviderPurchase * _purchase;
    PKDigitalIssuanceServiceProviderItem * _serviceProviderItem;
    PKDigitalIssuanceServiceProviderProduct * _serviceProviderProduct;
}

@property (nonatomic, copy) PKCurrencyAmount *balance;
@property (nonatomic, retain) NSString *currency;
@property (nonatomic, copy) PKCurrencyAmount *price;
@property (nonatomic, readonly) PKPaymentSetupProduct *product;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic, retain) PKServiceProviderPurchase *purchase;
@property (nonatomic, retain) PKDigitalIssuanceServiceProviderItem *serviceProviderItem;
@property (nonatomic, retain) PKDigitalIssuanceServiceProviderProduct *serviceProviderProduct;

- (void).cxx_destruct;
- (id)balance;
- (id)currency;
- (id)initWithPaymentSetupProduct:(id)arg1 purchase:(id)arg2 balance:(id)arg3;
- (id)initWithPaymentSetupProduct:(id)arg1 purchase:(id)arg2 balance:(id)arg3 serviceProviderProduct:(id)arg4 item:(id)arg5 currency:(id)arg6;
- (id)initWithPaymentSetupProduct:(id)arg1 purchase:(id)arg2 serviceProviderProduct:(id)arg3 item:(id)arg4 currency:(id)arg5;
- (id)metadata;
- (id)price;
- (id)product;
- (id)productIdentifier;
- (id)purchase;
- (id)serviceProviderItem;
- (id)serviceProviderProduct;
- (void)setBalance:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setPurchase:(id)arg1;
- (void)setServiceProviderItem:(id)arg1;
- (void)setServiceProviderProduct:(id)arg1;
- (id)setupProductIdentifier;

@end
