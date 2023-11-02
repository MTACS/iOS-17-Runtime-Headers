
@protocol FCFDBConnectionReadable

@required

- (NSArray *)selectFeedItemIDsWithFeedLookupIDs:(NSArray *)arg1 feedRange:(FCFeedRange *)arg2 feature:(FCFeedItemFeature *)arg3 maxCount:(unsigned long long)arg4;
- (NSDictionary *)selectFeedItemsWithIDs:(NSArray *)arg1;
- (NSDictionary *)selectFeedsWithFeedIDs:(NSArray *)arg1;
- (long long)selectMaxFeedLookupID;

@end
