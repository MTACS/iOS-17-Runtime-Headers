
@interface STUIStatusBarDisplayItemPlacementState : NSObject <STUIStatusBarPrioritized> {
    STUIStatusBarDisplayItemPlacement * _placement;
    STUIStatusBarRegion * _region;
    NSMutableArray * _relations;
}

@property (nonatomic, readonly) bool canBeEnabled;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) STUIStatusBarDisplayItemPlacement *placement;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) STUIStatusBarRegion *region;
@property (nonatomic, retain) NSMutableArray *relations;
@property (getter=areRelationsFulfilled, nonatomic, readonly) bool relationsFulfilled;

+ (id)stateForDisplayItemPlacement:(id)arg1 region:(id)arg2;

- (void).cxx_destruct;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 forDebug:(bool)arg2;
- (bool)areRelationsFulfilled;
- (bool)canBeEnabled;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)isEnabled;
- (id)placement;
- (long long)priority;
- (id)region;
- (id)relations;
- (void)setRelations:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
