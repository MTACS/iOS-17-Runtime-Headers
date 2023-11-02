
@interface PKPaymentServiceProviderPurchasesResponse : PKPaymentWebServiceResponse {
    NSArray * _purchases;
}

@property (nonatomic, readonly, copy) NSArray *purchases;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)purchases;

@end
