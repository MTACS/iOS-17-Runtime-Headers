
@interface SBOverrideParentAppLayoutSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _childAppLayout;
    SBAppLayout * _parentAppLayout;
}

@property (nonatomic, readonly) SBAppLayout *childAppLayout;
@property (nonatomic, readonly) SBAppLayout *parentAppLayout;

- (void).cxx_destruct;
- (id)appLayoutContainingAppLayout:(id)arg1;
- (id)appLayoutsContainedWithinAppLayout:(id)arg1;
- (id)childAppLayout;
- (id)initWithChildAppLayout:(id)arg1 newParentAppLayout:(id)arg2;
- (id)parentAppLayout;

@end
