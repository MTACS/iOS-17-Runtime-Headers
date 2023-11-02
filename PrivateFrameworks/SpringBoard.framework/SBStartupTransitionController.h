
@interface SBStartupTransitionController : NSObject <BSDescriptionProviding, BSTransactionObserver> {
    SBInitialRestartState * _initialRestartState;
    bool  _ranOnce;
    NSSet * _renderOverlayDismissActions;
    BSTransaction<SBStartupTransition> * _transition;
    SBStartupTransitionContextPersistence * _transitionContextPersistence;
    SBStartupTransitionFactory * _transitionFactory;
    BSTransactionBlockObserver * _transitionObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BSTransaction<SBStartupTransition> *startupTransition;
@property (readonly) Class superclass;
@property (getter=_transitionContextPersistence, setter=_setTransitionContextPersistence:, nonatomic, retain) SBStartupTransitionContextPersistence *transitionContextPersistence;
@property (getter=_transitionFactory, setter=_setTransitionFactory:, nonatomic, retain) SBStartupTransitionFactory *transitionFactory;

- (void).cxx_destruct;
- (void)_saveContextFromTransitionContext:(id)arg1;
- (void)_setTransitionContextPersistence:(id)arg1;
- (void)_setTransitionFactory:(id)arg1;
- (id)_transitionContextPersistence;
- (id)_transitionFactory;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithInitialRestartState:(id)arg1;
- (void)initializeAndRunStartupTransition:(id /* block */)arg1;
- (id)startupTransition;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)transactionDidBegin:(id)arg1;
- (void)transactionDidComplete:(id)arg1;

@end
