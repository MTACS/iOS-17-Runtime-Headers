
@interface SBModalAlertPresentationCoordinator : NSObject <BSDescriptionProviding> {
    NSMutableSet * _activeModalAlertPresenters;
    <SBModalAlertPresentationCoordinatorDelegate> * _delegate;
    NSMutableSet * _hideApplicationModalAlertAssertions;
    <BSInvalidatable> * _hideApplicationModalAlertsAssertionWhileSBModalAlertsActive;
    UIApplicationSceneDeactivationManager * _sceneDeactivationManager;
    SBModalAlertPresenter * _springBoardModalAlertPresenter;
    <BSInvalidatable> * _sysdiagnoseStateHandler;
    UIApplicationSceneDeactivationAssertion * _systemModalAlertsActiveSceneDeactivationAssertion;
}

@property (getter=canShowApplicationModalAlerts, nonatomic, readonly) bool canShowApplicationModalAlerts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBModalAlertPresentationCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isShowingModalAlert, nonatomic, readonly) bool showingModalAlert;
@property (getter=isShowingSystemModalAlert, nonatomic, readonly) bool showingSystemModalAlert;
@property (getter=_getSpringBoardPresenter, setter=_setSpringBoardPresenter:, nonatomic, retain) SBModalAlertPresenter *springBoardPresenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addModalAlertPresenterIfNecessary:(id)arg1;
- (void)_adjustApplicationSceneSettingsForModalAlertsAndFence:(bool)arg1;
- (id)_fencingTransitionContext:(bool)arg1;
- (id)_getSpringBoardPresenter;
- (void)_noteSpringBoardModalAlertStateChanged:(bool)arg1;
- (void)_removeModalAlertPresenter:(id)arg1;
- (void)_setSpringBoardPresenter:(id)arg1;
- (bool)canShowApplicationModalAlerts;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)hideApplicationModalAlertsForReason:(id)arg1;
- (id)initWithSceneDeactivationManager:(id)arg1;
- (bool)isShowingModalAlert;
- (bool)isShowingSystemModalAlert;
- (void)setDelegate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
