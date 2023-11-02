
@interface CKDLongLivedOperationPersistedCallback : NSObject <NSSecureCoding> {
    NSInvocation * _invocation;
    bool  _isCompletionCallback;
    Protocol * _protocol;
}

@property (nonatomic, retain) NSInvocation *invocation;
@property (nonatomic) bool isCompletionCallback;
@property (nonatomic, retain) Protocol *protocol;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_validateInvocation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtocol:(id)arg1 invocation:(id)arg2 isCompletionCallback:(bool)arg3;
- (id)invocation;
- (bool)isCompletionCallback;
- (id)protocol;
- (void)setInvocation:(id)arg1;
- (void)setIsCompletionCallback:(bool)arg1;
- (void)setProtocol:(id)arg1;

@end
