
@interface SBSplitAllDisplayItemsSwitcherModifier : SBSwitcherModifier {
    bool  _hasInvalidatedAppLayoutsForInsertion;
    bool  _hasInvalidatedAppLayoutsForRemoval;
}

@property (nonatomic) bool hasInvalidatedAppLayoutsForInsertion;
@property (nonatomic) bool hasInvalidatedAppLayoutsForRemoval;

- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)handleEvent:(id)arg1;
- (bool)hasInvalidatedAppLayoutsForInsertion;
- (bool)hasInvalidatedAppLayoutsForRemoval;
- (void)setHasInvalidatedAppLayoutsForInsertion:(bool)arg1;
- (void)setHasInvalidatedAppLayoutsForRemoval:(bool)arg1;

@end
