
@interface PHMemoryUpNextHelper : NSObject

+ (bool)_hasInvalidMemoryTriggerForMemory:(id)arg1;
+ (bool)_isAcceptableUserFeedbackForMemory:(id)arg1 keyAsset:(id)arg2 userFeedbackCalculator:(id)arg3;
+ (bool)_isMomentFetchResult:(id)arg1 overlappingWithFetchResults:(id)arg2;
+ (id)_memoryTriggerTypesToAvoid;
+ (id)fetchFallbackMemoriesForMemory:(id)arg1 targetCount:(unsigned long long)arg2 memoryLocalIdentifiersToAvoid:(id)arg3 error:(id*)arg4;
+ (id)fetchFallbackMemoriesForMemory:(id)arg1 targetCount:(unsigned long long)arg2 memoryLocalIdentifiersToAvoid:(id)arg3 sharingFilter:(unsigned short)arg4 error:(id*)arg5;
+ (id)fetchFallbackMemoryCandidatesInPhotoLibrary:(id)arg1 memoryLocalIdentifiersToAvoid:(id)arg2 sharingFilter:(unsigned short)arg3;
+ (bool)isMomentFetchResult:(id)arg1 overlappingWithFetchResult:(id)arg2;

@end
