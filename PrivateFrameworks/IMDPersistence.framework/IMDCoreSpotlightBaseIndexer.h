
@interface IMDCoreSpotlightBaseIndexer : NSObject <IMDCoreSpotlightIndexer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)auxiliaryItemsForPrimaryAttributes:(id)arg1 withItem:(id)arg2 chat:(id)arg3 isReindexing:(bool)arg4 timingProfiler:(id)arg5;
+ (bool)cancelIndexingForItem:(id)arg1;
+ (id)chatUniqueIdentifierKey;
+ (void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(bool)arg3 metadataToUpdate:(id)arg4 timingProfiler:(id)arg5;
+ (id)indexTypeCustomKey;
+ (id)isBusinessChatCustomKey;
+ (id)isFromMeCustomKey;
+ (id)isGroupChatCustomKey;
+ (id)mentionedAddressesCustomKey;
+ (id)messageServiceCustomKey;
+ (void)startTimingWithProfiler:(id)arg1;
+ (void)stopTimingWithProfiler:(id)arg1;
+ (id)timingProfileKey;

@end
