
@interface PKPeerPaymentPerformActionResponse : PKPeerPaymentWebServiceResponse {
    long long  _status;
    bool  _success;
}

@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) bool success;

- (id)initWithData:(id)arg1;
- (long long)status;
- (bool)success;

@end
