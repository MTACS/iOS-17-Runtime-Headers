
@interface SPCacheManager : NSObject {
    PARSession * _session;
}

+ (id)defaultManager;
+ (id)defaultProperties;
+ (id)defaultValueWithKey:(id)arg1;
+ (id)defaults;
+ (id)identifier;
+ (void)removeDefaults;
+ (void)removeKey:(id)arg1;
+ (void)setDefaultWithKey:(id)arg1 value:(id)arg2;
+ (void)setVersionWithValue:(long long)arg1;
+ (long long)version;

- (void).cxx_destruct;
- (id)_createRecentsFromEngagedResults:(id)arg1 maxCount:(unsigned long long)arg2;
- (void)cacheContact:(id)arg1 contactIdentifier:(id)arg2 score:(id)arg3 searchString:(id)arg4;
- (void)cacheLocalResult:(id)arg1 identifier:(id)arg2 bundleIdentifier:(id)arg3 protectionClass:(id)arg4 searchString:(id)arg5;
- (void)cachePerson:(id)arg1 personQueryIdentifier:(id)arg2 score:(id)arg3 searchString:(id)arg4;
- (void)cacheResult:(id)arg1 title:(id)arg2 searchString:(id)arg3;
- (void)cacheSuggestion:(id)arg1 type:(int)arg2 score:(id)arg3 searchString:(id)arg4;
- (void)deleteAllResults;
- (void)deleteContact:(id)arg1 contactIdentifier:(id)arg2 score:(id)arg3;
- (void)deleteLocalResult:(id)arg1 identifier:(id)arg2 bundleIdentifier:(id)arg3 protectionClass:(id)arg4;
- (void)deletePerson:(id)arg1 personQueryIdentifier:(id)arg2 score:(id)arg3;
- (void)deleteResult:(id)arg1 title:(id)arg2;
- (void)deleteSuggestion:(id)arg1 type:(int)arg2 score:(id)arg3;
- (void)enumerateRecentCompletionsWithSearchString:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateRecentResultsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)recentResultsWithOptions:(id)arg1;
- (id)recentResultsWithOptions:(id)arg1 rankAndDeduplicate:(id /* block */)arg2;
- (void)updateRecentsWithBundleIdentifiers:(id)arg1;

@end
