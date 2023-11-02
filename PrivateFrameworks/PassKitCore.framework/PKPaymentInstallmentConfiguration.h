
@interface PKPaymentInstallmentConfiguration : NSObject <NSSecureCoding> {
    NSDictionary * _applicationMetadata;
    NSDecimalNumber * _bindingTotalAmount;
    NSString * _currencyCode;
    long long  _feature;
    bool  _inStorePurchase;
    NSArray * _installmentItems;
    NSString * _installmentMerchantIdentifier;
    NSData * _merchandisingImageData;
    NSDecimalNumber * _openToBuyThresholdAmount;
    NSString * _referrerIdentifier;
    long long  _retailChannel;
}

@property (nonatomic, copy) NSDictionary *applicationMetadata;
@property (nonatomic, retain) NSDecimalNumber *bindingTotalAmount;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic) long long feature;
@property (getter=isInStorePurchase, nonatomic) bool inStorePurchase;
@property (nonatomic, copy) NSArray *installmentItems;
@property (nonatomic, copy) NSString *installmentMerchantIdentifier;
@property (nonatomic, copy) NSData *merchandisingImageData;
@property (nonatomic, retain) NSDecimalNumber *openToBuyThresholdAmount;
@property (nonatomic, copy) NSString *referrerIdentifier;
@property (nonatomic) long long retailChannel;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationMetadata;
- (id)bindingTotalAmount;
- (id)currencyCode;
- (void)encodeToBodyDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)feature;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)installmentItems;
- (id)installmentMerchantIdentifier;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToInstallmentConfiguration:(id)arg1;
- (bool)isInStorePurchase;
- (id)merchandisingImageData;
- (id)openToBuyThresholdAmount;
- (id)referrerIdentifier;
- (long long)retailChannel;
- (void)setApplicationMetadata:(id)arg1;
- (void)setBindingTotalAmount:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setFeature:(long long)arg1;
- (void)setInStorePurchase:(bool)arg1;
- (void)setInstallmentItems:(id)arg1;
- (void)setInstallmentMerchantIdentifier:(id)arg1;
- (void)setMerchandisingImageData:(id)arg1;
- (void)setOpenToBuyThresholdAmount:(id)arg1;
- (void)setReferrerIdentifier:(id)arg1;
- (void)setRetailChannel:(long long)arg1;

@end
