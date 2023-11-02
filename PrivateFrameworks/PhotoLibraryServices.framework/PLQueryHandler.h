
@interface PLQueryHandler : NSObject

+ (id)_assetsPredicateForPersonPredicate:(id)arg1 assetObjectIDs:(id*)arg2 additionalAssetPredicate:(id)arg3 invert:(bool)arg4 inLibrary:(id)arg5;
+ (unsigned long long)_comparatorToOperatorType:(int)arg1;
+ (bool)_containsKey:(int)arg1 inQuery:(id)arg2;
+ (int)_convertComparatorToNumericComparator:(int)arg1;
+ (id)_convertQueryKeyTypeToString:(int)arg1;
+ (id)_convertQueryValueForAssetType:(int)arg1;
+ (id)_equalityPredicateForDoubleQuery:(id)arg1 withValue:(double)arg2 comparator:(int)arg3 inLibrary:(id)arg4;
+ (id)_expressionForStringValue:(id)arg1 inLibrary:(id)arg2;
+ (bool)_findAndReplaceLatitudeLongitudeKeyInQuery:(id)arg1;
+ (id)_getConvertedKeys:(id)arg1;
+ (id)_getConvertedQueryKey:(id)arg1;
+ (id)_getTargetDateForTheLastDays:(long long)arg1 weeks:(long long)arg2 months:(long long)arg3 years:(long long)arg4 seconds:(long long)arg5 targetDate:(id)arg6;
+ (id)_getTargetDateWithUnit:(int)arg1 dateValue:(id)arg2;
+ (id)_infoFromSingleQuery:(id)arg1;
+ (bool)_isTextComparator:(int)arg1;
+ (bool)_isTextFieldQuery:(int)arg1;
+ (bool)_needEqualityForDoubleQuery:(int)arg1;
+ (bool)_needToNegateQueryForComparator:(int)arg1;
+ (id)_personMatchesPredicateForCriteria:(id)arg1;
+ (id)_personNameQueryKeyPaths;
+ (id)_predicateForAbleToUploadQuery;
+ (id)_predicateForDoubleQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateForEmptyQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateForIsReferencedQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateForLoopingQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateForNotAbleToUploadQuery;
+ (id)_predicateForPersonQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (id)_predicateForPersonUUIDQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (id)_predicateForPersonUUIDinMomentForSharedLibraryQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (id)_predicateForProResQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateForQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (id)_predicateForRangeQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (id)_predicateForSingleQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (id)_predicateForTaggedWithGPSQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateForTextQuery:(id)arg1 inLibrary:(id)arg2;
+ (id)_predicateFromAlbumKind:(int)arg1 negate:(bool)arg2;
+ (id)_predicateFromSearchIndexForText:(id)arg1 comparator:(int)arg2 inLibrary:(id)arg3;
+ (id)_singleQueryInQuery:(id)arg1 passingTest:(id /* block */)arg2;
+ (id)constructQueryFromData:(id)arg1;
+ (id)dataFromQuery:(id)arg1;
+ (bool)fixUserQueryDataInQuery:(id)arg1;
+ (bool)hasMatchingFetchingAlbumForSingleQuery:(id)arg1 outKind:(int*)arg2;
+ (bool)includesHiddenAssetsInQuery:(id)arg1;
+ (bool)includesHiddenAssetsKeyInQuery:(id)arg1;
+ (id)infoFromQuery:(id)arg1;
+ (id)predicateForQuery:(id)arg1 inLibrary:(id)arg2 changeDetectionCriteria:(id)arg3;
+ (id)queryFromInfo:(id)arg1;

@end
