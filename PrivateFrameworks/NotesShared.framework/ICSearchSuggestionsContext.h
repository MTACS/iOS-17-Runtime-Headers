
@interface ICSearchSuggestionsContext : NSObject <NSCopying> {
    CSSuggestion * _searchSuggestion;
}

@property (readonly) bool isEmpty;
@property (nonatomic, retain) CSSuggestion *searchSuggestion;

+ (bool)supportsSearchSuggestions;

- (void).cxx_destruct;
- (void)changeScopeOfToken:(id)arg1 toScopeAtIndex:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithSearchSuggestion:(id)arg1;
- (bool)isEmpty;
- (id)searchSuggestion;
- (void)setSearchSuggestion:(id)arg1;
- (void)updateSearchSuggestion:(id)arg1 interaction:(long long)arg2;
- (void)updateTypedString:(id)arg1 tokens:(id)arg2;

@end
