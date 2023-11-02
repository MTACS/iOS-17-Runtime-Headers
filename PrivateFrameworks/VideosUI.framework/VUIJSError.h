
@interface VUIJSError : VUIJSObject {
    VUIJSError * _jsUnderlyingError;
    NSError * _wrappedError;
}

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
