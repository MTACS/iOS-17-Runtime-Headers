
@interface BCSURLPatternMatcher : NSObject

- (id)dictionaryFromQueryString:(id)arg1 orderedKeys:(id*)arg2;
- (id)extractedPathForAnyMatchUsingScanner:(id)arg1 delimiter:(id)arg2 extractedPath:(id)arg3 countOfPathComponentsToMatch:(unsigned long long)arg4;
- (id)extractedPathForExactMatchUsingScanner:(id)arg1 delimiter:(id)arg2 extractedPath:(id)arg3 patternPathComponent:(id)arg4;
- (id)extractedQueryByAddingKey:(id)arg1 value:(id)arg2 toExtractedQuery:(id)arg3;
- (id)extractedURLForOriginalURL:(id)arg1 originalURLPathComponents:(id)arg2 extractedPath:(id)arg3 extractedQuery:(id)arg4;
- (bool)isAnyMatchFoundForPathPattern:(id)arg1 countOfPathComponents:(long long*)arg2 error:(id*)arg3;
- (bool)isValidDomainForURL:(id)arg1 domainBundleIDPatterns:(id)arg2;
- (id)matchPattern:(id)arg1 withURL:(id)arg2 forBundleID:(id)arg3 expirationDate:(id)arg4 error:(id*)arg5;
- (id)orderedKeysForPatternQuery:(id)arg1 originalURLQuery:(id)arg2 orderedOriginalURLQueryKeys:(id)arg3;

@end
