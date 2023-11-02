
@protocol SearchUIBatchedCachePrewarmer <NSObject>

@required

- (NSArray *)batchingItemsForRowModel:(SearchUIRowModel *)arg1;
- (void)prewarmCacheForBatchedItems:(NSArray *)arg1;

@end
