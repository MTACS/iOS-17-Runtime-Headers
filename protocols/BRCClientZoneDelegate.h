
@protocol BRCClientZoneDelegate <NSObject>

@required

- (void)didChangeSyncStatusForContainerMetadataForContainer:(BRCClientZone *)arg1;
- (void)didChangeSyncStatusForZoneHealthForContainer:(BRCClientZone *)arg1;
- (void)didInitialSyncDownForClientZone:(BRCClientZone *)arg1;
- (void)willInitialSyncDownForClientZone:(BRCClientZone *)arg1;

@end
