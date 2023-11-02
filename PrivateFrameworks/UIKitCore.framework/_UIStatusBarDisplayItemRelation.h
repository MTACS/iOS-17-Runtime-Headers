
@interface _UIStatusBarDisplayItemRelation : NSObject

@property (getter=isFulfilled, nonatomic, readonly) bool fulfilled;
@property (nonatomic, readonly) NSArray *itemStates;

+ (id)allRelationWithRelations:(id)arg1;
+ (id)anyRelationWithRelations:(id)arg1;
+ (id)exclusionWithDisplayItemState:(id)arg1 placement:(id)arg2;
+ (id)requirementWithDisplayItemState:(id)arg1 placement:(id)arg2;

- (id)_ui_descriptionBuilder;
- (id)description;
- (bool)isFulfilled;
- (id)itemStates;
- (id)type;

@end
