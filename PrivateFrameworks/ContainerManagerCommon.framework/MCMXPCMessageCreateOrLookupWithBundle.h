
@interface MCMXPCMessageCreateOrLookupWithBundle : MCMXPCMessageBase <MCMParametersCreateOrLookupWithBundle> {
    NSURL * _bundleURL;
    bool  _createIfNecessary;
    NSURL * _executableURL;
    bool  _issueSandboxExtension;
    const char * _sandboxToken;
    bool  _transient;
}

@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) bool createIfNecessary;
@property (nonatomic, readonly) NSURL *executableURL;
@property (nonatomic, readonly) bool issueSandboxExtension;
@property (nonatomic, readonly) const char *sandboxToken;
@property (nonatomic, readonly) bool transient;

- (void).cxx_destruct;
- (id)bundleURL;
- (bool)createIfNecessary;
- (id)executableURL;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;
- (bool)issueSandboxExtension;
- (const char *)sandboxToken;
- (bool)transient;

@end
