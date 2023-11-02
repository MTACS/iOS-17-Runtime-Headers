
@interface SBMainDisplayLayoutStateManager : SBLayoutStateManager

@property (nonatomic, readonly) SBApplicationController *_applicationController;
@property (nonatomic, readonly) SBMainWorkspace *_mainWorkspace;
@property (nonatomic, readonly) SBPlatformController *_platformController;
@property (nonatomic, readonly) SBRecentAppLayouts *_recentAppLayouts;

+ (id)_initialLayoutStateWithDisplayOrdinal:(long long)arg1 isDisplayExternal:(bool)arg2;
+ (Class)_layoutStateClass;

- (id)_applicationController;
- (id)_applicationSceneEntityFromApplicationBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 displayIdentity:(id)arg3;
- (bool)_doesSceneIDSpecifyPrimaryScene:(id)arg1 forApplicationIdentifier:(id)arg2 sceneSessionRole:(id)arg3;
- (bool)_hasAppLayoutBeenUserKilledWithinThresholdToCreateNewScene:(id)arg1;
- (id)_layoutStateForApplicationTransitionContext:(id)arg1;
- (id)_layoutStateForDisplayIdentity:(id)arg1;
- (id)_mainWorkspace;
- (id)_mostRecentAppLayoutForBundleIdentifier:(id)arg1 ignoringUniqueIdentifiers:(id)arg2 chamoisWindowingUIEnabled:(bool)arg3 multitaskingSupported:(bool)arg4;
- (id)_mostRecentAppLayoutMatchingAnyUniqueIdentifier:(id)arg1 chamoisWindowingUIEnabled:(bool)arg2 multitaskingSupported:(bool)arg3;
- (id)_platformController;
- (id)_recentAppLayouts;
- (id)_sceneIDIfAppLayoutContainsPrimarySceneIDForBundleIdentifier:(id)arg1 bundleIdentifier:(id)arg2 sceneSessionRole:(id)arg3;
- (id)_sceneManagerForDisplayIdentity:(id)arg1;
- (id)_switcherControllerForDisplayIdentity:(id)arg1;
- (id)defaultSceneIdentifierForBundleIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(bool)arg3 preferNewScene:(bool)arg4 visibleSceneIdentifiers:(id)arg5 excludingSceneIdentifiers:(id)arg6 sceneSessionRole:(id)arg7;
- (id)defaultSceneIdentifierForBundleIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(bool)arg3 preferNewScene:(bool)arg4 visibleSceneIdentifiers:(id)arg5 excludingSceneIdentifiers:(id)arg6 sceneSessionRole:(id)arg7 preferredDisplay:(id)arg8;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (id)primarySceneIdentifierForBundleIdentifier:(id)arg1 sceneSessionRole:(id)arg2 displayIdentity:(id)arg3;

@end
