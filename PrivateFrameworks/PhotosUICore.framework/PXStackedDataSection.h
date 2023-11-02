
@interface PXStackedDataSection : PXDataSection {
    NSArray * _childDataSections;
    NSEnumerator * _childDataSectionsEnumerator;
    NSArray * _childDataSectionsStartIndexes;
    long long  _count;
    <NSFastEnumeration> * _currentEnumerator;
    unsigned long long * _currentEnumeratorMutationsPtr;
    unsigned long long  _enumerationMutations;
    NSDictionary * _nonEmptyChildDataSectionsIndexMap;
    NSIndexSet * _nonEmptyChildDataSectionsStartIndexSet;
}

@property (nonatomic, readonly, copy) NSArray *childDataSections;

+ (id)dataSectionForAssetsInCollections:(id)arg1;

- (void).cxx_destruct;
- (id)_nextEnumerator;
- (void)_resetEnumerationState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1;
- (id)childDataSections;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (long long)indexOfChildDataSourceForObjectAtIndex:(long long)arg1 localIndex:(long long*)arg2;
- (id)initWithChildDataSections:(id)arg1 outlineObject:(id)arg2;
- (long long)itemStartIndexForChildDataSourceAtIndex:(long long)arg1;
- (id)objectAtIndex:(long long)arg1;

@end
