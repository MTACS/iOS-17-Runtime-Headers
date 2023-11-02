
@interface PKPaymentRevokeSharedCredentialResponse : PKPaymentWebServiceResponse {
    NSURL * _passURL;
}

@property (nonatomic, readonly) NSURL *passURL;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)passURL;

@end
