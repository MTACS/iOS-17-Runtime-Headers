
@interface STUIStatusBarDisplayItemDependencyRelation : STUIStatusBarDisplayItemRelation {
    STUIStatusBarDisplayItemState * _itemState;
    STUIStatusBarDisplayItemPlacement * _placement;
    bool  _requirement;
}

@property (nonatomic) STUIStatusBarDisplayItemState *itemState;
@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *placement;
@property (nonatomic) bool requirement;

- (void).cxx_destruct;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 forDebug:(bool)arg2;
- (bool)isFulfilled;
- (id)itemState;
- (id)itemStates;
- (id)placement;
- (bool)requirement;
- (void)setItemState:(id)arg1;
- (void)setPlacement:(id)arg1;
- (void)setRequirement:(bool)arg1;
- (id)type;

@end
