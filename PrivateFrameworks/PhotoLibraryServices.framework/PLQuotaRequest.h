
@interface PLQuotaRequest : AARequest {
    NSString * _authToken;
    NSString * _personID;
}

- (void).cxx_destruct;
- (id)initWithURLString:(id)arg1 authToken:(id)arg2 personID:(id)arg3;
- (id)urlRequest;

@end
