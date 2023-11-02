
@protocol HMBCloudZoneDelegate <NSObject>

@optional

- (void)cloudZone:(HMBCloudZone *)arg1 didChangeRebuildStatus:(HMBCloudZoneRebuilderStatus *)arg2;
- (bool)cloudZone:(HMBCloudZone *)arg1 didEncounterConflicts:(NSArray *)arg2 options:(HMBProcessingOptions *)arg3;
- (void)cloudZone:(HMBCloudZone *)arg1 didRemoveParticipantWithClientIdentifier:(NSUUID *)arg2;
- (void)cloudZone:(HMBCloudZone *)arg1 didUpdateParticipantWithClientIdentifier:(NSUUID *)arg2;

@end
