
@interface SPSearchCommandEntity : SPSearchEntity {
    SFCommand * _performCommand;
    CSSuggestion * _searchModel;
    NSString * _symbolName;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)command;
- (id)currentSearchString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommand:(id)arg1 fromSuggestion:(bool)arg2;
- (id)initWithSpotlightSuggestion:(id)arg1 symbolName:(id)arg2 fromSuggestion:(bool)arg3;
- (bool)isCommandEntitySearch;
- (bool)isPhotosEntitySearch;
- (bool)isScopedSearch;
- (bool)isServerEntitySearch;
- (id)queryString;
- (id)spotlightFilterQueries;
- (id)spotlightQueryString;
- (id)symbolName;
- (void)updateSearchString:(id)arg1;

@end
