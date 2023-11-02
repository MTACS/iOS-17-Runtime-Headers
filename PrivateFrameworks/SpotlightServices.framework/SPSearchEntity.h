
@interface SPSearchEntity : NSObject <NSSecureCoding> {
    SFCommand * _command;
    NSString * _displayString;
    SFColor * _entityBackgroundColor;
    bool  _hasWords;
    bool  _isSuggestion;
    NSArray * _preferredBundleIDs;
    NSString * _searchString;
    NSArray * _spotlightFilterQueries;
    NSString * _tokenString;
}

@property (nonatomic, readonly) SFCommand *command;
@property (nonatomic, readonly) NSString *currentSearchString;
@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, retain) SFColor *entityBackgroundColor;
@property (nonatomic, readonly) NSArray *groupingRules;
@property bool hasWords;
@property (readonly) bool isAppEntitySearch;
@property (readonly) bool isCommandEntitySearch;
@property (readonly) bool isContactEntitySearch;
@property (readonly) bool isNLPEntitySearch;
@property (readonly) bool isPhotosEntitySearch;
@property (readonly) bool isScopedSearch;
@property (readonly) bool isServerEntitySearch;
@property bool isSuggestion;
@property (nonatomic, copy) NSArray *preferredBundleIDs;
@property (nonatomic, readonly) NSString *queryString;
@property (nonatomic, readonly) NSString *searchString;
@property (nonatomic, copy) NSArray *spotlightFilterQueries;
@property (nonatomic, readonly) NSString *spotlightQueryString;
@property (nonatomic, readonly) NSDictionary *spotlightRankCategories;
@property (nonatomic, readonly) NSDictionary *spotlightRankTerms;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSString *tokenText;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)searchEntityWithBundleIdentifier:(id)arg1 appName:(id)arg2 fromSuggestion:(bool)arg3;
+ (id)searchEntityWithCommand:(id)arg1 fromSuggestion:(bool)arg2;
+ (id)searchEntityWithContactIdentifier:(id)arg1 fromSuggestion:(bool)arg2;
+ (id)searchEntityWithPersonQueryIdentifier:(id)arg1 personName:(id)arg2 fromSuggestion:(bool)arg3;
+ (id)searchEntityWithPhotosSearchString:(id)arg1 fromSuggestion:(bool)arg2;
+ (id)searchEntityWithSearchString:(id)arg1 spotlightQueryString:(id)arg2 preferredBundleIDs:(id)arg3;
+ (id)searchEntityWithSpotlightSuggestion:(id)arg1 symbolName:(id)arg2 fromSuggestion:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendToQuery:(id)arg1 key:(id)arg2 value:(id)arg3 additions:(id)arg4 flags:(id)arg5;
- (void)appendToQuery:(id)arg1 key:(id)arg2 value:(id)arg3 optionalValue:(id)arg4 additions:(id)arg5 flags:(id)arg6;
- (id)command;
- (id)currentSearchString;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (id)entityBackgroundColor;
- (id)groupingRules;
- (bool)hasWords;
- (id)initWithCoder:(id)arg1;
- (bool)isAppEntitySearch;
- (bool)isCommandEntitySearch;
- (bool)isContactEntitySearch;
- (bool)isNLPEntitySearch;
- (bool)isPhotosEntitySearch;
- (bool)isScopedSearch;
- (bool)isServerEntitySearch;
- (bool)isSuggestion;
- (id)preferredBundleIDs;
- (id)queryString;
- (id)searchString;
- (void)setDisplayString:(id)arg1;
- (void)setEntityBackgroundColor:(id)arg1;
- (void)setHasWords:(bool)arg1;
- (void)setIsSuggestion:(bool)arg1;
- (void)setPreferredBundleIDs:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSpotlightFilterQueries:(id)arg1;
- (void)setTokenString:(id)arg1;
- (id)spotlightFilterQueries;
- (id)spotlightQueryString;
- (id)spotlightRankCategories;
- (id)spotlightRankTerms;
- (id)symbolName;
- (id)tokenText;
- (void)updateSearchString:(id)arg1;

@end
