
@interface PXAssetSortByDatesFetchResult : NSObject {
    NSDictionary * _dateByIndex;
    NSIndexSet * _fetchedIndexes;
    NSSortDescriptor * _sortDescriptor;
}

@property (nonatomic, readonly) NSDictionary *dateByIndex;
@property (nonatomic, readonly) NSIndexSet *fetchedIndexes;
@property (nonatomic, readonly) NSSortDescriptor *sortDescriptor;

- (void).cxx_destruct;
- (id)dateByIndex;
- (void)enumerateFetchedItemsUsingBlock:(id /* block */)arg1;
- (id)fetchedIndexes;
- (id)initWithSortDescriptor:(id)arg1 fetchedIndexes:(id)arg2 dateByIndex:(id)arg3;
- (id)sortDescriptor;

@end
