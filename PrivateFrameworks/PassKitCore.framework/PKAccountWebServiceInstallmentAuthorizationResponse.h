
@interface PKAccountWebServiceInstallmentAuthorizationResponse : PKAccountWebServiceResponse {
    NSString * _authorizationToken;
}

@property (nonatomic, readonly, copy) NSString *authorizationToken;

- (void).cxx_destruct;
- (id)authorizationToken;
- (id)initWithData:(id)arg1;

@end
