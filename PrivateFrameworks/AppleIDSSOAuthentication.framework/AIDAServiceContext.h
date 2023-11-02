
@interface AIDAServiceContext : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary * __telemetryTimeSeries;
    <AASignInFlowControllerDelegate> * _aaSignInFlowControllerDelegate;
    <AASignOutFlowControllerDelegate> * _aaSignOutFlowControllerDelegate;
    NSDictionary * _authenticationResults;
    <CDPStateUIProvider> * _cdpUiProvider;
    long long  _operationUIPermissions;
    bool  _shouldForceOperation;
    NSDictionary * _signInContexts;
    NSDictionary * _signOutContexts;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) NSMutableDictionary *_telemetryTimeSeries;
@property (nonatomic, readonly) <AASignInFlowControllerDelegate> *aaSignInFlowControllerDelegate;
@property (nonatomic, readonly) <AASignOutFlowControllerDelegate> *aaSignOutFlowControllerDelegate;
@property (nonatomic, readonly, copy) NSDictionary *authenticationResults;
@property (nonatomic, readonly) <CDPStateUIProvider> *cdpUiProvider;
@property (nonatomic, readonly) long long operationUIPermissions;
@property (nonatomic, readonly) bool shouldForceOperation;
@property (nonatomic, readonly) NSDictionary *signInContexts;
@property (nonatomic, readonly) NSDictionary *signOutContexts;
@property (nonatomic, readonly) UIViewController *viewController;

+ (bool)accessInstanceVariablesDirectly;
+ (id)contextWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)_telemetryTimeSeries;
- (id)aaSignInFlowControllerDelegate;
- (id)aaSignOutFlowControllerDelegate;
- (id)authenticationResults;
- (id)cdpUiProvider;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)operationUIPermissions;
- (bool)shouldForceOperation;
- (id)signInContexts;
- (id)signOutContexts;
- (id)viewController;

@end
