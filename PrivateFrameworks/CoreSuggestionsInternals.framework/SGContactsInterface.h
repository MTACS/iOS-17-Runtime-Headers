
@interface SGContactsInterface : NSObject

+ (void)clearCache;
+ (bool)enumerateContactsMatchingEmailAddress:(id)arg1 withKeysToFetch:(id)arg2 usingContactStore:(id)arg3 error:(id*)arg4 usingBlock:(id /* block */)arg5;
+ (bool)enumerateContactsMatchingName:(id)arg1 withKeysToFetch:(id)arg2 usingContactStore:(id)arg3 error:(id*)arg4 usingBlock:(id /* block */)arg5;
+ (bool)enumerateContactsWithFetchRequest:(id)arg1 usingContactStore:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
+ (bool)handleExistsInContactStoreForHandle:(id)arg1 withHandleType:(id)arg2;
+ (id)identifiersPredicateFromCacheForPredicate:(id)arg1 isCached:(bool*)arg2;
+ (void)initialize;
+ (id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 usingContactStore:(id)arg3 error:(id*)arg4;
+ (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 usingContactStore:(id)arg3 error:(id*)arg4;
+ (id)unifiedMeContactWithKeysToFetch:(id)arg1 usingContactStore:(id)arg2 error:(id*)arg3;

@end
