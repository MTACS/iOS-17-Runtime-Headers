
@interface _UIScreenBasedWindowScene : UIWindowScene {
    NSMutableSet * _autoInvalidationPreventionAssertions;
    bool  _invalidationEvaluatorRegistered;
    <NSCopying> * _lookupKey;
    bool  _needsInvalidation;
    UIScreen * _screen;
    <BSInvalidatable> * _screenDisconnectionPreventionAssertion;
    UIMutableApplicationSceneSettings * _synthesizedSettings;
}

+ (id)_unassociatedWindowSceneForScreen:(id)arg1 create:(bool)arg2;
+ (bool)alwaysKeepContexts;
+ (bool)autoInvalidates;
+ (bool)shouldAllowComponents;
+ (id)unassociationCache;
+ (id)unassociationCacheAccessQueue;

- (void).cxx_destruct;
- (void)_addSubclassDebugDescriptionWithBuilder:(id)arg1;
- (void)_addSubclassFlagsToDebugDescriptionWithBuilder:(id)arg1;
- (void)_applyOverridesToHostedSceneSettings:(id)arg1;
- (void)_attachWindow:(id)arg1;
- (void)_detachWindow:(id)arg1;
- (id)_displayInfoProvider;
- (void)_invalidate;
- (void)_openURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceBoundsForOrientation:(long long)arg1;
- (void)_removeAutoInvalidationPreventionAssertion:(id)arg1;
- (void)_screenDisconnected:(id)arg1;
- (void)_screenInterfaceOrientationChanged:(id)arg1;
- (void)_setKeepContextAssociationInBackground:(bool)arg1;
- (bool)_shouldAllowFencing;
- (id)_synthesizedSettings;
- (void)_updateClientSettingsToInterfaceOrientation:(long long)arg1 withAnimationDuration:(double)arg2;
- (bool)_usesMinimumSafeAreaInsets;
- (id)initWithScreen:(id)arg1 session:(id)arg2 lookupKey:(id)arg3;
- (id)screen;
- (void)setDelegate:(id)arg1;

@end
