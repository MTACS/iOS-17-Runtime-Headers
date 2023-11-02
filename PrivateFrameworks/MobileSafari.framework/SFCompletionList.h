
@interface SFCompletionList : NSObject

+ (id)_filterSearchLinks:(id)arg1;
+ (id)_getResultSections:(id)arg1 topHitMatches:(id)arg2;
+ (void)_resultsForQueryLegacy:(id)arg1 completion:(id /* block */)arg2;
+ (void)resetSearchParameters;
+ (void)resultsForQuery:(id)arg1 completion:(id /* block */)arg2;
+ (void)setSearchParameter:(id)arg1 toValue:(id)arg2;

@end
