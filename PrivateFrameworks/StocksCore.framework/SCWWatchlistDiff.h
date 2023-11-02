
@interface SCWWatchlistDiff : NSObject {
    NSArray * _addedSymbols;
    NSDictionary * _indexesOfAddedSymbols;
    NSDictionary * _indexesOfReorderedSymbols;
    NSArray * _removedSymbols;
    NSArray * _reorderedSymbols;
    NSArray * _symbolsPostDiff;
    NSArray * _symbolsPreDiff;
    NSNumber * _updatedDisplayState;
    NSString * _updatedName;
    NSNumber * _updatedSortOrderState;
    NSNumber * _updatedSortState;
}

@property (nonatomic, readonly, copy) NSArray *addedSymbols;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly, copy) NSDictionary *indexesOfAddedSymbols;
@property (nonatomic, readonly, copy) NSDictionary *indexesOfReorderedSymbols;
@property (nonatomic, readonly, copy) NSArray *removedSymbols;
@property (nonatomic, readonly, copy) NSArray *reorderedSymbols;
@property (nonatomic, readonly, copy) NSArray *symbolsPostDiff;
@property (nonatomic, readonly, copy) NSArray *symbolsPreDiff;
@property (nonatomic, readonly, copy) NSNumber *updatedDisplayState;
@property (nonatomic, readonly, copy) NSString *updatedName;
@property (nonatomic, readonly, copy) NSNumber *updatedSortOrderState;
@property (nonatomic, readonly, copy) NSNumber *updatedSortState;

+ (id)reorderedSymbolsFrom:(id)arg1 to:(id)arg2;

- (void).cxx_destruct;
- (id)addedSymbols;
- (id)indexesOfAddedSymbols;
- (id)indexesOfReorderedSymbols;
- (id)initWithOldSymbols:(id)arg1 newSymbols:(id)arg2 updatedName:(id)arg3 updatedSortState:(id)arg4 updatedSortOrderState:(id)arg5 updatedDisplayState:(id)arg6;
- (bool)isEmpty;
- (id)removedSymbols;
- (id)reorderedSymbols;
- (id)symbolsPostDiff;
- (id)symbolsPreDiff;
- (id)updatedDisplayState;
- (id)updatedName;
- (id)updatedSortOrderState;
- (id)updatedSortState;

@end
