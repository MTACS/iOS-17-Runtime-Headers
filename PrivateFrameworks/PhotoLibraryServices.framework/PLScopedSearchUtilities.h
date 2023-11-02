
@interface PLScopedSearchUtilities : NSObject

+ (id)UUIDsFromSearchIndexIds:(struct __CFArray { }*)arg1 searchIndexIdsToUUIDs:(id)arg2 searchResultType:(unsigned long long)arg3 delegate:(id)arg4;
+ (id)_UUIDsForGroup:(id)arg1 searchResultsType:(unsigned long long)arg2 delegate:(id)arg3;
+ (void)_recursivelyIntersectGroups:(id)arg1 searchResultTypes:(unsigned long long)arg2 query:(id)arg3 groupArrayIndex:(unsigned long long)arg4 iterationCount:(unsigned long long)arg5 iterationIdIntersections:(struct __CFArray {}**)arg6 finalIdIntersections:(struct __CFArray { }*)arg7 finalExactMatchIdIntersections:(struct __CFArray { }*)arg8 iterationGroups:(id*)arg9 finalGroups:(id)arg10 allMatchedGroups:(id)arg11;
+ (struct __CFArray { }*)_sortCFArrayOfPSIIdentifiers:(struct __CFArray { }*)arg1;
+ (id)filterArrayOfGroupsArraysForEqualMatchType:(id)arg1 searchTokens:(id)arg2;
+ (id)generateFruitfulMatchedGroupsFromAllMatchedGroups:(id)arg1 queryMatchedScopedAssetUUIDs:(id)arg2 queryMatchedScopedCollectionUUIDs:(id)arg3 searchResultTypes:(unsigned long long)arg4 delegate:(id)arg5;
+ (id)groupDictionariesFromArrayOfGroupsArrays:(id)arg1;
+ (bool)groupDuplicateOrSynonymExistsForGroup:(id)arg1 inGroups:(id)arg2;
+ (void)intersectGroups:(id)arg1 searchResultTypes:(unsigned long long)arg2 shouldGenerateCompletionCandidates:(bool)arg3 query:(id)arg4 completion:(id /* block */)arg5;
+ (void)intersectSortedArray:(const struct __CFArray {}**)arg1 withOtherSortedArray:(struct __CFArray { }*)arg2;
+ (id)removeSynonymsOfOtherGroupsInGroups:(id)arg1;
+ (void)searchIndexIdsFromUUIDs:(id)arg1 searchResultTypes:(unsigned long long)arg2 delegate:(id)arg3 completion:(id /* block */)arg4;
+ (bool)shouldUseExactMatchResultsForGroups:(id)arg1;

@end
