
@protocol FPItemCollectionMinimalDelegate <NSObject>

@required

- (void)dataForCollectionShouldBeReloaded:(FPItemCollection *)arg1;

@optional

- (void)collection:(FPItemCollection *)arg1 didEncounterError:(NSError *)arg2;
- (void)collection:(FPItemCollection *)arg1 didUpdateObservedItem:(FPItem *)arg2;
- (void)collectionDidFinishGathering:(FPItemCollection *)arg1;
- (void)dataForCollectionShouldBeReloaded:(FPItemCollection *)arg1 deleteItemsWithIDs:(NSArray *)arg2;

@end
