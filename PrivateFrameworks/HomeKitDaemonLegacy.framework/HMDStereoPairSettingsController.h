
@interface HMDStereoPairSettingsController : HMFObject <HMDCompositeSettingControllerManagerStateManagerDataSource, HMDCompositeSettingControllerManagerStateTransitionDelegate, HMEEventConsumer, HMFLogging> {
    <HMDStereoPairSettingsControllerDataSource> * _dataSource;
    <HMDCompositeSettingControllerManagerStateManager> * _residentRunStateManager;
    NSMutableDictionary * _topicToLastReceivedEvent;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) <HMDStereoPairSettingsControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *homes;
@property (nonatomic, retain) <HMDCompositeSettingControllerManagerStateManager> *residentRunStateManager;
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *topicToLastReceivedEvent;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_currentDevicePrimaryResident;
- (id)_groupOwnerTopicsForMediaSystem:(id)arg1;
- (id)_homeUUID;
- (id)_mediaSystemGroupOwnerAccessoryUUID:(id)arg1;
- (id)_mediaSystemWithAccessorryUUID:(id)arg1;
- (id)_mediaSystems;
- (void)_postAsStereoPairEventsIfDifferentForHome:(id)arg1 mediaSystem:(id)arg2 keyPath:(id)arg3 setting:(id)arg4;
- (void)_processReceivedEvent:(id)arg1 topic:(id)arg2 home:(id)arg3 mediaSystem:(id)arg4;
- (void)_subscribeToAddedMediaSystem:(id)arg1;
- (void)_unsubscribeToRemovedMediaSystem:(id)arg1;
- (id)dataSource;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (void)didUpdateCurrentRunState:(long long)arg1 updatedState:(long long)arg2 forHome:(id)arg3;
- (id)homes;
- (id)initWithDataSource:(id)arg1 workQueue:(id)arg2;
- (id)initWithDataSource:(id)arg1 workQueue:(id)arg2 stateManagerFactory:(id /* block */)arg3;
- (id)logIdentifier;
- (id)mediaSystemGroupOwner:(id)arg1;
- (void)pushLastEvent:(id)arg1 topic:(id)arg2;
- (id)residentRunStateManager;
- (void)setDataSource:(id)arg1;
- (void)setResidentRunStateManager:(id)arg1;
- (void)setTopicToLastReceivedEvent:(id)arg1;
- (void)startIfPrimaryResident;
- (void)stopIfPrimaryResidentChange;
- (void)subscribeToAddedMediaSystemIfPrimaryResident:(id)arg1;
- (id)topicToLastReceivedEvent;
- (void)unsubscribeToRemovedMediaSystemIfPrimaryResident:(id)arg1;
- (id)workQueue;

@end
