
@protocol FPCollectionDataSourceDelegate

@required

- (void)dataSource:(id <FPCollectionDataSource>)arg1 receivedUpdatedItems:(NSArray *)arg2 deletedItems:(NSArray *)arg3 hasMoreChanges:(bool)arg4;
- (void)dataSource:(id <FPCollectionDataSource>)arg1 replaceContentsWithItems:(NSArray *)arg2 hasMoreChanges:(bool)arg3;
- (void)dataSource:(id <FPCollectionDataSource>)arg1 wasInvalidatedWithError:(NSError *)arg2;
- (bool)dataSourceShouldAlwaysReplaceContents:(id <FPCollectionDataSource>)arg1;
- (unsigned long long)lastForcedUpdate;

@end
