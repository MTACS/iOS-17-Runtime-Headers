
@interface EDAMBackupPaymentInfo : FATObject {
    NSString * _currency;
    NSNumber * _paymentMethodId;
    NSString * _premiumCommerceService;
    NSString * _premiumServiceSKU;
    NSNumber * _unitPrice;
}

@property (nonatomic, retain) NSString *currency;
@property (nonatomic, retain) NSNumber *paymentMethodId;
@property (nonatomic, retain) NSString *premiumCommerceService;
@property (nonatomic, retain) NSString *premiumServiceSKU;
@property (nonatomic, retain) NSNumber *unitPrice;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)currency;
- (id)paymentMethodId;
- (id)premiumCommerceService;
- (id)premiumServiceSKU;
- (void)setCurrency:(id)arg1;
- (void)setPaymentMethodId:(id)arg1;
- (void)setPremiumCommerceService:(id)arg1;
- (void)setPremiumServiceSKU:(id)arg1;
- (void)setUnitPrice:(id)arg1;
- (id)unitPrice;

@end
