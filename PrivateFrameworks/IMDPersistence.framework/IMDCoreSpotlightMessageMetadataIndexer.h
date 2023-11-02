
@interface IMDCoreSpotlightMessageMetadataIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)cancelIndexingForItem:(id)arg1;
+ (void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(bool)arg3 metadataToUpdate:(id)arg4 timingProfiler:(id)arg5;

@end
