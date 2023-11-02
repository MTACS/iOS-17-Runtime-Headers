
@protocol FPItemCollectionItemIDBasedDelegate <FPItemCollectionMinimalDelegate>

@required

- (void)collection:(FPItemCollection *)arg1 didUpdateItems:(NSArray *)arg2 replaceItemsByFormerID:(NSDictionary *)arg3 deleteItemsWithIDs:(NSArray *)arg4;

@end
