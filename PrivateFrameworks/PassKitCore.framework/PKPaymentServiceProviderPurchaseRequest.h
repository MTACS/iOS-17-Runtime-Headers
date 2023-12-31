
@interface PKPaymentServiceProviderPurchaseRequest : PKPaymentWebServiceRequest {
    NSString * _purchaseIdentifier;
}

@property (nonatomic, copy) NSString *purchaseIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithPurchaseIdentifier:(id)arg1;
- (id)purchaseIdentifier;
- (void)setPurchaseIdentifier:(id)arg1;

@end
