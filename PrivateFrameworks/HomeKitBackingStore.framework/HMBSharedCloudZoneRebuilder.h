
@interface HMBSharedCloudZoneRebuilder : HMFObject <HMBCloudZoneRebuilder, HMFLogging> {
    HMBCloudZone * _cloudZone;
    NAFuture * _rebuildCompleteFuture;
    HMBCloudZoneRebuilderStatus * _rebuilderStatus;
}

@property (nonatomic) HMBCloudZone *cloudZone;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NAFuture *rebuildCompleteFuture;
@property (copy) HMBCloudZoneRebuilderStatus *rebuilderStatus;
@property (readonly) Class superclass;
@property (getter=isZoneRebuildInProgress, nonatomic, readonly) bool zoneRebuildInProgress;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)cloudZone;
- (void)handleIdentityLost;
- (void)handleZoneChanged;
- (id)initWithCloudZone:(id)arg1;
- (bool)isZoneRebuildInProgress;
- (id)logIdentifier;
- (void)rebuild;
- (id)rebuildCompleteFuture;
- (id)rebuilderStatus;
- (void)setCloudZone:(id)arg1;
- (void)setRebuildCompleteFuture:(id)arg1;
- (void)setRebuilderStatus:(id)arg1;
- (id)zoneStartUp;

@end
