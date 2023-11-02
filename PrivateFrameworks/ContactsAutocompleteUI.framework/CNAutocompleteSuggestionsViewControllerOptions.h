
@interface CNAutocompleteSuggestionsViewControllerOptions : NSObject <NSCopying> {
    long long  _maxNumberOfSuggestions;
    unsigned long long  _searchType;
}

@property long long maxNumberOfSuggestions;
@property unsigned long long searchType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)maxNumberOfSuggestions;
- (unsigned long long)searchType;
- (void)setMaxNumberOfSuggestions:(long long)arg1;
- (void)setSearchType:(unsigned long long)arg1;

@end
