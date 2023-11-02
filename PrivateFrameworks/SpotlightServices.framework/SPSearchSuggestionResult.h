
@interface SPSearchSuggestionResult : SFSearchResult_SpotlightExtras {
    NSString * _query;
    NSArray * _searchEntities;
    CSSuggestion * _spotlightSuggestion;
    SFSearchSuggestion * _suggestion;
}

@property (nonatomic, copy) NSString *query;
@property (nonatomic, readonly) NSArray *searchEntities;
@property (nonatomic, readonly) CSSuggestion *spotlightSuggestion;
@property (nonatomic, copy) SFSearchSuggestion *suggestion;

+ (id)searchSuggestionRankingResultWithResult:(id)arg1 query:(id)arg2 sectionBundleIdentifier:(id)arg3 queryId:(unsigned long long)arg4;
+ (id)searchSuggestionRankingResultWithSpotlightSuggestion:(id)arg1 query:(id)arg2 sectionBundleIdentifier:(id)arg3 queryId:(unsigned long long)arg4;
+ (id)searchSuggestionRankingResultWithSuggestion:(id)arg1 query:(id)arg2 sectionBundleIdentifier:(id)arg3 queryId:(unsigned long long)arg4;
+ (bool)supportsSecureCoding;
+ (void)updateRankingItemForSuggestionResult:(id)arg1;

- (void).cxx_destruct;
- (long long)compareByRank:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchResult:(id)arg1 query:(id)arg2 sectionBundleIdentifier:(id)arg3 queryId:(unsigned long long)arg4;
- (id)initWithSearchSuggestion:(id)arg1 query:(id)arg2 sectionBundleIdentifier:(id)arg3 queryId:(unsigned long long)arg4;
- (id)initWithSpotlightSuggestion:(id)arg1 query:(id)arg2 sectionBundleIdentifier:(id)arg3 queryId:(unsigned long long)arg4;
- (id)localSuggestionFeatures;
- (id)query;
- (id)searchEntities;
- (void)setQuery:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (id)spotlightSuggestion;
- (id)suggestion;
- (id)suggestionsFeedbackData;

@end
