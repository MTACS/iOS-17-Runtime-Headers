
@interface AALoginAccountRequest : AARequest {
    ACAccount * _account;
    NSDictionary * _delegatesInfo;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1 delegates:(id)arg2;
- (id)urlRequest;
- (id)urlString;

@end
