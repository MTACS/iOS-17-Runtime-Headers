
@interface FPExtensionDataSource : NSObject <FPCollectionDataSource, FPXEnumeratorObserver> {
    NSData * _changeToken;
    <FPCollectionDataSourceDelegate> * _delegate;
    bool  _enumeratingExtensionResults;
    FPExtensionEnumerationSettings * _enumerationSettings;
    <FPXEnumerator> * _enumerator;
    bool  _hasMoreIncoming;
    bool  _invalidated;
    <FPDLifetimeServicing> * _lifetimeExtender;
    NSData * _nextPageToken;
    unsigned long long  _numGatheredItems;
    NSMutableDictionary * _oobBuffer;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldUpdate;
    bool  _started;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FPCollectionDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMoreIncoming;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (void)setSuggestedBatchSize:(long long)arg1;
+ (void)setSuggestedPageSize:(long long)arg1;
+ (long long)suggestedBatchSize;
+ (long long)suggestedPageSize;

- (void).cxx_destruct;
- (void)_gatherInitialItems;
- (void)_gatherMoreItemsAfterPage:(id)arg1 section:(unsigned long long)arg2;
- (id)_initialPageFromSortDescriptors:(id)arg1;
- (void)_invalidate;
- (void)_invalidateWithError:(id)arg1;
- (void)_updateItems;
- (void)_updateItemsWithUpdatesCount:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (id)delegate;
- (id)description;
- (void)didUpdateItem:(id)arg1;
- (void)enumerationMightHaveResumed;
- (void)enumerationResultsDidChange;
- (bool)hasMoreIncoming;
- (id)initWithEnumerationSettings:(id)arg1;
- (void)invalidate;
- (void)invalidateWithError:(id)arg1;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)start;

@end
