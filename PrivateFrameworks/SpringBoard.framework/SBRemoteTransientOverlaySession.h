
@interface SBRemoteTransientOverlaySession : NSObject <SBRemoteTransientOverlayViewControllerDelegate> {
    bool  _activated;
    BSTransaction * _activeTransaction;
    SBRemoteTransientOverlayViewController * _containerViewController;
    SBSRemoteAlertDefinition * _definition;
    NSError * _error;
    bool  _hasInitiatedPresentation;
    bool  _hasPresented;
    bool  _hasPresentedSecondaryVC;
    <SBRemoteTransientOverlaySessionHostDelegate> * _hostDelegate;
    NSMutableDictionary * _identifierToHandlingButtonEvents;
    NSHashTable * _observers;
    bool  _pendingInvalidation;
    NSMutableArray * _pendingTransactions;
    bool  _prefersEmbeddedDisplayPresentation;
    bool  _prepared;
    SBFSceneWorkspaceController * _sceneWorkspaceController;
    SBRemoteTransientOverlayViewController * _secondaryViewController;
    NSString * _sessionID;
    bool  _valid;
}

@property (getter=isActivated, nonatomic, readonly) bool activated;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) SBSRemoteAlertDefinition *definition;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBRemoteTransientOverlaySessionHostDelegate> *hostDelegate;
@property (getter=isPendingInvalidation, nonatomic, readonly) bool pendingInvalidation;
@property (getter=isPrepared, nonatomic, readonly) bool prepared;
@property (nonatomic, readonly, copy) NSString *sessionID;
@property (readonly) Class superclass;
@property (getter=isSwitcherEligible, nonatomic, readonly) bool switcherEligible;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)_actionForHandlingButtonEvents:(unsigned long long)arg1;
- (void)_addTransaction:(id)arg1;
- (void)_didActivate;
- (void)_didDeactivate;
- (id)_initWithSessionID:(id)arg1 definition:(id)arg2 sceneWorkspaceController:(id)arg3;
- (void)_invalidateWithReason:(long long)arg1 error:(id)arg2;
- (void)_processPendingTransactions;
- (void)_registerObserversForTransaction:(id)arg1;
- (void)_requestInvalidationWithReason:(long long)arg1 error:(id)arg2;
- (void)activateWithContext:(id)arg1;
- (void)addSessionObserver:(id)arg1;
- (void)deactivate;
- (void)dealloc;
- (id)definition;
- (id)error;
- (void)getActionForHandlingButtonEvents:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (bool)hasPendingButtonEvents:(unsigned long long)arg1;
- (bool)hasServiceProcessIdentifier:(int)arg1;
- (id)hostDelegate;
- (void)invalidate;
- (bool)isActivated;
- (bool)isPendingInvalidation;
- (bool)isPrepared;
- (bool)isSwitcherEligible;
- (bool)isValid;
- (void)prepareWithConfigurationContext:(id)arg1;
- (void)remoteTransientOverlayViewController:(id)arg1 didAppearAnimated:(bool)arg2;
- (void)remoteTransientOverlayViewController:(id)arg1 didDisappearAnimated:(bool)arg2;
- (void)remoteTransientOverlayViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (bool)remoteTransientOverlayViewController:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2;
- (id)remoteTransientOverlayViewController:(id)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2;
- (void)remoteTransientOverlayViewController:(id)arg1 willAppearAnimated:(bool)arg2;
- (void)remoteTransientOverlayViewControllerDidInvalidate:(id)arg1;
- (void)remoteTransientOverlayViewControllerRequestsDeactivation:(id)arg1;
- (void)remoteTransientOverlayViewControllerRequestsInvalidation:(id)arg1;
- (void)removeSessionObserver:(id)arg1;
- (id)sessionID;
- (void)setHostDelegate:(id)arg1;

@end
