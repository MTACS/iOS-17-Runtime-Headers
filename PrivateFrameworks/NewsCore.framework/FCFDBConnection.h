
@interface FCFDBConnection : NSObject <FCFDBConnectionReadable, FCFDBConnectionWritable> {
    struct sqlite3 { } * _db;
}

- (void)_prepareForUse;
- (void)beginTransaction;
- (void)commitTransaction;
- (void)dealloc;
- (void)deleteFeedItemIndexesFromFeedLookupID:(id)arg1 feedRange:(id)arg2;
- (void)deleteFeedItemsWithIDs:(id)arg1;
- (void)incrementalVacuum;
- (id)initWithPath:(id)arg1;
- (void)insertFeatureIndexesForFeedItems:(id)arg1 knownFeedsByID:(id)arg2;
- (void)insertFeedItems:(id)arg1 knownFeedsByID:(id)arg2;
- (void)insertFeeds:(id)arg1;
- (void)insertIndexesForFeedItems:(id)arg1 knownFeedsByID:(id)arg2;
- (id)selectAllFeedItemIDsWithFeedLookupIDs:(id)arg1 feedRange:(id)arg2;
- (id)selectFeedItemIDsWithFeedLookupIDs:(id)arg1 feedRange:(id)arg2 feature:(id)arg3 maxCount:(unsigned long long)arg4;
- (id)selectFeedItemsWithIDs:(id)arg1;
- (id)selectFeedsWithFeedIDs:(id)arg1;
- (long long)selectMaxFeedLookupID;

@end
