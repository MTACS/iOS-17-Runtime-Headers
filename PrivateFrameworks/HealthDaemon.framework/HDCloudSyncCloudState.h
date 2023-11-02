
@interface HDCloudSyncCloudState : NSObject <NSCopying> {
    int  _minimumSupportedProtocolVersion;
    HDCloudSyncZone * _primaryPushZone;
    NSArray * _targets;
    NSDictionary * _zonesByIdentifier;
}

@property (nonatomic, readonly) int minimumSupportedProtocolVersion;
@property (nonatomic, readonly) HDCloudSyncZone *primaryPushZone;
@property (nonatomic, readonly, copy) NSArray *pullTargets;
@property (nonatomic, readonly) NSSet *pullZones;
@property (nonatomic, readonly, copy) NSArray *pushTargets;
@property (nonatomic, readonly) NSSet *seizedZones;
@property (nonatomic, readonly, copy) NSArray *targets;
@property (nonatomic, readonly, copy) NSDictionary *zonesByIdentifier;

- (void).cxx_destruct;
- (id)cloudStateByAddingZone:(id)arg1;
- (id)cloudStateByAddingZones:(id)arg1;
- (id)cloudStateByRemovingZones:(id)arg1;
- (id)cloudStateByReplacingTargets:(id)arg1;
- (id)cloudStateWithTargets:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detailedDescription;
- (unsigned long long)hash;
- (id)init;
- (id)initWithZones:(id)arg1;
- (id)initWithZones:(id)arg1 targets:(id)arg2;
- (id)initWithZonesByIdentifier:(id)arg1;
- (id)initWithZonesByIdentifier:(id)arg1 targets:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)masterZoneForContainerID:(id)arg1;
- (int)minimumSupportedProtocolVersion;
- (id)primaryPushZone;
- (id)pullTargets;
- (id)pullZones;
- (id)pushTargets;
- (id)seizedZones;
- (id)targets;
- (id)unifiedSyncZoneForContainerID:(id)arg1;
- (id)zoneForRecordID:(id)arg1 containerIdentifier:(id)arg2;
- (id)zonesByIdentifier;
- (id)zonesForContainerID:(id)arg1;

@end
