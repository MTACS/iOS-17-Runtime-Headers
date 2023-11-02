
@interface SBShelfIconBounceTransitionModifier : SBTransitionSwitcherModifier {
    SBSwitcherShelf * _shelf;
}

- (void).cxx_destruct;
- (id)appLayoutsToResignActive;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (id)bounceIconBundleIdentifier;
- (unsigned long long)bounceIconGenerationCountForCurrentCount:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounceIconInitialFrame;
- (id)initWithTransitionID:(id)arg1 shelf:(id)arg2;
- (id)keyboardSuppressionMode;

@end
