
@interface PKPaymentRequestPassUpdateResponse : PKPaymentWebServiceResponse {
    unsigned long long  _appletState;
    NSString * _passURL;
}

@property (nonatomic, readonly) unsigned long long appletState;
@property (nonatomic, readonly, copy) NSString *passURL;

- (void).cxx_destruct;
- (unsigned long long)appletState;
- (id)initWithData:(id)arg1;
- (id)passURL;

@end
