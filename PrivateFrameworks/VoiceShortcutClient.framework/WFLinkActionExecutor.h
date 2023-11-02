
@interface WFLinkActionExecutor : NSObject <LNActionExecutorDelegate> {
    NSString * _appBundleIdentifier;
    long long  _authenticationPolicy;
    id /* block */  _completionHandler;
    NSString * _extensionBundleIdentifier;
    LNAction * _linkAction;
    LNActionMetadata * _metadata;
    LNMetadataProvider * _metadataProvider;
}

@property (nonatomic, readonly, copy) NSString *appBundleIdentifier;
@property (nonatomic, readonly) long long authenticationPolicy;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) LNAction *linkAction;
@property (nonatomic, readonly) LNActionMetadata *metadata;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (long long)authenticationPolicy;
- (id /* block */)completionHandler;
- (void)executor:(id)arg1 didCompleteExecutionWithResult:(id)arg2 error:(id)arg3;
- (void)executor:(id)arg1 needsActionConfirmationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsConfirmationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsDisambiguationWithRequest:(id)arg2;
- (void)executor:(id)arg1 needsValueWithRequest:(id)arg2;
- (id)executorOptions;
- (id)extensionBundleIdentifier;
- (id)initWithLinkAction:(id)arg1 appBundleIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 authenticationPolicy:(long long)arg4 error:(id*)arg5;
- (id)linkAction;
- (id)metadata;
- (void)performWithCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
