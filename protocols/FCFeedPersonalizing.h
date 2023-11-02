
@protocol FCFeedPersonalizing <FCTagRanking>

@required

- (double)decayedPublisherDiversificationPenalty;
- (NSArray *)limitItemsByFlowRate:(NSArray *)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
- (NSArray *)limitItemsByMinimumItemQuality:(NSArray *)arg1;
- (void)prepareForUseWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (FCFeedPersonalizedItems *)sortItems:(NSArray *)arg1 options:(long long)arg2 configurationSet:(long long)arg3;

@optional

- (void)fetchAggregateMapForPersonalizingItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <FCFeedPersonalizingItem> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*

@end
