
@interface AASecondaryAuthenticationRequest : AARequest {
    NSString * _dsid;
    NSString * _primaryToken;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)initWithDSID:(id)arg1 primaryToken:(id)arg2;
- (id)urlRequest;
- (id)urlString;

@end
