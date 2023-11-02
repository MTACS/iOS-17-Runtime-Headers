
@protocol IMDCoreSpotlightIndexer <NSObject>

@required

+ (NSArray *)auxiliaryItemsForPrimaryAttributes:(CSSearchableItemAttributeSet *)arg1 withItem:(NSDictionary *)arg2 chat:(NSDictionary *)arg3 isReindexing:(bool)arg4 timingProfiler:(IMDSpotlightIndexerTimingProfiler *)arg5;
+ (bool)cancelIndexingForItem:(NSDictionary *)arg1;
+ (void)indexItem:(NSDictionary *)arg1 withChat:(NSDictionary *)arg2 isReindexing:(bool)arg3 metadataToUpdate:(CSSearchableItemAttributeSet *)arg4 timingProfiler:(IMDSpotlightIndexerTimingProfiler *)arg5;
+ (void)startTimingWithProfiler:(IMDSpotlightIndexerTimingProfiler *)arg1;
+ (void)stopTimingWithProfiler:(IMDSpotlightIndexerTimingProfiler *)arg1;
+ (NSString *)timingProfileKey;

@end
