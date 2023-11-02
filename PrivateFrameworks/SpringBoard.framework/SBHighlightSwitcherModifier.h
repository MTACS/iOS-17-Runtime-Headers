
@interface SBHighlightSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _appLayout;
    long long  _layoutRole;
    SBAppLayout * _leafAppLayout;
    bool  _listensForHighlightEvents;
    unsigned long long  _phase;
    bool  _stylesCornerRadii;
}

@property (nonatomic) bool stylesCornerRadii;

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withCornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg3;
- (id)handleHighlightEvent:(id)arg1;
- (id)initWithLayoutRole:(long long)arg1 inAppLayout:(id)arg2 listensForHighlightEvents:(bool)arg3;
- (void)setStylesCornerRadii:(bool)arg1;
- (bool)shouldAccessoryDrawShadowForAppLayout:(id)arg1;
- (bool)stylesCornerRadii;
- (id)topMostLayoutElements;
- (id)topMostLayoutRolesForAppLayout:(id)arg1;

@end
