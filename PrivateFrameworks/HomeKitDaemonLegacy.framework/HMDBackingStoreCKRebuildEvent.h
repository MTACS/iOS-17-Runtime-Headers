
@interface HMDBackingStoreCKRebuildEvent : HMDHMBLogEvent {
    int  _rebuildStatus;
}

@property (readonly) int rebuildStatus;

- (id)initWithCloudZoneID:(id)arg1 rebuildStatus:(id)arg2;
- (int)rebuildStatus;

@end
