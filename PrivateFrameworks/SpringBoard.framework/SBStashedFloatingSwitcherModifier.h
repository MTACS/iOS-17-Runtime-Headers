
@interface SBStashedFloatingSwitcherModifier : SBSwitcherModifier {
    SBActiveAppLayoutFloatingSwitcherModifier * _activeModifier;
}

- (void).cxx_destruct;
- (id)handleTapSlideOverTongueEvent:(id)arg1;
- (id)initWithFloatingConfiguration:(long long)arg1 environmentMode:(long long)arg2;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (id)visibleAppLayouts;

@end
