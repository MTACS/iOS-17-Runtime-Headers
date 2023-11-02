
@interface PXMutableArrayChangeDetails : PXArrayChangeDetails {
    bool  _isNonIncremental;
}

+ (bool)_mutableCopyInputs;
+ (id)changeDetailsWithNoIncrementalChanges;

- (void)_addAdditionalRemovedIndex:(unsigned long long)arg1 afterChangesIndex:(unsigned long long)arg2;
- (void)_addAdditionalRemovedIndexSet:(id)arg1 afterChangesIndex:(id)arg2;
- (void)_addInsertedIndexes:(id)arg1;
- (void)_addInsertedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_addRemovedIndex:(unsigned long long)arg1;
- (void)_addRemovedIndexes:(id)arg1;
- (void)_becomeNonIncremental;
- (void)_removeInsertForRemovedIndexAfterChanges:(unsigned long long)arg1;
- (void)_updateChangedIndexesWithChangeDetails:(id)arg1;
- (void)_updateMovesWithChangesDetails:(id)arg1;
- (void)_updatePropertyChangesWithChangeDetails:(id)arg1;
- (void)addChangeDetails:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasIncrementalChanges;

@end
