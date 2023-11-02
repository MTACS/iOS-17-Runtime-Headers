
@interface SCWWatchlistOrderDiff : NSObject {
    NSArray * _addedWatchlistIDs;
    NSDictionary * _indexesOfAddedWatchlistIDs;
    NSDictionary * _indexesOfReorderedWatchlistIDs;
    NSArray * _removedWatchlistIDs;
    NSArray * _reorderedWatchlistIDs;
    NSArray * _watchlistIDsPostDiff;
    NSArray * _watchlistIDsPreDiff;
}

@property (nonatomic, readonly, copy) NSArray *addedWatchlistIDs;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly, copy) NSDictionary *indexesOfAddedWatchlistIDs;
@property (nonatomic, readonly, copy) NSDictionary *indexesOfReorderedWatchlistIDs;
@property (nonatomic, readonly, copy) NSArray *removedWatchlistIDs;
@property (nonatomic, readonly, copy) NSArray *reorderedWatchlistIDs;
@property (nonatomic, readonly, copy) NSArray *watchlistIDsPostDiff;
@property (nonatomic, readonly, copy) NSArray *watchlistIDsPreDiff;

+ (id)reorderedWatchlistIDsFrom:(id)arg1 to:(id)arg2;

- (void).cxx_destruct;
- (id)addedWatchlistIDs;
- (id)indexesOfAddedWatchlistIDs;
- (id)indexesOfReorderedWatchlistIDs;
- (id)initWithOldWatchlistIDs:(id)arg1 newWatchlistIDs:(id)arg2;
- (bool)isEmpty;
- (id)removedWatchlistIDs;
- (id)reorderedWatchlistIDs;
- (id)watchlistIDsPostDiff;
- (id)watchlistIDsPreDiff;

@end
