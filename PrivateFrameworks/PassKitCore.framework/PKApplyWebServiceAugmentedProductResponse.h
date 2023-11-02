
@interface PKApplyWebServiceAugmentedProductResponse : PKApplyWebServiceResponse {
    PKPaymentSetupProduct * _product;
}

@property (nonatomic, readonly, copy) PKPaymentSetupProduct *product;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_generateProduct;
- (id)initWithData:(id)arg1;
- (id)product;

@end
