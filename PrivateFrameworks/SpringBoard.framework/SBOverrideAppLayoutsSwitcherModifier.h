
@interface SBOverrideAppLayoutsSwitcherModifier : SBSwitcherModifier {
    NSArray * _appLayouts;
    unsigned long long  _appLayoutsGenerationCount;
    NSOrderedSet * _continuousExposeIdentifiers;
}

- (void).cxx_destruct;
- (id)appLayouts;
- (unsigned long long)appLayoutsGenerationCount;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithAppLayouts:(id)arg1;
- (void)setState:(long long)arg1;

@end
