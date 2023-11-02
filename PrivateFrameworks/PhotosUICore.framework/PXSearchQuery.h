
@interface PXSearchQuery : NSObject <NSCopying> {
    CSSuggestion * _currentSpotlightQueryState;
    PXSearchQueryOptions * _options;
    NSString * _priorityAssetUUID;
    NSSet * _scopedSearchIdentifiers;
    unsigned long long  _searchResultTypes;
    unsigned long long  _searchSuggestionType;
    NSString * _searchText;
    NSArray * _searchTokens;
}

@property (nonatomic, retain) CSSuggestion *currentSpotlightQueryState;
@property (nonatomic, readonly) bool hasSearchText;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly, copy) NSString *localizedQueryString;
@property (nonatomic, readonly, copy) PXSearchQueryOptions *options;
@property (nonatomic, readonly, copy) NSString *priorityAssetUUID;
@property (nonatomic, readonly, copy) NSArray *queryTokens;
@property (nonatomic, readonly, copy) NSSet *scopedSearchIdentifiers;
@property (nonatomic, readonly) unsigned long long searchResultTypes;
@property (nonatomic, readonly) unsigned long long searchSuggestionType;
@property (nonatomic, readonly) unsigned long long searchTermCount;
@property (nonatomic, readonly, copy) NSString *searchText;
@property (nonatomic, readonly, copy) NSArray *searchTokens;
@property (nonatomic, readonly) bool supportsRecentSearch;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentSpotlightQueryState;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSearchText;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSearchText:(id)arg1 searchTokens:(id)arg2 scopedSearchIdentifiers:(id)arg3 searchResultTypes:(unsigned long long)arg4 options:(id)arg5;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToRecentSearchQuery:(id)arg1;
- (id)localizedQueryString;
- (id)localizedQueryStringWithQuotationDelimitersForSearchText:(bool)arg1;
- (id)options;
- (id)priorityAssetUUID;
- (id)queryTokens;
- (id)scopedSearchIdentifiers;
- (unsigned long long)searchResultTypes;
- (unsigned long long)searchSuggestionType;
- (unsigned long long)searchTermCount;
- (id)searchText;
- (id)searchTokens;
- (void)setCurrentSpotlightQueryState:(id)arg1;
- (bool)supportsRecentSearch;

@end
