
@interface SBKResponse : NSObject {
    NSString * _MIMEType;
    NSError * _error;
    unsigned long long  _responseCode;
    NSDictionary * _responseDictionary;
    NSDictionary * _responseHeaderFields;
    SBKResponseStatus * _responseStatus;
    double  _retrySeconds;
}

@property (nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly, copy) NSString *consoleDescription;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool isAuthenticationError;
@property (nonatomic, readonly) bool isError;
@property (nonatomic, readonly) bool isGenericError;
@property (nonatomic, readonly) bool isPuntedError;
@property (nonatomic, readonly) bool isRecoverable;
@property (nonatomic, readonly) bool isSuccess;
@property (nonatomic, readonly) bool isUnsupportedClient;
@property (nonatomic, readonly) bool isValidationError;
@property (nonatomic, readonly) NSError *requestError;
@property (nonatomic, readonly) unsigned long long responseCode;
@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) NSDictionary *responseHeaderFields;
@property (nonatomic, readonly) SBKResponseStatus *responseStatus;
@property (nonatomic, readonly) double retrySeconds;
@property (nonatomic, readonly) bool shouldFileRadar;
@property (nonatomic, readonly) long long statusCode;

+ (id)responseWithCode:(unsigned long long)arg1 headerFields:(id)arg2 responseDictionary:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;
+ (id)responseWithResponse:(id)arg1;
+ (id)responseWithURLResponse:(id)arg1 responseDictionary:(id)arg2;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)consoleDescription;
- (id)description;
- (id)error;
- (id)initWithCode:(unsigned long long)arg1 headerFields:(id)arg2 responseDictionary:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;
- (id)initWithURLResponse:(id)arg1 responseDictionary:(id)arg2;
- (bool)isAuthenticationError;
- (bool)isError;
- (bool)isGenericError;
- (bool)isPuntedError;
- (bool)isRecoverable;
- (bool)isSuccess;
- (bool)isUnsupportedClient;
- (bool)isValidationError;
- (id)requestError;
- (unsigned long long)responseCode;
- (id)responseDictionary;
- (id)responseHeaderFields;
- (id)responseStatus;
- (double)retrySeconds;
- (bool)shouldFileRadar;
- (long long)statusCode;

@end
