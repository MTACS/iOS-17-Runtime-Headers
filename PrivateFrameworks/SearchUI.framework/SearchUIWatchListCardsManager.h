
@interface SearchUIWatchListCardsManager : NSObject {
    bool  _isInUpNext;
    WLKCanonicalPlayablesResponse * _response;
    NSHashTable * _rowModels;
    NSString * _watchListIdentifier;
    SearchUIWatchListState * _watchListState;
}

@property (nonatomic) bool isInUpNext;
@property (nonatomic, retain) WLKCanonicalPlayablesResponse *response;
@property (nonatomic, retain) NSHashTable *rowModels;
@property (nonatomic, retain) NSString *watchListIdentifier;
@property (nonatomic, retain) SearchUIWatchListState *watchListState;

- (void).cxx_destruct;
- (void)addWatchListRowModelObserver:(id)arg1;
- (id)initWithWatchListIdentifier:(id)arg1;
- (bool)isInUpNext;
- (bool)isTappable;
- (id)response;
- (id)rowModels;
- (void)setIsInUpNext:(bool)arg1;
- (void)setResponse:(id)arg1;
- (void)setRowModels:(id)arg1;
- (void)setWatchListIdentifier:(id)arg1;
- (void)setWatchListState:(id)arg1;
- (id)watchListIdentifier;
- (id)watchListState;

@end
