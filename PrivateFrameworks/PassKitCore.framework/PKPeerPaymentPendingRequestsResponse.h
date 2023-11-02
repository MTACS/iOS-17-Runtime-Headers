
@interface PKPeerPaymentPendingRequestsResponse : PKPeerPaymentWebServiceResponse {
    NSArray * _requestSummaries;
}

@property (nonatomic, readonly, copy) NSArray *requestSummaries;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)requestSummaries;

@end
