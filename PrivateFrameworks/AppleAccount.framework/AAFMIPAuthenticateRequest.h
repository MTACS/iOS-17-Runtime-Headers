
@interface AAFMIPAuthenticateRequest : AARequest {
    ACAccount * _account;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end
