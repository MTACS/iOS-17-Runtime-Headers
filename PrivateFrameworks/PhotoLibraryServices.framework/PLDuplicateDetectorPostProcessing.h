
@interface PLDuplicateDetectorPostProcessing : NSObject

+ (id)_postProcessSortOIDs:(id)arg1 oidMetadataMap:(id)arg2 sortKey:(id)arg3 secondarySortKey:(id)arg4;
+ (void)postProcessDuplicateSubGroupWithResult:(id)arg1 metadataMap:(id)arg2 metadataKey:(id)arg3 secondarySortKey:(id)arg4 subGroupSplitDecisionBlock:(id /* block */)arg5;
+ (id /* block */)sharedLibraryLivePhotoPostProcessDuplicateSubGroupSplitDecisionBlockWithMetadataMap:(id)arg1;
+ (id /* block */)sharedLibraryRawPlusJPEGPostProcessDuplicateSubGroupSplitDecisionBlockWithMetadataMap:(id)arg1;

@end
