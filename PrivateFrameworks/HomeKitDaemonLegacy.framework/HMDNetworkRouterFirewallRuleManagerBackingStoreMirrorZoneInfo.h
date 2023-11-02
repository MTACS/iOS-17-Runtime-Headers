
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorZoneInfo : HMFObject {
    HMDNetworkRouterFirewallRuleCloudZone * _cloudZone;
    bool  _ignoreChangeToken;
    HMBLocalZone * _mirroredLocalZone;
    NSMutableSet * _recordIDs;
    bool  _zoneHasChanged;
    CKRecordZoneID * _zoneID;
    bool  _zoneWasDeleted;
}

@property (nonatomic, retain) HMDNetworkRouterFirewallRuleCloudZone *cloudZone;
@property (nonatomic, readonly) bool ignoreChangeToken;
@property (nonatomic, retain) HMBLocalZone *mirroredLocalZone;
@property (nonatomic, readonly) NSMutableSet *recordIDs;
@property (nonatomic, readonly) bool zoneHasChanged;
@property (nonatomic, readonly) CKRecordZoneID *zoneID;
@property (nonatomic, readonly) bool zoneWasDeleted;

- (void).cxx_destruct;
- (id)cloudZone;
- (void)forceRefresh;
- (bool)ignoreChangeToken;
- (id)initWithZoneID:(id)arg1;
- (void)markChanged;
- (void)markDeleted;
- (id)mirroredLocalZone;
- (id)recordIDs;
- (void)setCloudZone:(id)arg1;
- (void)setMirroredLocalZone:(id)arg1;
- (bool)zoneHasChanged;
- (id)zoneID;
- (bool)zoneWasDeleted;

@end
