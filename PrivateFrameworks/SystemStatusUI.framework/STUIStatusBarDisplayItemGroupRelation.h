
@interface STUIStatusBarDisplayItemGroupRelation : STUIStatusBarDisplayItemRelation {
    NSArray * _relations;
    bool  _requiresAll;
}

@property (nonatomic, retain) NSArray *relations;
@property (nonatomic) bool requiresAll;

- (void).cxx_destruct;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 forDebug:(bool)arg2;
- (bool)isFulfilled;
- (id)itemStates;
- (id)relations;
- (bool)requiresAll;
- (void)setRelations:(id)arg1;
- (void)setRequiresAll:(bool)arg1;
- (id)type;

@end
