
@interface NAGroupDiffOperation : NSObject <NADiffOperation> {
    NSNumber * _fromIndex;
    <NADiffableItemGroup> * _group;
    NSNumber * _toIndex;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *fromIndex;
@property (nonatomic, readonly) <NADiffableItemGroup> *group;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *operationDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSNumber *toIndex;
@property (nonatomic, readonly) unsigned long long type;

+ (id)deleteOperationWithGroup:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)insertOperationWithGroup:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)moveOperationWithGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)_operationDescriptionWithVerboseType:(bool)arg1;
- (id)description;
- (id)fromIndex;
- (id)group;
- (unsigned long long)hash;
- (id)initWithOperationType:(unsigned long long)arg1 group:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)operationDescription;
- (id)toIndex;
- (unsigned long long)type;

@end
