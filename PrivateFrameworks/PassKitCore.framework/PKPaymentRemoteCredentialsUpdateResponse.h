
@interface PKPaymentRemoteCredentialsUpdateResponse : PKPaymentWebServiceResponse {
    NSArray * _credentials;
}

@property (nonatomic, readonly, copy) NSArray *credentials;

- (void).cxx_destruct;
- (id)credentials;
- (id)initWithData:(id)arg1;

@end
