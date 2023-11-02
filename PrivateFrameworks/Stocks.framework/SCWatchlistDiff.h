
@interface SCWatchlistDiff : NSObject {
    NSArray * _addedStocks;
    NSDictionary * _indexesOfAddedStocks;
    NSDictionary * _indexesOfReorderedStocks;
    NSArray * _removedStocks;
    NSArray * _reorderedStocks;
    NSArray * _stocksPostDiff;
    NSArray * _stocksPreDiff;
}

@property (nonatomic, readonly, copy) NSArray *addedStocks;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly, copy) NSDictionary *indexesOfAddedStocks;
@property (nonatomic, readonly, copy) NSDictionary *indexesOfReorderedStocks;
@property (nonatomic, readonly, copy) NSArray *removedStocks;
@property (nonatomic, readonly, copy) NSArray *reorderedStocks;
@property (nonatomic, readonly, copy) NSArray *stocksPostDiff;
@property (nonatomic, readonly, copy) NSArray *stocksPreDiff;

+ (id)reorderedStocksFrom:(id)arg1 to:(id)arg2;

- (void).cxx_destruct;
- (id)addedStocks;
- (id)indexesOfAddedStocks;
- (id)indexesOfReorderedStocks;
- (id)initWithOldStocks:(id)arg1 newStocks:(id)arg2;
- (bool)isEmpty;
- (id)removedStocks;
- (id)reorderedStocks;
- (id)stocksPostDiff;
- (id)stocksPreDiff;

@end
