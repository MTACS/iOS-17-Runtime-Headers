
@interface AIDAMutableServiceContext : AIDAServiceContext

@property (nonatomic, retain) <AASignInFlowControllerDelegate> *aaSignInFlowControllerDelegate;
@property (nonatomic, retain) <AASignOutFlowControllerDelegate> *aaSignOutFlowControllerDelegate;
@property (nonatomic, copy) NSDictionary *authenticationResults;
@property (nonatomic) <CDPStateUIProvider> *cdpUiProvider;
@property (nonatomic) long long operationUIPermissions;
@property (nonatomic) bool shouldForceOperation;
@property (nonatomic, retain) NSDictionary *signInContexts;
@property (nonatomic, retain) NSDictionary *signOutContexts;
@property (nonatomic, retain) UIViewController *viewController;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAaSignInFlowControllerDelegate:(id)arg1;
- (void)setAaSignOutFlowControllerDelegate:(id)arg1;
- (void)setAuthenticationResults:(id)arg1;
- (void)setCdpUiProvider:(id)arg1;
- (void)setOperationUIPermissions:(long long)arg1;
- (void)setShouldForceOperation:(bool)arg1;
- (void)setSignInContexts:(id)arg1;
- (void)setSignOutContexts:(id)arg1;
- (void)setViewController:(id)arg1;

@end
