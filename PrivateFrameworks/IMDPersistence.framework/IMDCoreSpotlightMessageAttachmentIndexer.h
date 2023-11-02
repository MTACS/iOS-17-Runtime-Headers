
@interface IMDCoreSpotlightMessageAttachmentIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_attachmentIsSticker:(id)arg1;
+ (id)_possibleVideoComplementExtensions;
+ (id)assetUUIDKey;
+ (id)attachmentIndexTypeForPath:(id)arg1 filename:(id)arg2 isSticker:(bool)arg3 isCommSafetySensitive:(bool)arg4 knownSender:(bool)arg5;
+ (id)attachmentIsSyndicatableMediaKey;
+ (id)attachmentRecordsFromAttachments:(id)arg1;
+ (id)auxiliaryItemsForPrimaryAttributes:(id)arg1 withItem:(id)arg2 chat:(id)arg3 isReindexing:(bool)arg4 timingProfiler:(id)arg5;
+ (void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(bool)arg3 metadataToUpdate:(id)arg4 timingProfiler:(id)arg5;
+ (id)livePhotoComplementKey;
+ (bool)messageSupportsIndexingForItem:(id)arg1;
+ (id)momentShareURLKey;
+ (unsigned long long)partKeyForAttachmentFromItem:(id)arg1 withGUID:(id)arg2;
+ (id)videoComplementPathForResourceURL:(id)arg1;

@end
