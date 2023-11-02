
@interface HMDResidentMeshResidentStorage : HMFObject <HMFLogging, HMFTimerDelegate> {
    NSMutableDictionary * _accessoryListWithLinkQuality;
    NSMutableSet * _accessoryUUIDs;
    NSSet * _lastSentAccessoryUUIDs;
    NSDictionary * _lastSentMetrics;
    NSMutableDictionary * _metrics;
    HMDResidentMesh * _owner;
    HMDResidentDevice * _residentDevice;
    HMFTimer * _transmitTimer;
}

@property (nonatomic, retain) NSMutableDictionary *accessoryListWithLinkQuality;
@property (nonatomic, retain) NSMutableSet *accessoryUUIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *lastSentAccessoryUUIDs;
@property (nonatomic, copy) NSDictionary *lastSentMetrics;
@property (nonatomic, retain) NSMutableDictionary *metrics;
@property (nonatomic) HMDResidentMesh *owner;
@property (nonatomic) HMDResidentDevice *residentDevice;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMFTimer *transmitTimer;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_addAccessory:(id)arg1 activateTimer:(bool)arg2;
- (bool)_addAccessoryWithLinkQuality:(id)arg1 toList:(id)arg2;
- (id)_buildPayload;
- (void)_removeAccessory:(id)arg1 activateTimer:(bool)arg2;
- (bool)_residentDidChange;
- (void)_transmitAfter:(double)arg1;
- (void)_transmitStatus:(bool)arg1;
- (id)accessoryListWithLinkQuality;
- (id)accessoryUUIDs;
- (id)initWithResidentDevice:(id)arg1 owner:(id)arg2;
- (id)lastSentAccessoryUUIDs;
- (id)lastSentMetrics;
- (id)logIdentifier;
- (id)metrics;
- (id)owner;
- (id)residentDevice;
- (void)setAccessoryListWithLinkQuality:(id)arg1;
- (void)setAccessoryUUIDs:(id)arg1;
- (void)setLastSentAccessoryUUIDs:(id)arg1;
- (void)setLastSentMetrics:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setResidentDevice:(id)arg1;
- (void)setTransmitTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)transmitTimer;

@end
