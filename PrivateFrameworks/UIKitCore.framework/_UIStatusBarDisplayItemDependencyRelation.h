
@interface _UIStatusBarDisplayItemDependencyRelation : _UIStatusBarDisplayItemRelation {
    _UIStatusBarDisplayItemState * _itemState;
    _UIStatusBarDisplayItemPlacement * _placement;
    bool  _requirement;
}

@property (nonatomic) _UIStatusBarDisplayItemState *itemState;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacement *placement;
@property (nonatomic) bool requirement;

- (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
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
