
@protocol AVPlayerItemMetadataCollectorPushDelegate <NSObject>

@required

- (void)metadataCollector:(AVPlayerItemMetadataCollector *)arg1 didCollectDateRangeMetadataGroups:(NSArray *)arg2 indexesOfNewGroups:(NSIndexSet *)arg3 indexesOfModifiedGroups:(NSIndexSet *)arg4;

@end
