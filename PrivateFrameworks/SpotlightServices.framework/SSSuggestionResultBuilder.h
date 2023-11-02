
@interface SSSuggestionResultBuilder : SSResultBuilder {
    NSString * _contactIdentifier;
    SPSearchEntity * _entity;
    NSString * _queryString;
    CSSuggestion * _spotlightSuggestion;
    SFSearchSuggestion * _suggestion;
    NSString * _suggestionString;
}

@property (nonatomic, retain) NSString *contactIdentifier;
@property (nonatomic, retain) SPSearchEntity *entity;
@property (nonatomic, retain) NSString *queryString;
@property (nonatomic, retain) CSSuggestion *spotlightSuggestion;
@property (nonatomic, retain) SFSearchSuggestion *suggestion;
@property (nonatomic, retain) NSString *suggestionString;

+ (id)buildResultWithResult:(id)arg1 queryContext:(id)arg2;
+ (id)buildResultWithSpotlightSuggestion:(id)arg1 queryContext:(id)arg2;
+ (id)buildResultWithSuggestion:(id)arg1 queryContext:(id)arg2;
+ (id)buildResultsWithCompletionsData:(id)arg1 queryContext:(id)arg2;
+ (id)buildResultsWithSuggestionsData:(id)arg1 queryContext:(id)arg2;

- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildCompactCardSection;
- (id)buildHighlightedTextForSuggestionAppendingTextPieces:(id)arg1;
- (id)buildInlineCardSections;
- (id)buildResult;
- (id)buildSymbolImage;
- (id)contactIdentifier;
- (id)entity;
- (id)initWithResult:(id)arg1 queryContext:(id)arg2;
- (id)initWithSpotlightSuggestion:(id)arg1 queryContext:(id)arg2;
- (id)initWithSuggestion:(id)arg1 queryContext:(id)arg2;
- (id)queryString;
- (void)setContactIdentifier:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setQueryString:(id)arg1;
- (void)setSpotlightSuggestion:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setSuggestionString:(id)arg1;
- (id)spotlightSuggestion;
- (id)suggestion;
- (id)suggestionString;

@end
