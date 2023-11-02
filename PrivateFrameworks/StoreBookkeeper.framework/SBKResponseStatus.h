
@interface SBKResponseStatus : NSObject {
    NSString * _consoleDescription;
    bool  _isError;
    bool  _isPuntedError;
    bool  _isRecoverable;
    bool  _shouldFileRadar;
    long long  _statusCode;
}

@property (nonatomic, readonly, copy) NSString *consoleDescription;
@property (nonatomic, readonly) bool isAuthenticationError;
@property (nonatomic, readonly) bool isError;
@property (nonatomic, readonly) bool isGenericError;
@property (nonatomic, readonly) bool isPuntedError;
@property (nonatomic, readonly) bool isRecoverable;
@property (nonatomic, readonly) bool isSuccess;
@property (nonatomic, readonly) bool isUnsupportedClient;
@property (nonatomic, readonly) bool isValidationError;
@property (nonatomic, readonly) NSError *requestError;
@property (nonatomic, readonly) bool shouldFileRadar;
@property (nonatomic, readonly) long long statusCode;

+ (id)responseStatusForStatusCodeNumber:(id)arg1;

- (void).cxx_destruct;
- (id)consoleDescription;
- (id)initWithStatus:(long long)arg1 isRecoverable:(bool)arg2 isError:(bool)arg3 consoleDescription:(id)arg4 shouldFileRadar:(bool)arg5;
- (bool)isAuthenticationError;
- (bool)isError;
- (bool)isGenericError;
- (bool)isPuntedError;
- (bool)isRecoverable;
- (bool)isSuccess;
- (bool)isUnsupportedClient;
- (bool)isValidationError;
- (id)requestError;
- (bool)shouldFileRadar;
- (long long)statusCode;

@end
