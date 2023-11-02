
@interface DAEASOAuthTokenResponse : NSObject {
    NSString * _accessToken;
    NSDictionary * _data;
    NSError * _error;
    NSString * _errorMessage;
    NSDate * _expiryDate;
    NSString * _idToken;
    NSString * _refreshToken;
    long long  _statusCode;
    NSString * _user_id;
}

@property (nonatomic, readonly) NSString *accessToken;
@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (nonatomic, readonly) NSString *idToken;
@property (nonatomic, readonly) NSString *refreshToken;
@property (nonatomic, readonly) long long statusCode;
@property (nonatomic, readonly) NSString *user_id;

- (void).cxx_destruct;
- (id)accessToken;
- (id)data;
- (id)error;
- (id)errorMessage;
- (id)expiryDate;
- (id)idToken;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
- (id)refreshToken;
- (long long)statusCode;
- (id)user_id;
- (id)usernameFromJWTToken:(id)arg1;

@end
