
@protocol BRItemCollectionGathererDelegate <NSObject>

@required

- (void)itemCollectionGathererDidInvalidate;
- (void)itemCollectionGathererDidReceiveUpdates:(NSArray *)arg1 deleteItemsWithIDs:(NSArray *)arg2;
- (void)itemCollectionGathererFinishedGathering;
- (void)itemCollectionGathererGatheredItems:(NSArray *)arg1;

@end
