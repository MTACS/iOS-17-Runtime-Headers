
@protocol FPSpotlightCollectorObserving <NSObject>

@required

- (void)collector:(FPSpotlightCollector *)arg1 didEncounterError:(NSError *)arg2;
- (void)collector:(FPSpotlightCollector *)arg1 didGatherItems:(NSArray *)arg2;
- (void)collector:(FPSpotlightCollector *)arg1 didRemoveItemIDs:(NSArray *)arg2;
- (void)collector:(FPSpotlightCollector *)arg1 didUpdateItems:(NSArray *)arg2;
- (void)collector:(FPSpotlightCollector *)arg1 didUpdateItemsOrigin:(unsigned long long)arg2;
- (NSPredicate *)itemPredicateForCollector:(FPSpotlightCollector *)arg1;
- (unsigned long long)maximumNumberOfItems;

@end
