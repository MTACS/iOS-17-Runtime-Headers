
@interface WBSResultRanker : NSObject

+ (id)_dropQueryPart:(id)arg1;
+ (bool)_shouldDedupeResult:(id)arg1 withMobile:(bool)arg2 withBase:(id)arg3 withSimplified:(id)arg4;
+ (id)_simplifyURLForHistoryDedupe:(id)arg1 withMobile:(bool)arg2;
+ (void)_trackTitleAndURLSingle:(id)arg1 withMobile:(bool)arg2 withBase:(id)arg3 withSimplified:(id)arg4;
+ (void)_trackTitlesAndURLs:(id)arg1 withMobile:(bool)arg2 withBase:(id)arg3 withSimplified:(id)arg4;
+ (id)_urlStringWithoutQueryForMatch:(id)arg1;
+ (id)_visibleURLtoDisplayedURL:(id)arg1;
+ (id)dedupeResults:(id)arg1 withSearchSuggestionStrings:(id)arg2 searchProvider:(id)arg3;
+ (id)dedupeSameTitleHistoryResults:(id)arg1 withMobile:(bool)arg2 withTophits:(id)arg3 withTabs:(id)arg4;
+ (id)dedupeSameTitleHistoryResults:(id)arg1 withMobile:(bool)arg2 withTophits:(id)arg3 withTabs:(id)arg4 cloudTabs:(id)arg5;
+ (id)dedupeSameURLResults:(id)arg1 withUniversalSearchResults:(id)arg2;
+ (id)deduplicateTopHits:(id)arg1;
+ (id)filterOutUnlikelyMatchesBeforeTopHitPromotionFromMatches:(id)arg1 forQuery:(id)arg2 searchProvider:(id)arg3;
+ (id)filterOutUnlikelyMatchesFromMatches:(id)arg1 forQuery:(id)arg2 rewrittenQuery:(id)arg3;
+ (id)filterOutUnlikelyMatchesFromTopHits:(id)arg1 forQuery:(id)arg2 searchProvider:(id)arg3;
+ (bool)includeBookmarksAndHistory:(id)arg1;
+ (bool)matchNavigationIsClientOrServerError:(id)arg1;
+ (id)searchParameters;
+ (void)setSearchParameters:(id)arg1;
+ (bool)shouldAutocompleteToURL:(id)arg1 fromUserTypedString:(id)arg2 withPredictedQueryString:(id)arg3;
+ (id)urlStringsFromUniversalSearchResults:(id)arg1;

@end
