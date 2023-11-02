
@protocol MKCollectionUpdater <NSObject>

@required

- (void)appendBatchOfCollections:(NSArray *)arg1;
- (void)dismissedCollections;
- (void)updateCollections:(NSArray *)arg1 usingBatchedIdentifiers:(NSArray *)arg2 usingCollectionFetcher:(id <MKPlaceBatchFetcher>)arg3 usingBatchSize:(unsigned long long)arg4;
- (void)updateCollectionsWithoutPreparingSnapshot:(NSArray *)arg1 usingBatchedIdentifiers:(NSArray *)arg2 usingCollectionFetcher:(id <MKPlaceBatchFetcher>)arg3 usingGuideConsumer:(id <MKPlaceBatchConsumer>)arg4 usingBatchSize:(unsigned long long)arg5;
- (void)updateUsingBatchedIdentifiers:(NSArray *)arg1 usingCollectionFetcher:(id <MKPlaceBatchFetcher>)arg2 usingBatchSize:(unsigned long long)arg3;

@end
