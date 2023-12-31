
@interface PXPeoplePagingSuggestionProvider : NSObject {
    NSArray * _currentSuggestions;
    NSMutableArray * _unvisitedSuggestions;
    NSMutableArray * _visitedSuggestions;
}

@property (nonatomic, copy) NSArray *currentSuggestions;
@property (nonatomic, retain) NSMutableArray *unvisitedSuggestions;
@property (nonatomic, retain) NSMutableArray *visitedSuggestions;

- (void).cxx_destruct;
- (void)appendSuggestionArray:(id)arg1;
- (id)currentSuggestions;
- (bool)hasNextSuggestions;
- (bool)hasPreviousSuggestions;
- (id)init;
- (id)nextSuggestionsWithPageLimit:(long long)arg1;
- (id)previousSuggestions;
- (void)removeAllSuggestions;
- (void)removeSuggestions:(id)arg1;
- (void)setCurrentSuggestions:(id)arg1;
- (void)setUnvisitedSuggestions:(id)arg1;
- (void)setVisitedSuggestions:(id)arg1;
- (id)unvisitedSuggestions;
- (id)visitedSuggestions;

@end
