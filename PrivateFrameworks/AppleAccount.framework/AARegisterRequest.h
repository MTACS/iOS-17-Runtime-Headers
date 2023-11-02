
@interface AARegisterRequest : AAAuthenticateRequest {
    NSMutableDictionary * _additionalCookieHeaders;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (void)addCookieHeaders:(id)arg1;
- (id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3;
- (id)urlRequest;
- (id)urlString;

@end
