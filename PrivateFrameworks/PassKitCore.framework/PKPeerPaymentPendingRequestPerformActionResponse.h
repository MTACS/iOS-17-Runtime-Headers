
@interface PKPeerPaymentPendingRequestPerformActionResponse : PKPeerPaymentWebServiceResponse {
    NSString * _status;
    bool  _success;
}

@property (nonatomic, readonly) NSString *status;
@property (nonatomic, readonly) bool success;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)status;
- (bool)success;

@end
