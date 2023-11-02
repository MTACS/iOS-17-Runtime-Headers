
@interface HMDCameraRecordingLoadBalancer : HMFObject <HMFLogging, HMISystemResourceUsageMonitorDelegate> {
    NSMutableDictionary * _decisionsByCameraUUIDByDeviceUUID;
    HMDHomeManager * _homeManager;
    NSMutableDictionary * _lastDecisionByCameraUUID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _readyToRecordByCameraUUIDString;
    NSMutableDictionary * _recordingSessionSummariesByCameraUUIDString;
    HMISystemResourceUsageMonitor * _systemResourceUsageMonitor;
    unsigned long long  _totalNumberOfStreams;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSMutableDictionary *decisionsByCameraUUIDByDeviceUUID;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHomeManager *homeManager;
@property (readonly) NSMutableDictionary *lastDecisionByCameraUUID;
@property (readonly) NSMutableDictionary *readyToRecordByCameraUUIDString;
@property (readonly) NSMutableDictionary *recordingSessionSummariesByCameraUUIDString;
@property (readonly) Class superclass;
@property (readonly) HMISystemResourceUsageMonitor *systemResourceUsageMonitor;
@property unsigned long long totalNumberOfStreams;

+ (id)logCategory;

- (void).cxx_destruct;
- (unsigned long long)_jobSlotsWithSystemResourceUsageLevel:(long long)arg1;
- (id)_loadBalancingDecisionForCamera:(id)arg1 deviceFilter:(id /* block */)arg2;
- (id)_loadBalancingDescriptionFromSortedNodes:(id)arg1;
- (unsigned long long)_partialJobSlotsWithSystemResourceUsageLevel:(long long)arg1;
- (void)_updateActiveRecordingSessionsMetric;
- (void)_updateReadyToRecordMetric;
- (id)decisionsByCameraUUIDByDeviceUUID;
- (void)handleRecordingSessionForwardingFailureForDecision:(id)arg1;
- (void)handleRecordingSessionForwardingSuccessForDecision:(id)arg1;
- (void)handleResidentMeshInitialized:(id)arg1;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1 resourceUsageMonitor:(id)arg2;
- (bool)isReadyToRecordForCameraWithUUID:(id)arg1;
- (id)lastDecisionByCameraUUID;
- (id)loadBalancingDecisionForCamera:(id)arg1 deviceFilter:(id /* block */)arg2;
- (id)readyToRecordByCameraUUIDString;
- (void)recordingDidEndForCameraWithUUID:(id)arg1;
- (void)recordingDidStartForCameraWithUUID:(id)arg1;
- (id)recordingSessionSummariesByCameraUUIDString;
- (void)removeDataForCameraWithUUID:(id)arg1;
- (void)setReadyToRecord:(bool)arg1 forCameraWithUUID:(id)arg2;
- (void)setTotalNumberOfStreams:(unsigned long long)arg1;
- (void)start;
- (void)systemResourceUsageDidChangeTo:(long long)arg1;
- (id)systemResourceUsageMonitor;
- (unsigned long long)totalNumberOfStreams;

@end
