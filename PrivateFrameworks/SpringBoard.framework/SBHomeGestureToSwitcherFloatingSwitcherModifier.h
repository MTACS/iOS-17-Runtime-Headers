
@interface SBHomeGestureToSwitcherFloatingSwitcherModifier : SBTransitionSwitcherModifier {
    SBFluidSwitcherAnimationSettings * _animationSettings;
    SBSwitcherModifier * _multitaskingModifier;
    SBAppLayout * _selectedAppLayout;
}

@property (nonatomic, retain) SBFluidSwitcherAnimationSettings *animationSettings;
@property (nonatomic, retain) SBSwitcherModifier *multitaskingModifier;
@property (nonatomic, retain) SBAppLayout *selectedAppLayout;

- (void).cxx_destruct;
- (id)_layoutSettings;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)animationSettings;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (id)initWithTransitionID:(id)arg1 multitaskingModifier:(id)arg2 selectedAppLayout:(id)arg3;
- (id)multitaskingModifier;
- (id)selectedAppLayout;
- (void)setAnimationSettings:(id)arg1;
- (void)setMultitaskingModifier:(id)arg1;
- (void)setSelectedAppLayout:(id)arg1;
- (id)transitionWillBegin;
- (id)visibleAppLayouts;

@end
