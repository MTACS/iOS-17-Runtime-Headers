
@interface DAEASOpenIDMetadataResponse : NSObject {
    NSString * _authorizationURI;
    NSDictionary * _data;
    NSError * _error;
    NSString * _errorMessage;
    NSString * _issuer;
    NSString * _jwksURI;
    long long  _statusCode;
    NSString * _tokenRequestURI;
}

@property (nonatomic, readonly) NSString *authorizationURI;
@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) NSString *issuer;
@property (nonatomic, readonly) NSString *jwksURI;
@property (nonatomic, readonly) long long statusCode;
@property (nonatomic, readonly) NSString *tokenRequestURI;

- (void).cxx_destruct;
- (id)authorizationURI;
- (id)data;
- (id)error;
- (id)errorMessage;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
- (id)issuer;
- (id)jwksURI;
- (long long)statusCode;
- (id)tokenRequestURI;

@end
