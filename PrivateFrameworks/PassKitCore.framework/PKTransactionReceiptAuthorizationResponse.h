
@interface PKTransactionReceiptAuthorizationResponse : PKPaymentWebServiceResponse {
    NSString * _authorizationToken;
    NSString * _conversationIdentifier;
    NSData * _signature;
}

@property (nonatomic, readonly) NSString *authorizationToken;
@property (nonatomic, copy) NSString *conversationIdentifier;
@property (nonatomic, readonly) NSData *signature;

- (void).cxx_destruct;
- (id)authorizationToken;
- (id)conversationIdentifier;
- (id)initWithData:(id)arg1;
- (void)setConversationIdentifier:(id)arg1;
- (id)signature;

@end
