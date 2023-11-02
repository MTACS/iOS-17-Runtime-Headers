
@interface PLSpotlightQueryUtility : NSObject

+ (id)_parseTokenTypes:(id)arg1;
+ (id)baseQueryContext;
+ (id)baseQueryFromPSIQuery:(id)arg1 queryContext:(id)arg2;
+ (void)mapQueryEntitiesToQueryParsedTermsForQueryParse:(id)arg1 searchableItems:(id)arg2 psiQuery:(id)arg3 completion:(id /* block */)arg4;

@end
