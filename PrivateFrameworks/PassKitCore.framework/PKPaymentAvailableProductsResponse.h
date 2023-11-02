
@interface PKPaymentAvailableProductsResponse : PKPaymentWebServiceResponse {
    NSArray * _availableProducts;
}

@property (nonatomic, readonly) NSArray *availableProducts;
@property (nonatomic, readonly) NSDate *expiry;

- (void).cxx_destruct;
- (id)availableProducts;
- (id)expiry;
- (bool)supportsSecureCoding;

@end
