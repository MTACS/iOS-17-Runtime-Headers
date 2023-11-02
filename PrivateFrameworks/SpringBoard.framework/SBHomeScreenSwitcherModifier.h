
@interface SBHomeScreenSwitcherModifier : SBSwitcherModifier {
    SBCoplanarSwitcherModifier * _coplanarModifier;
    _SBHomeScreenFloorSwitcherModifier * _homeScreenFloorModifier;
}

- (void).cxx_destruct;
- (id)init;

@end
