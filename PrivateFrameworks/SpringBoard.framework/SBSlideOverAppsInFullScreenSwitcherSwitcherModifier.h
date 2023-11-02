
@interface SBSlideOverAppsInFullScreenSwitcherSwitcherModifier : SBSwitcherModifier {
    bool  _haveInvalidatedAppLayouts;
}

- (id)_handleEvent:(id)arg1;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;

@end
