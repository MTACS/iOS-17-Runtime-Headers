
@interface SBDragAndDropToAppTransitionSwitcherModifier : SBTransitionSwitcherModifier

- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appLayoutsToResignActive;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (id)keyboardSuppressionMode;
- (bool)shouldPerformCrossfadeForReduceMotion;

@end
