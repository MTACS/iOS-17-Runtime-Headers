
@interface PKTransactionReceiptAuthorizationRequest : PKPaymentWebServiceRequest {
    NSString * _cardNumberSuffix;
    NSString * _receiptIdentifier;
    NSString * _receiptServiceIdentifier;
}

@property (nonatomic, readonly) NSString *cardNumberSuffix;
@property (nonatomic, readonly) NSString *receiptIdentifier;
@property (nonatomic, readonly) NSString *receiptServiceIdentifier;

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 webService:(id)arg3 completion:(id /* block */)arg4;
- (id)cardNumberSuffix;
- (id)initWithReceiptServiceIdentifier:(id)arg1 receiptIdentifier:(id)arg2 cardNumberSuffix:(id)arg3;
- (id)receiptIdentifier;
- (id)receiptServiceIdentifier;

@end
