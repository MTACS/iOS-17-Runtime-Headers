
@interface FKPendingApplePayOrderDetails : NSObject {
    NSString * _authenticationToken;
    NSString * _orderIdentifier;
    NSString * _orderTypeIdentifier;
    NSString * _transactionIdentifier;
    NSURL * _webServiceBaseURL;
}

@property (nonatomic, readonly, copy) NSString *authenticationToken;
@property (nonatomic, readonly, copy) NSString *orderIdentifier;
@property (nonatomic, readonly, copy) NSString *orderTypeIdentifier;
@property (nonatomic, readonly, copy) NSString *transactionIdentifier;
@property (nonatomic, readonly, copy) NSURL *webServiceBaseURL;

- (void).cxx_destruct;
- (id)authenticationToken;
- (id)initWithTransactionIdentifier:(id)arg1 orderTypeIdentifier:(id)arg2 orderIdentifier:(id)arg3 webServiceBaseURL:(id)arg4 authenticationToken:(id)arg5;
- (id)orderIdentifier;
- (id)orderTypeIdentifier;
- (id)transactionIdentifier;
- (id)webServiceBaseURL;

@end
