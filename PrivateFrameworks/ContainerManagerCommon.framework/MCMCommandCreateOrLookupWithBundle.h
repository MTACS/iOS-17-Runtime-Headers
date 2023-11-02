
@interface MCMCommandCreateOrLookupWithBundle : MCMCommand <MCMParametersCreateOrLookupWithBundle> {
    NSURL * _bundleURL;
    unsigned long long  _containerClass;
    MCMContainerIdentity * _containerIdentity;
    bool  _createIfNecessary;
    MCMError * _error;
    NSURL * _executableURL;
    MCMCodeSignInfo * _info;
    bool  _issueSandboxExtension;
    const char * _sandboxToken;
    bool  _transient;
    MCMUserIdentity * _userIdentity;
}

@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) unsigned long long containerClass;
@property (nonatomic, readonly) MCMContainerIdentity *containerIdentity;
@property (nonatomic, readonly) bool createIfNecessary;
@property (nonatomic, readonly) MCMError *error;
@property (nonatomic, readonly) NSURL *executableURL;
@property (nonatomic, readonly) MCMCodeSignInfo *info;
@property (nonatomic, readonly) bool issueSandboxExtension;
@property (nonatomic, readonly) const char *sandboxToken;
@property (nonatomic, readonly) bool transient;
@property (nonatomic, readonly) MCMUserIdentity *userIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)_commonInit:(id)arg1;
- (id)bundleURL;
- (unsigned long long)containerClass;
- (id)containerIdentity;
- (bool)createIfNecessary;
- (void)dealloc;
- (id)error;
- (id)executableURL;
- (void)execute;
- (id)info;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;
- (bool)issueSandboxExtension;
- (bool)preflightClientAllowed;
- (const char *)sandboxToken;
- (bool)transient;
- (id)userIdentity;

@end
