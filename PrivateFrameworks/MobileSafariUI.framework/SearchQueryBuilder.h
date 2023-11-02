
@interface SearchQueryBuilder : NSObject {
    _SFSearchEngineInfo * engineInfo;
    NSString * queryString;
}

+ (id)searchQueryBuilderWithQuery:(id)arg1 forPrivateBrowsing:(bool)arg2;
+ (id)searchQueryBuilderWithXWebSearchURL:(id)arg1 forPrivateBrowsing:(bool)arg2;

- (void).cxx_destruct;
- (id)initWithQueryString:(id)arg1 forPrivateBrowsing:(bool)arg2;
- (id)initWithSearchEngineInfo:(id)arg1 queryString:(id)arg2;
- (id)initWithXWebSearchURL:(id)arg1 forPrivateBrowsing:(bool)arg2;
- (id)queryString;
- (id)searchEngineInfo;
- (id)searchURL;

@end
