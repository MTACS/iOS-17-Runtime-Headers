
@interface HMDAccessoryNetworkProtectionGroupRegistry : NSObject <HMFLogging, HMFMessageReceiver> {
    NSMutableDictionary * _groupRecords;
    HMDHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSSet *activeGroups;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) NSSet *persistedGroups;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_evaluateActiveStatusForGroupWithUUID:(id)arg1;
- (void)_registerForAccessoryChanges:(id)arg1;
- (void)_registerForMessages;
- (void)_setupActiveGroupsForHome;
- (void)_setupProtectionGroupForAccessory:(id)arg1 shouldNotifyChange:(bool)arg2;
- (bool)_updateGroupWithUUID:(id)arg1 active:(bool)arg2;
- (id)accessoriesForGroupWithUUID:(id)arg1;
- (id)activeGroups;
- (bool)addActiveSurrogateGroup:(id)arg1;
- (void)addActiveSurrogateGroupForAccessory:(id)arg1 shouldNotifyChange:(bool)arg2;
- (void)configure;
- (id)groupRecordWithUUID:(id)arg1;
- (id)groupWithUUID:(id)arg1;
- (void)handleAddOrUpdateAccessoryNetworkProtectionGroupModel:(id)arg1 message:(id)arg2;
- (void)handleAddedAccessory:(id)arg1;
- (void)handleRemoveAccessoryNetworkProtectionGroupModel:(id)arg1 message:(id)arg2;
- (void)handleRemovedAccessory:(id)arg1;
- (void)handleUpdateAccessoryNetworkProtectionGroupProtectionMode:(id)arg1;
- (void)handleUpdatedAccessoryConfiguredNetworkProtectionGroup:(id)arg1;
- (void)handleUpdatedAccessoryInitialManufacturerOrCategory:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1 notificationCenter:(id)arg2;
- (id)initWithHome:(id)arg1 notificationCenter:(id)arg2 persistedGroups:(id)arg3;
- (id)logIdentifier;
- (id)markGroupWithUUID:(id)arg1 active:(bool)arg2;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)notificationCenter;
- (void)notifyClientsOfAddedGroup:(id)arg1;
- (void)notifyClientsOfRemovedGroup:(id)arg1;
- (id)persistedGroups;
- (id)removeGroupWithUUID:(id)arg1;
- (long long)targetProtectionModeForGroupWithUUID:(id)arg1;
- (bool)updateTargetProtectionModeForGroupWithUUID:(id)arg1 protectionMode:(long long)arg2 error:(id*)arg3;
- (bool)updateTargetProtectionModeForGroupWithUUID:(id)arg1 protectionMode:(long long)arg2 error:(id*)arg3 requestMessage:(id)arg4;
- (id)workQueue;

@end
