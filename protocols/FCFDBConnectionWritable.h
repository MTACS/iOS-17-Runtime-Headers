
@protocol FCFDBConnectionWritable <FCFDBConnectionReadable>

@required

- (void)beginTransaction;
- (void)commitTransaction;
- (void)deleteFeedItemIndexesFromFeedLookupID:(NSNumber *)arg1 feedRange:(FCFeedRange *)arg2;
- (void)deleteFeedItemsWithIDs:(NSArray *)arg1;
- (void)incrementalVacuum;
- (void)insertFeatureIndexesForFeedItems:(NSArray *)arg1 knownFeedsByID:(NSDictionary *)arg2;
- (void)insertFeedItems:(NSArray *)arg1 knownFeedsByID:(NSDictionary *)arg2;
- (void)insertFeeds:(NSArray *)arg1;
- (void)insertIndexesForFeedItems:(NSArray *)arg1 knownFeedsByID:(NSDictionary *)arg2;

@end
