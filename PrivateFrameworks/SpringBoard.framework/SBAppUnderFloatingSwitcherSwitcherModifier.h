
@interface SBAppUnderFloatingSwitcherSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _appLayout;
}

- (void).cxx_destruct;
- (id)appLayoutsToResignActive;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (id)initWithActiveAppLayout:(id)arg1;
- (id)keyboardSuppressionMode;
- (bool)wantsAsynchronousSurfaceRetentionAssertion;

@end
