
@interface AAUIQuotaRequest : AARequest {
    ACAccount * _account;
    bool  _isDetailedRequest;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)initDetailedRequestWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end
