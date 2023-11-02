
@interface NPKExpressModeSettingsCoordinator : NSObject {
    id /* block */  _completionHandler;
    LAContext * _currentContext;
    unsigned long long  _currentOperation;
    PKPass * _currentPass;
    <NPKExpressModeSettingsCoordinatorDelegate> * _delegate;
    PKExpressPassController * _expressPassController;
    bool  _expressStateUpdatePending;
    int  _notifyToken;
    NSMutableDictionary * _previousPassStates;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) LAContext *currentContext;
@property (nonatomic) unsigned long long currentOperation;
@property (nonatomic, retain) PKPass *currentPass;
@property (nonatomic) <NPKExpressModeSettingsCoordinatorDelegate> *delegate;
@property (nonatomic, retain) PKExpressPassController *expressPassController;
@property (nonatomic) bool expressStateUpdatePending;
@property (nonatomic) int notifyToken;
@property (nonatomic, retain) NSMutableDictionary *previousPassStates;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_checkForConflictsInEnablingExpressForPass:(id)arg1;
- (void)_enableExpressModeForPass:(id)arg1 withCredential:(id)arg2;
- (unsigned long long)_expressModeStateForPassWithUniqueID:(id)arg1;
- (unsigned long long)_expressModeStateForPassWithUniqueID:(id)arg1 fromControllerState:(id)arg2;
- (void)_handleExpressStateChange;
- (void)_handleFailedEnableExpress;
- (void)_handleFailedPassUpgrade;
- (void)_handleFailedUserAuthentication;
- (void)_handleSuccessForPass:(id)arg1;
- (void)_handleSuccessfulUserAuthenticationWithCredential:(id)arg1 forPass:(id)arg2;
- (void)_handleUserCancelled;
- (void)_invokeCompletionHandlerWithSuccess:(bool)arg1;
- (void)_requestUserAuthenticationForPass:(id)arg1;
- (void)_upgradeExpressModeForPass:(id)arg1 withCredential:(id)arg2;
- (id /* block */)completionHandler;
- (id)currentContext;
- (unsigned long long)currentOperation;
- (id)currentPass;
- (id)delegate;
- (void)disableExpressModeForPass:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)eligibleExpressUpgradeRequestsForPass:(id)arg1;
- (void)enableExpressModeForPass:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)expressAppletIdentifiersForPass:(id)arg1;
- (unsigned long long)expressModeStateForPass:(id)arg1;
- (id)expressPassController;
- (bool)expressStateUpdatePending;
- (bool)inSessionExpressEnabledForPass:(id)arg1;
- (id)initWithExpressPassController:(id)arg1 queue:(id)arg2;
- (bool)isExpressModeSupportedForPass:(id)arg1;
- (bool)needUpgradeForPass:(id)arg1;
- (int)notifyToken;
- (id)previousPassStates;
- (id)queue;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCurrentContext:(id)arg1;
- (void)setCurrentOperation:(unsigned long long)arg1;
- (void)setCurrentPass:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpressPassController:(id)arg1;
- (void)setExpressStateUpdatePending:(bool)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setPreviousPassStates:(id)arg1;
- (void)setQueue:(id)arg1;

@end
