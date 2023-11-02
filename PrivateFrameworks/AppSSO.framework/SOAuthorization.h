
@interface SOAuthorization : NSObject <SOExtensionDelegate, SOUIAuthorizationViewControllerDelegate> {
    SOAuthorizationCore * _authorizationCore;
    SOUIAuthorizationViewController * _authorizationViewController;
    <SOAuthorizationDelegate> * _delegate;
    bool  _enableEmbeddedAuthorizationViewController;
    SOExtension * _extension;
    SORemoteExtensionViewController * _extensionViewController;
    id /* block */  _pendingFinishAuthorizationBlock;
}

@property (nonatomic, retain) NSDictionary *authorizationOptions;
@property (readonly, copy) NSString *debugDescription;
@property <SOAuthorizationDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateDispatchQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableEmbeddedAuthorizationViewController;
@property (getter=isUserInteractionEnabled, nonatomic) bool enableUserInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2;
+ (bool)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 useInternalExtensions:(bool)arg4;
+ (bool)canPerformAuthorizationWithURL:(id)arg1 responseCode:(long long)arg2 useInternalExtensions:(bool)arg3;
+ (void)isExtensionProcessWithAuditToken:(struct { unsigned int x1[8]; })arg1 completion:(id /* block */)arg2;
+ (id)originatorBundleIdentifier;
+ (void)setOriginatorBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_applicationActivationWithTimeout:(bool)arg1;
- (void)_cancelAuthorization;
- (void)_extensionCleanup;
- (void)_finishAuthorization:(id)arg1 completion:(id /* block */)arg2;
- (void)_finishAuthorizationWithCredential:(id)arg1 error:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)authorization:(id)arg1 didCompleteWithCredential:(id)arg2 error:(id)arg3;
- (id)authorizationOptions;
- (void)beginAuthorizationWithOperation:(id)arg1 url:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4;
- (void)beginAuthorizationWithParameters:(id)arg1;
- (void)beginAuthorizationWithURL:(id)arg1 httpHeaders:(id)arg2 httpBody:(id)arg3;
- (void)cancelAuthorization;
- (void)dealloc;
- (void)debugHintsWithCompletion:(id /* block */)arg1;
- (id)delegate;
- (id)delegateDispatchQueue;
- (bool)enableEmbeddedAuthorizationViewController;
- (void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(id /* block */)arg3;
- (id)init;
- (bool)isUserInteractionEnabled;
- (id)kerberosProfiles;
- (void)presentAuthorizationViewControllerWithHints:(id)arg1 requestIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)realms;
- (void)setAuthorizationOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateDispatchQueue:(id)arg1;
- (void)setEnableEmbeddedAuthorizationViewController:(bool)arg1;
- (void)setEnableUserInteraction:(bool)arg1;
- (void)viewControllerDidCancel:(id)arg1;

@end
