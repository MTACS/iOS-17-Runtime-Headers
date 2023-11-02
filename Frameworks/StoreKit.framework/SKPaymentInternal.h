
@interface SKPaymentInternal : NSObject <NSCopying> {
    SKPaymentAppleIDAuthorizationRequest * _appleIDAuthorizationClientInfo;
    NSString * _applicationUsername;
    bool  _isStoreOriginated;
    NSString * _partnerIdentifier;
    NSString * _partnerTransactionIdentifier;
    SKPaymentDiscount * _paymentDiscount;
    NSString * _productIdentifier;
    long long  _quantity;
    NSData * _requestData;
    NSDictionary * _requestParameters;
    bool  _simulatesAskToBuyInSandbox;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;

@end
