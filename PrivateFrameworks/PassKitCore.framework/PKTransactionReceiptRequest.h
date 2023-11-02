
@interface PKTransactionReceiptRequest : PKPaymentWebServiceRequest {
    NSString * _authorizationToken;
    NSString * _conversationIdentifier;
    NSString * _receiptIdentifier;
    NSURL * _receiptProviderURL;
    NSData * _signature;
}

@property (nonatomic, readonly) NSString *authorizationToken;
@property (nonatomic, copy) NSString *conversationIdentifier;
@property (nonatomic, readonly) NSString *receiptIdentifier;
@property (nonatomic, readonly) NSURL *receiptProviderURL;
@property (nonatomic, readonly) NSData *signature;

- (void).cxx_destruct;
- (id)_urlRequest;
- (id)authorizationToken;
- (id)conversationIdentifier;
- (id)initWithReceiptProviderURL:(id)arg1 authorizationToken:(id)arg2 signature:(id)arg3 receiptIdentifier:(id)arg4;
- (id)receiptIdentifier;
- (id)receiptProviderURL;
- (void)setConversationIdentifier:(id)arg1;
- (id)signature;

@end
