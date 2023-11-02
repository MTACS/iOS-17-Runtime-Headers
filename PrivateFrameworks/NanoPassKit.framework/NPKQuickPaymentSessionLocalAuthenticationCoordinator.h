
@interface NPKQuickPaymentSessionLocalAuthenticationCoordinator : NSObject <LAUIDelegate> {
    NSNumber * _activeLocalAuthenticationEvent;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    LAContext * _completedContext;
    NSData * _completedCredential;
    NSError * _completedError;
    id /* block */  _completionHandler;
    <NPKQuickPaymentSessionLocalAuthenticationCoordinatorCredentialDelegate> * _credentialDelegate;
    LAContext * _inProgressContext;
    NSObject<OS_dispatch_queue> * _localAuthenticationQueue;
    NSMutableArray * _pendingLocalAuthenticationEvents;
}

@property (nonatomic, retain) NSNumber *activeLocalAuthenticationEvent;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) LAContext *completedContext;
@property (nonatomic, retain) NSData *completedCredential;
@property (nonatomic, retain) NSError *completedError;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) <NPKQuickPaymentSessionLocalAuthenticationCoordinatorCredentialDelegate> *credentialDelegate;
@property (nonatomic, retain) LAContext *inProgressContext;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *localAuthenticationQueue;
@property (nonatomic, retain) NSMutableArray *pendingLocalAuthenticationEvents;

- (void).cxx_destruct;
- (void)_activateLocalAuthenticationEvent:(long long)arg1;
- (void)_cancelLocalAuthentication;
- (long long)_credentialTypeForEvent:(long long)arg1;
- (void)_deactivateLocalAuthenticationEvent:(long long)arg1;
- (void)_handleLocalAuthenticationPolicyEvaluatedWithContext:(id)arg1 error:(id)arg2;
- (void)_invokeCompletionHandlerForInvalidationWithError:(id)arg1;
- (id)_nameForLocalAuthenticationEvent:(long long)arg1;
- (void)_performDelegateCallback:(id /* block */)arg1;
- (void)_presentNextLocalAuthenticationEvent;
- (id)activeLocalAuthenticationEvent;
- (void)beginLocalAuthenticationWithAccessControl:(struct __SecAccessControl { }*)arg1 operation:(long long)arg2 completion:(id /* block */)arg3;
- (void)beginLocalAuthenticationWithCompletion:(id /* block */)arg1;
- (void)beginLocalAuthenticationWithPolicy:(long long)arg1 completion:(id /* block */)arg2;
- (id)callbackQueue;
- (id)completedContext;
- (id)completedCredential;
- (id)completedError;
- (id /* block */)completionHandler;
- (id)credentialDelegate;
- (void)event:(long long)arg1 params:(id)arg2 reply:(id /* block */)arg3;
- (id)inProgressContext;
- (id)initWithCallbackQueue:(id)arg1;
- (void)invalidateLocalAuthenticationContexts;
- (id)localAuthenticationQueue;
- (id)pendingLocalAuthenticationEvents;
- (void)setActiveLocalAuthenticationEvent:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setCompletedContext:(id)arg1;
- (void)setCompletedCredential:(id)arg1;
- (void)setCompletedError:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCredentialDelegate:(id)arg1;
- (void)setInProgressContext:(id)arg1;
- (void)setLocalAuthenticationQueue:(id)arg1;
- (void)setPendingLocalAuthenticationEvents:(id)arg1;

@end
