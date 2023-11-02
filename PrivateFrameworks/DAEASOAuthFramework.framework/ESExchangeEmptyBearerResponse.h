
@interface ESExchangeEmptyBearerResponse : NSObject {
    NSString * _authURI;
    NSError * _error;
    long long  _statusCode;
}

@property (nonatomic, readonly) NSString *authURI;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) long long statusCode;

- (void).cxx_destruct;
- (id)authURI;
- (id)error;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
- (long long)statusCode;

@end
