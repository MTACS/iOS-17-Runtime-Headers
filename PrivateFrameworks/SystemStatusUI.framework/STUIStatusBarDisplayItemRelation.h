
@interface STUIStatusBarDisplayItemRelation : NSObject <BSDebugDescriptionProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFulfilled, nonatomic, readonly) bool fulfilled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *itemStates;
@property (readonly) Class superclass;

+ (id)allRelationWithRelations:(id)arg1;
+ (id)anyRelationWithRelations:(id)arg1;
+ (id)exclusionWithDisplayItemState:(id)arg1 placement:(id)arg2;
+ (id)requirementWithDisplayItemState:(id)arg1 placement:(id)arg2;

- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 forDebug:(bool)arg2;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)isFulfilled;
- (id)itemStates;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)type;

@end
