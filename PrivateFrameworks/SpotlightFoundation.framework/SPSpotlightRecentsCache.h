
@interface SPSpotlightRecentsCache : NSObject

+ (void)cacheContact:(id)arg1 contactIdentifier:(id)arg2 score:(id)arg3 searchString:(id)arg4;
+ (void)cacheLocalResult:(id)arg1 identifier:(id)arg2 bundleIdentifier:(id)arg3 protectionClass:(id)arg4 searchString:(id)arg5;
+ (void)cachePerson:(id)arg1 personQueryIdentifier:(id)arg2 score:(id)arg3 searchString:(id)arg4;
+ (void)cacheResult:(id)arg1 title:(id)arg2 searchString:(id)arg3;
+ (void)cacheSuggestion:(id)arg1 type:(int)arg2 score:(id)arg3 searchString:(id)arg4;
+ (void)deleteAllRecentResults;
+ (void)deleteContact:(id)arg1 contactIdentifier:(id)arg2 score:(id)arg3;
+ (void)deleteLocalResult:(id)arg1 identifier:(id)arg2 bundleIdentifier:(id)arg3 protectionClass:(id)arg4;
+ (void)deletePerson:(id)arg1 personQueryIdentifier:(id)arg2 score:(id)arg3;
+ (void)deleteResult:(id)arg1 title:(id)arg2;
+ (void)deleteSuggestion:(id)arg1 type:(int)arg2 score:(id)arg3;
+ (void)enumerateRecentCompletionsWithSearchString:(id)arg1 usingBlock:(id /* block */)arg2;
+ (void)enumerateRecentResultsUsingBlock:(id /* block */)arg1;
+ (id)filteredTopics:(id)arg1;
+ (id)recentResults;
+ (id)recentResultsWithOptions:(id)arg1;
+ (id)recentResultsWithOptions:(id)arg1 rankAndDeduplicate:(id /* block */)arg2;
+ (id)resultFromTopic:(id)arg1;
+ (bool)topic:(id)arg1 isSameAsTopic:(id)arg2;
+ (void)updateApplicationContexts:(id)arg1;

@end
