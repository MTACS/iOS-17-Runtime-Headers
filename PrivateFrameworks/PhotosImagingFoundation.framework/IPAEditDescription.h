
@interface IPAEditDescription : NSObject <IPAEditOperationOrdering, NSCopying, NSFastEnumeration> {
    NSArray * _operations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)containsValidOperations:(id)arg1;
+ (Class)expectedOperationClass;
+ (unsigned long long)insertIndexForOperationWithIdentifier:(id)arg1 inArray:(id)arg2 withOrdering:(id)arg3;
+ (id)presetifyAdjustmentStack:(id)arg1;
+ (id)sortOperations:(id)arg1 withOrdering:(id)arg2;

- (void).cxx_destruct;
- (id)_debugDescriptionSuffix;
- (id)_init;
- (id)_operationAtIndex:(unsigned long long)arg1;
- (id)_operations;
- (id)archivalRepresentation;
- (bool)containsOperationWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)debugDescription;
- (id)description;
- (id)descriptionByAddingOperation:(id)arg1;
- (id)descriptionByAddingOperation:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)descriptionByRemovingOperation:(id)arg1;
- (id)descriptionByRemovingOperationAtIndex:(unsigned long long)arg1;
- (id)descriptionByRemovingOperationsStartingAtIndex:(unsigned long long)arg1;
- (id)descriptionByReplacingOperation:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)descriptionWithOperations:(id)arg1;
- (id)descriptionWithOperationsUpToUUID:(id)arg1;
- (unsigned long long)firstIndexOfOperationWithIdentifier:(id)arg1;
- (id)firstOperationWithIdentifier:(id)arg1;
- (void)forEachImmutableOperation:(id /* block */)arg1;
- (unsigned long long)indexOfOperationWithUUID:(id)arg1;
- (id)init;
- (id)initWithOperations:(id)arg1;
- (unsigned long long)insertIndexForOperationWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDescription:(id)arg1;
- (bool)isEqualToDescriptionRenderOperations:(id)arg1;
- (id)operationAtIndex:(unsigned long long)arg1;
- (unsigned long long)operationCount;
- (id)operationWithUUID:(id)arg1;
- (id)operations;
- (unsigned long long)sortOrderForOperationWithIdentifier:(id)arg1;
- (void)withImmutableOperationAtIndex:(unsigned long long)arg1 block:(id /* block */)arg2;

@end
