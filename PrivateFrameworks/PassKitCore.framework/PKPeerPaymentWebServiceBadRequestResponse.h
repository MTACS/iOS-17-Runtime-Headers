
@interface PKPeerPaymentWebServiceBadRequestResponse : PKPeerPaymentWebServiceResponse {
    NSNumber * _errorCode;
    NSString * _serverDebugDescription;
}

@property (nonatomic, readonly, copy) NSNumber *errorCode;
@property (nonatomic, readonly, copy) NSString *serverDebugDescription;

- (void).cxx_destruct;
- (id)errorCode;
- (id)initWithData:(id)arg1;
- (id)serverDebugDescription;

@end
