
@interface MKPlaceBatchController : NSObject <MKPlaceBatchDisplayCoordinator> {
    <MKPlaceBatchConsumer> * _batchConsumer;
    NSObject<OS_dispatch_queue> * _batchControllerQueue;
    <MKPlaceBatchFetcher> * _batchFetcher;
    unsigned long long  _batchSize;
    NSArray * _batches;
    long long  _lastDisplayedIndex;
    long long  _lastFetchedBatch;
    unsigned long long  _minNumberOfItems;
    unsigned long long  _numberOfBatches;
    long long  _state;
    unsigned long long  _totalIdentifiers;
    unsigned long long  _totalIdentifiersFetched;
}

@property (nonatomic) <MKPlaceBatchConsumer> *batchConsumer;
@property (nonatomic) <MKPlaceBatchFetcher> *batchFetcher;
@property (nonatomic) unsigned long long batchSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long minNumberOfItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)batchConsumer;
- (id)batchFetcher;
- (unsigned long long)batchSize;
- (id)batchesForTesting;
- (void)buildBatchesFromIdentifiers:(id)arg1;
- (void)didDisplayItemAtIndex:(unsigned long long)arg1;
- (void)fetchBatchItemsWithIdentifiers:(id)arg1;
- (void)handleFetchGuidesCompleted:(bool)arg1 error:(id)arg2 usingGuides:(id)arg3;
- (id)initWithItemIdentifiers:(id)arg1 withBatchSize:(unsigned long long)arg2 minimumNumberOfItemBeforeFetching:(unsigned long long)arg3 shouldLoadFirstBatchImmediately:(bool)arg4 usingBatchFetcher:(id)arg5 usingBatchConsumer:(id)arg6 displayedItemCount:(unsigned long long)arg7;
- (long long)lastDisplayedIndexForTesting;
- (long long)lastFetchedBatchForTesting;
- (unsigned long long)minNumberOfItems;
- (void)setBatchConsumer:(id)arg1;
- (void)setBatchFetcher:(id)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setMinNumberOfItems:(unsigned long long)arg1;
- (long long)stateForTesting;

@end
