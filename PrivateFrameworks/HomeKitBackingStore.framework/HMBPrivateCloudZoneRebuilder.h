
@interface HMBPrivateCloudZoneRebuilder : HMFObject <HMBCloudZoneRebuilder, HMFLogging, HMFTimerDelegate> {
    HMBCloudZone * _cloudZone;
    NSUUID * _lastRebuildUUID;
    CKRecord * _previousSentinelRebuildRecord;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _propertyLock;
    NAFuture * _rebuildCompleteFuture;
    HMBCloudZoneRebuilderStatus * _rebuilderStatus;
    HMFTimer * _uploadMonitorWatchdogTimer;
}

@property (nonatomic) HMBCloudZone *cloudZone;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *lastRebuildUUID;
@property (nonatomic, retain) CKRecord *previousSentinelRebuildRecord;
@property (nonatomic, retain) NAFuture *rebuildCompleteFuture;
@property (copy) HMBCloudZoneRebuilderStatus *rebuilderStatus;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMFTimer *uploadMonitorWatchdogTimer;
@property (getter=isZoneRebuildInProgress, nonatomic, readonly) bool zoneRebuildInProgress;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)cloudZone;
- (void)handleIdentityLost;
- (void)handleZoneChanged;
- (id)initWithCloudZone:(id)arg1;
- (bool)isZoneRebuildInProgress;
- (id)lastRebuildUUID;
- (id)logIdentifier;
- (id)previousSentinelRebuildRecord;
- (void)rebuild;
- (id)rebuildCompleteFuture;
- (id)rebuilderStatus;
- (void)setCloudZone:(id)arg1;
- (void)setLastRebuildUUID:(id)arg1;
- (void)setPreviousSentinelRebuildRecord:(id)arg1;
- (void)setRebuildCompleteFuture:(id)arg1;
- (void)setRebuilderStatus:(id)arg1;
- (void)setUploadMonitorWatchdogTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)uploadMonitorWatchdogTimer;
- (id)zoneStartUp;

@end
