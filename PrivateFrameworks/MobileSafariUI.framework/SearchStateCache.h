
@interface SearchStateCache : NSObject {
    NSMapTable * _cache;
}

- (void).cxx_destruct;
- (id)_cacheQueryForTabDocument:(id)arg1;
- (void)cacheAcceptanceOfCompletionItem:(id)arg1 withCompletionList:(id)arg2 forTabDocument:(id)arg3;
- (void)cacheSearchQueryID:(long long)arg1 forTab:(id)arg2;
- (id)cachedCompletionListForTabDocument:(id)arg1;
- (void)clearParsecQueryOriginatingFromSearchSuggestionInTabDocument:(id)arg1;
- (long long)idOfParsecQueryOriginatingFromSearchSuggestionInTabDocument:(id)arg1;
- (id)init;
- (void)removeCachedSearchStateForTabDocument:(id)arg1;

@end
