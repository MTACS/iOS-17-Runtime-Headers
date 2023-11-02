
@interface SBDeviceApplicationSceneStatusBarStateProvider_Base : NSObject <SBApplicationSceneStatusBarDescribing, SBApplicationSceneStatusBarDescribingInternal, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride> {
    NSMutableArray * _observers;
}

@property (nonatomic, readonly) NSSet *backgroundActivitiesToSuppress;
@property (nonatomic, readonly) SBDeviceApplicationSceneStatusBarBreadcrumbProvider *breadcrumbProvider;
@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *classicApplicationSceneHandleIfExists;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long defaultStatusBarStyle;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIStatusBarData *overlayStatusBarData;
@property (nonatomic, readonly) FBScene *sceneToHandleStatusBarTapIfExists;
@property (nonatomic, readonly) bool sceneWantsDeviceOrientationEventsEnabled;
@property (nonatomic, readonly) double statusBarAlpha;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } statusBarAvoidanceFrame;
@property (nonatomic, readonly) bool statusBarHidden;
@property (nonatomic, readonly) long long statusBarOrientation;
@property (nonatomic, readonly) NSString *statusBarSceneIdentifier;
@property (nonatomic, readonly) long long statusBarStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)SB_conformsToSBApplicationSceneStatusBarDescribing;
- (id)_allObservers;
- (long long)_defaultStatusBarStyle;
- (long long)_fallbackInterfaceOrientation;
- (id)_observerRecords;
- (double)_statusBarAlpha;
- (bool)_statusBarAppearsOutsideOfAJailedApp;
- (bool)_statusBarHiddenGivenFallbackOrientation:(long long)arg1;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (id)_statusBarPartStyles;
- (long long)_statusBarStyle;
- (long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(bool)arg2;
- (bool)_suppressInheritedPartStyles;
- (void)addStatusBarObserver:(id)arg1;
- (id)backgroundActivitiesToSuppress;
- (id)breadcrumbProvider;
- (id)classicApplicationSceneHandleIfExists;
- (long long)defaultStatusBarStyle;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)enumerateObserversWithBlock:(id /* block */)arg1;
- (id)init;
- (id)overlayStatusBarData;
- (void)removeStatusBarObserver:(id)arg1;
- (id)sceneToHandleStatusBarTapIfExists;
- (bool)sceneWantsDeviceOrientationEventsEnabled;
- (double)statusBarAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarAvoidanceFrame;
- (bool)statusBarHidden;
- (long long)statusBarOrientation;
- (id)statusBarPartStyles;
- (id)statusBarSceneIdentifier;
- (long long)statusBarStyle;
- (long long)statusBarStyleForPartWithIdentifier:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
