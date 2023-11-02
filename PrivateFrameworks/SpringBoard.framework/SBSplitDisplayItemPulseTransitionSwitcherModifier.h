
@interface SBSplitDisplayItemPulseTransitionSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _appLayout;
    long long  _floatingConfiguration;
    bool  _isChamoisWindowingUIEnabled;
    long long  _layoutRole;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) bool isChamoisWindowingUIEnabled;
@property (nonatomic, readonly) long long layoutRole;

- (void).cxx_destruct;
- (id)_previousHomeAffordanceAppLayout;
- (id)appLayout;
- (id)appLayoutsToResignActive;
- (double)backgroundOpacityForIndex:(unsigned long long)arg1;
- (bool)completesWhenChildrenComplete;
- (id)containerLeafAppLayoutForShelf:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForShelf:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)homeAffordanceLayoutElementToPortalIntoShelf:(id)arg1;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 layoutRole:(long long)arg3 chamoisWindowingUIEnabled:(bool)arg4;
- (bool)isChamoisWindowingUIEnabled;
- (long long)layoutRole;
- (id)topMostLayoutElements;
- (id)visibleHomeAffordanceLayoutElements;

@end
