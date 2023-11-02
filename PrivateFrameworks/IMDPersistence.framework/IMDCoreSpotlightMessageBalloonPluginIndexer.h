
@interface IMDCoreSpotlightMessageBalloonPluginIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_newSummaryTextForPayloadData:(id)arg1 item:(id)arg2;
+ (id)_pluginPayloadAttachmentPathsForItem:(id)arg1;
+ (bool)_richLinkPluginHasRichContentForItem:(id)arg1 attachmentPaths:(id)arg2 originalURL:(id)arg3 outURL:(id*)arg4 outTitle:(id*)arg5 outLPMetadata:(id*)arg6;
+ (void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(bool)arg3 metadataToUpdate:(id)arg4 timingProfiler:(id)arg5;
+ (id)lpDescriptionCustomKey;
+ (id)lpHasRichMediaCustomKey;
+ (id)lpPluginPathsCustomKey;
+ (id)lpTitleCustomKey;

@end
