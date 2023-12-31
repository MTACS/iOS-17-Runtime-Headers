
@interface PLIndexMapper : NSObject {
    <PLIndexMapperDataSource> * _dataSource;
}

- (bool)applyContainerChangeNotification:(id)arg1 changeTypes:(int)arg2 toFilteredIndexes:(id)arg3;
- (unsigned long long)backingIndexForIndex:(unsigned long long)arg1;
- (id)backingIndexesForIndexes:(id)arg1;
- (unsigned long long)indexForBackingIndex:(unsigned long long)arg1;
- (id)indexesForBackingIndexes:(id)arg1;
- (id)initWithDataSource:(id)arg1;

@end
