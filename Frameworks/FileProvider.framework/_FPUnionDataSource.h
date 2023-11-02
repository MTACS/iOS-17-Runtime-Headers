
@interface _FPUnionDataSource : NSObject <FPCollectionDataSource, FPItemCollectionItemIDBasedDelegate> {
    NSArray * _collections;
    bool  _isRunning;
    <FPCollectionDataSourceDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FPCollectionDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMoreIncoming;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)collection:(id)arg1 didEncounterError:(id)arg2;
- (void)collection:(id)arg1 didUpdateItems:(id)arg2 replaceItemsByFormerID:(id)arg3 deleteItemsWithIDs:(id)arg4;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (id)delegate;
- (void)enumerationMightHaveResumed;
- (bool)hasMoreIncoming;
- (id)initWithCollections:(id)arg1;
- (void)invalidate;
- (void)setDelegate:(id)arg1;
- (void)start;

@end
