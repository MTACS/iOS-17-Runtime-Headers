
@interface IKJSError : IKJSObject <IKJSError> {
    IKJSError * _jsUnderlyingError;
    NSError * _wrappedError;
}

@property (nonatomic, readonly) NSNumber *code;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *failureReason;
@property (nonatomic, readonly) NSString *recoverySuggestion;
@property (nonatomic, readonly) IKJSError *underlyingError;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) NSError *wrappedError;

- (void).cxx_destruct;
- (id)code;
- (id)description;
- (id)domain;
- (id)failureReason;
- (id)initWithError:(id)arg1 appContext:(id)arg2;
- (id)recoverySuggestion;
- (id)underlyingError;
- (id)userInfo;
- (id)wrappedError;

@end
