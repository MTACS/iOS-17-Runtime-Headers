
@interface ICSearchResultSection : NSObject {
    NSMutableDictionary * _hiddenSearchResults;
    NSMutableDictionary * _identifierToSearchResult;
    NSMutableOrderedSet * _searchResults;
    NSMutableDictionary * _unhiddenSearchResults;
}

@property (nonatomic, retain) NSMutableDictionary *hiddenSearchResults;
@property (nonatomic, retain) NSMutableDictionary *identifierToSearchResult;
@property (nonatomic, retain) NSMutableOrderedSet *searchResults;
@property (nonatomic, retain) NSMutableDictionary *unhiddenSearchResults;

- (void).cxx_destruct;
- (void)addSearchResults:(id)arg1;
- (id)description;
- (id)hiddenIdentifiers;
- (id)hiddenSearchResults;
- (id)identifierToSearchResult;
- (id)identifiers;
- (id)init;
- (bool)removeSearchResultForIdentifier:(id)arg1 forHiding:(bool)arg2;
- (void)resetToSearchResults:(id)arg1;
- (id)searchResults;
- (void)setHiddenSearchResults:(id)arg1;
- (void)setIdentifierToSearchResult:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (void)setUnhiddenSearchResults:(id)arg1;
- (id)unhiddenSearchResults;

@end
