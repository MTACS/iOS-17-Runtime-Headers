
@interface SBAppExposeToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppExposeGridSwitcherModifier * _appExposeModifier;
    NSString * _bundleIdentifier;
    long long  _direction;
}

- (void).cxx_destruct;
- (bool)_isEffectivelyHome;
- (id)_newAppExposeModifier;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 bundleIdentifier:(id)arg3 appExposeModifier:(id)arg4;
- (double)plusButtonAlpha;
- (id)transitionDidEnd;
- (id)transitionWillBegin;

@end
