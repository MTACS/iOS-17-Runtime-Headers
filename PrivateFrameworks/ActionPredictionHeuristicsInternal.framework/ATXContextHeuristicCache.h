
@interface ATXContextHeuristicCache : NSObject {
    NSMutableDictionary * _cache;
    NSHashTable * _criteriaTable;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

- (void).cxx_destruct;
- (id)allRelevantSuggestionsForDate:(id)arg1;
- (void)dealloc;
- (void)evict:(id)arg1;
- (void)evictAll;
- (void)evictBefore:(id)arg1;
- (id)heuristicsCached;
- (id)init;
- (id)nextChangeAfterDate:(id)arg1;
- (void)setSuggestions:(id)arg1 forKey:(id)arg2;
- (id)suggestionsForKey:(id)arg1;

@end
