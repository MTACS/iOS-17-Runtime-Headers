
@interface SBShelfSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _activeFloatingAppLayout;
    SBAppLayout * _activeFullScreenAppLayout;
    unsigned long long  _animationStyle;
    unsigned long long  _contentOptions;
    bool  _isPendingDismissal;
    bool  _isPendingDismissalFromGesture;
    long long  _layoutRole;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _presentationTargetFrame;
    SBAppLayout * _presentedFromAppLayout;
    SBSwitcherShelf * _shelf;
}

@property (nonatomic, readonly) SBSwitcherShelf *shelf;

+ (unsigned long long)contentOptionsForTransitionEvent:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_responseForDismissingIfNeededGestureInitiated:(bool)arg1;
- (id)containerLeafAppLayoutForShelf:(id)arg1;
- (id)focusedAppLayoutForShelf:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForShelf:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)homeAffordanceLayoutElementToPortalIntoShelf:(id)arg1;
- (id)ignoredDisplayItemsForShelf:(id)arg1;
- (id)initWithShelf:(id)arg1 contentOptions:(unsigned long long)arg2 activeFullScreenAppLayout:(id)arg3 activeFloatingAppLayout:(id)arg4 presentationTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 presentedFromAppLayout:(id)arg6;
- (struct SBSwitcherShelfPresentationAttributes { bool x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; unsigned long long x3; unsigned long long x4; })presentationAttributesForShelf:(id)arg1;
- (id)shelf;
- (id)topMostLayoutElements;
- (id)visibleShelves;

@end
