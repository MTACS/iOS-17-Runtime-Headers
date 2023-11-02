
@interface SBDeviceApplicationSceneStatusBarBreadcrumbProvider : NSObject <SBDeviceApplicationSceneHandleObserver> {
    SBBreadcrumbActionContext * _currentBreadcrumbActionContext;
    NSHashTable * _observers;
    SBDeviceApplicationSceneHandle * _sceneHandle;
    SiriBreadcrumbSource * _siriSource;
}

@property (nonatomic, readonly, copy) NSString *breadcrumbTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBreadcrumb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_breadcrumbBundleIdForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
+ (id)_breadcrumbSceneIdForAppWithBundleID:(id)arg1 activatingSceneEntity:(id)arg2 withTransitionContext:(id)arg3;
+ (id)_breadcrumbTitleForAppWithBundleID:(id)arg1 sceneHandle:(id)arg2 activatingSceneEntity:(id)arg3 withTransitionContext:(id)arg4;
+ (bool)_canAddBreadcrumbActionToActivatingSceneEntity:(id)arg1 sceneHandle:(id)arg2 withTransitionContext:(id)arg3;
+ (id)_destinationContextsForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
+ (bool)_shouldAddBreadcrumbToActivatingSceneEntity:(id)arg1 sceneHandle:(id)arg2 withTransitionContext:(id)arg3;

- (void).cxx_destruct;
- (void)_activateBreadcrumbApplication:(id)arg1 withSceneIdentifier:(id)arg2;
- (id)_breadcrumbNavigationActionContextForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (void)_handleBreadcrumbAction;
- (void)_installedApplicationsDidChange:(id)arg1;
- (long long)_openStrategyForAppLinkState:(id)arg1;
- (void)_presentAssistantFromBreadcrumb;
- (void)_presentSpotlightFromBreadcrumb;
- (void)_setCurrentBreadcrumbActionContext:(id)arg1;
- (bool)_showTransientOvelayInPlace;
- (bool)activateBreadcrumbIfPossible;
- (void)addObserver:(id)arg1;
- (id)breadcrumbActionsForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (id)breadcrumbTitle;
- (void)captureContextForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)hasBreadcrumb;
- (id)initWithSceneHandle:(id)arg1;
- (void)noteDidUpdateDisplayProperties;
- (void)prepareForReuse;
- (void)removeObserver:(id)arg1;
- (void)sceneHandle:(id)arg1 didChangeEffectiveForegroundness:(bool)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
