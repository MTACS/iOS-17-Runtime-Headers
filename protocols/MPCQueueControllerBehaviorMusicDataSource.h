
@protocol MPCQueueControllerBehaviorMusicDataSource <MPShuffleableSectionedIdentifierListDataSource>

@required

- (bool)containsLiveStream;
- (bool)containsTransportableContentWithReason:(id*)arg1;
- (MPIdentifierSet *)identifiersForItem:(NSString *)arg1 inSection:(NSString *)arg2;
- (MPAVItem *)itemForItem:(NSString *)arg1 inSection:(NSString *)arg2;
- (void)loadPlaybackContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: MPPlaybackContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, ICURLAggregatedPerformanceMetrics *, NSError *, void*
- (MPModelPlayEvent *)modelPlayEventForItem:(NSString *)arg1 inSection:(NSString *)arg2;
- (bool)supportsAutoPlayForItem:(NSString *)arg1 inSection:(NSString *)arg2;

@optional

- (bool)canJumpToItem:(NSString *)arg1 reason:(id*)arg2;
- (bool)canSkipItem:(NSString *)arg1 reason:(id*)arg2;
- (bool)containsRadioContent;
- (NSString *)firstItemIntersectingIdentifierSet:(MPIdentifierSet *)arg1;
- (void)itemDidBeginPlayback:(MPAVItem *)arg1;
- (void)loadAdditionalItemsWithCount:(void *)arg1 forSection:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (MPPlaceholderAVItem *)placeholderItemForLoadingAdditionalItemsInSection:(NSString *)arg1;
- (long long)prefetchThresholdForSection:(NSString *)arg1;
- (bool)shouldRequestAdditionalItemsWhenReachingTailOfSection:(NSString *)arg1;
- (bool)shouldUsePlaceholderForItem:(NSString *)arg1 inSection:(NSString *)arg2;

@end
