
@interface PKPeerPaymentPendingRequestsRequest : PKPeerPaymentWebServiceRequest {
    NSArray * _requestTokens;
}

@property (nonatomic, copy) NSArray *requestTokens;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)requestTokens;
- (void)setRequestTokens:(id)arg1;

@end
