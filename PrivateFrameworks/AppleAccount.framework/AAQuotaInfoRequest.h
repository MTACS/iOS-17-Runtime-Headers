
@interface AAQuotaInfoRequest : AARequest {
    ACAccount * _account;
    bool  _isDetailedRequest;
}

@property (nonatomic, readonly) ACAccount *account;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)account;
- (id)initDetailedRequestWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end
