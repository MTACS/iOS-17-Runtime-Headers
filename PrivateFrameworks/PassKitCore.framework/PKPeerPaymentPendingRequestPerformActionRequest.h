
@interface PKPeerPaymentPendingRequestPerformActionRequest : PKPeerPaymentWebServiceRequest {
    NSString * _action;
    NSString * _requestToken;
}

@property (nonatomic, copy) NSString *action;
@property (nonatomic, copy) NSString *requestToken;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)action;
- (id)requestToken;
- (void)setAction:(id)arg1;
- (void)setRequestToken:(id)arg1;

@end
