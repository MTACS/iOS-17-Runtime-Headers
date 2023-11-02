
@interface PKPaymentContactlessProductCredential : PKPaymentCredential {
    NSString * _cardSessionToken;
    PKPaymentSetupProduct * _product;
    NSString * _productIdentifier;
    NSDictionary * _readerModeMetadata;
}

@property (nonatomic, copy) NSString *cardSessionToken;
@property (nonatomic, readonly, copy) PKPaymentSetupProduct *product;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic, copy) NSDictionary *readerModeMetadata;

- (void).cxx_destruct;
- (long long)_cardTypeFromSetupProductType:(unsigned long long)arg1;
- (id)cardSessionToken;
- (id)init;
- (id)initWithPaymentSetupProduct:(id)arg1;
- (id)initWithPaymentSetupProduct:(id)arg1 cardSessionToken:(id)arg2;
- (id)product;
- (id)productIdentifier;
- (id)readerModeMetadata;
- (void)setCardSessionToken:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setReaderModeMetadata:(id)arg1;
- (id)setupProductIdentifier;

@end
