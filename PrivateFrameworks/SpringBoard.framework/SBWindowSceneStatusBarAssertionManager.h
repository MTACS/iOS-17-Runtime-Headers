
@interface SBWindowSceneStatusBarAssertionManager : NSObject <BSDescriptionProviding, UIStatusBarManager> {
    bool  _changingStatusBarAlpha;
    bool  _changingStatusBarStyle;
    SBStatusBarSettings * _currentStatusBarSettings;
    NSHashTable * _disableAlphaChangeAssertions;
    NSHashTable * _disableUserInteractionChangeAssertions;
    NSHashTable * _hideStatusBarAssertions;
    NSHashTable * _observers;
    <BSInvalidatable> * _stateCaptureAssertion;
    unsigned long long  _statusBarAlphaAnimationCount;
    NSPointerArray * _statusBarSettingsAssertionsByLevel;
    SBWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addDisableWindowSceneStatusBarAlphaChangesAssertion:(id)arg1;
- (void)_addDisableWindowSceneStatusBarUserInteractionChangesAssertion:(id)arg1;
- (void)_addStatusBarSettingsAssertion:(id)arg1;
- (void)_addStatusBarSettingsAssertion:(id)arg1 withAnimationParameters:(id)arg2;
- (void)_cleanUpAllStatusBarSettingsAssertions;
- (id)_descriptionForPropertyWithAssertions:(id)arg1;
- (void)_enumerateAssertionsToLevel:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
- (void)_evaluateSettingsWithStyleAnimations:(id)arg1;
- (void)_modifiedStatusBarSettingsAssertion:(id)arg1;
- (void)_modifiedStatusBarSettingsAssertion:(id)arg1 withAnimationParameters:(id)arg2;
- (void)_removeDisableWindowSceneStatusBarAlphaChangesAssertion:(id)arg1;
- (void)_removeDisableWindowSceneStatusBarUserInteractionChangesAssertion:(id)arg1;
- (void)_removeStatusBarSettingsAssertion:(id)arg1;
- (void)_removeStatusBarSettingsAssertion:(id)arg1 withAnimationParameters:(id)arg2;
- (void)_resolveEffectiveStatusBarStyleForSettings:(id)arg1;
- (void)_setStatusBarValueForPropertyWithAssertions:(id)arg1 setter:(id /* block */)arg2;
- (void)_statusBarUpdatedFromSettings:(id)arg1 toSettings:(id)arg2 withAnimations:(id)arg3;
- (id)_styleRequestForSettings:(id)arg1;
- (id)acquireDisableAlphaChangesAssertionWithReason:(id)arg1;
- (id)acquireDisableUserInteractionChangesAssertionWithReason:(id)arg1;
- (id)acquireHideFrontmostStatusBarAssertionForReason:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)currentEffectiveStatusBarStyleRequest;
- (id)currentStatusBarSettings;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)effectiveStatusBarStyleForRequestedStyle:(long long)arg1 styleOverridesToSuppress:(unsigned long long)arg2;
- (id)effectiveStatusBarStyleRequestForLevel:(unsigned long long)arg1;
- (id)effectiveStatusBarStyleRequestWithSettings:(id)arg1;
- (id)initWithWindowScene:(id)arg1;
- (bool)isFrontmostStatusBarHidden;
- (bool)isFrontmostStatusBarPartHidden:(long long)arg1;
- (id)newSettingsAssertionWithSettings:(id)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3;
- (id)newSettingsAssertionWithStatusBarHidden:(bool)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3;
- (void)removeObserver:(id)arg1;
- (id)statusBar:(id)arg1 effectiveBackgroundActivitiesForBackgroundActiviesWithIdentifiers:(id)arg2;
- (unsigned long long)statusBar:(id)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(unsigned long long)arg3;
- (bool)statusBar:(id)arg1 shouldRequestStyle:(long long)arg2 animationParameters:(id)arg3 forced:(bool)arg4;
- (bool)statusBar:(id)arg1 shouldRequestStyleAttributes:(id)arg2 animationParameters:(id)arg3 forced:(bool)arg4;
- (bool)statusBar:(id)arg1 shouldSetAlpha:(double)arg2;
- (id)statusBarSettingsForLevel:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
