
@interface DAEASOAuthTokenRefreshResponse : NSObject {
    NSString * _accessToken;
    NSError * _error;
    NSString * _errorMessage;
    NSString * _errorName;
    NSDate * _expiryDate;
    NSString * _idToken;
    NSString * _refreshToken;
    NSDictionary * _responseBody;
    long long  _statusCode;
}

@property (nonatomic, readonly) NSString *accessToken;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) NSString *errorName;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (nonatomic, readonly) NSString *idToken;
@property (nonatomic, readonly) NSString *refreshToken;
@property (nonatomic, readonly) NSDictionary *responseBody;
@property (nonatomic, readonly) long long statusCode;

- (void).cxx_destruct;
- (id)accessToken;
- (id)error;
- (id)errorMessage;
- (id)errorName;
- (id)expiryDate;
- (id)idToken;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
- (id)refreshToken;
- (id)responseBody;
- (long long)statusCode;

@end
