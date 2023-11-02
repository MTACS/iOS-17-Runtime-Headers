
@interface IMDCoreSpotlightRecipientIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_contactForURI:(id)arg1;
+ (id)_handleIDForHandleID:(id)arg1;
+ (id)_selfCSPersonFromHandleID:(id)arg1 messageService:(id)arg2;
+ (id)groupPhotoPathCustomKey;
+ (void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(bool)arg3 metadataToUpdate:(id)arg4 timingProfiler:(id)arg5;
+ (id)suggestedContactNameCustomKey;
+ (id)suggestedContactPhotoCustomKey;

@end
