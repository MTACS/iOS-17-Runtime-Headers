
@interface CKSpotlightQueryUtilities : NSObject

+ (id)annotatedResultStringWithSearchText:(id)arg1 resultText:(id)arg2 primaryTextColor:(id)arg3 primaryFont:(id)arg4 annotatedTextColor:(id)arg5 annotatedFont:(id)arg6;
+ (unsigned long long)countOfNonSpaceCharsInSearchString:(id)arg1;
+ (id)defaultSearchControllers;
+ (id)detailsSearchControllers;
+ (id)matchedRankingQueriesForResult:(id)arg1 withRankingQueryCount:(unsigned long long)arg2 maxRankingQuery:(unsigned long long*)arg3;
+ (id)queryStringForSearchString:(id)arg1 attributes:(id)arg2 matchType:(unsigned long long)arg3;
+ (id)queryStringFromSubqueries:(id)arg1 combineOperator:(unsigned long long)arg2;
+ (id)rankingQueriesForSearchString:(id)arg1 attributes:(id)arg2;
+ (id)rankingQueryForField:(id)arg1 matchType:(unsigned long long)arg2 searchString:(id)arg3;
+ (bool)shouldDisplayWalletSearchController;
+ (id)stringByEscapingSearchString:(id)arg1;
+ (id)tokenAddressesForFilteringWithContact:(id)arg1;

@end
