
@interface AASigningSessionRequest : AARequest {
    NSData * _sessionInfoRequestData;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)initWithURLString:(id)arg1 sessionInfoRequestData:(id)arg2;
- (id)urlRequest;

@end
