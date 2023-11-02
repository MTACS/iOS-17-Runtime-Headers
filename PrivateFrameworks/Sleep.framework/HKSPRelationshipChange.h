
@interface HKSPRelationshipChange : HKSPChange

@property (nonatomic, readonly) <HKSPMutableObject> *changedValue;
@property (nonatomic, readonly) bool isAdd;
@property (nonatomic, readonly) bool isRemove;
@property (nonatomic, readonly) bool isUpdate;
@property (nonatomic, readonly) <HKSPObject> *originalValue;

- (id)deepCopy;
- (id)initWithProperty:(id)arg1 changedObject:(id)arg2 originalObject:(id)arg3;
- (bool)isAdd;
- (bool)isRemove;
- (bool)isUpdate;

@end
