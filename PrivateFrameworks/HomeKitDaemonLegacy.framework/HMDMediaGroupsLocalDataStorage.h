
@interface HMDMediaGroupsLocalDataStorage : HMFObject <HMDMediaGroupsAggregatorBackupSenderDataSource> {
    HMDMediaGroupsAggregatorBackupSender * _backupDataSender;
    <HMDMediaGroupsLocalDataStorageDataSource> * _dataSource;
    NSMutableDictionary * _groups;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _participantAccessoryUUIDToAssociatedGroupIdentifier;
}

@property (readonly) HMDMediaGroupsAggregatorBackupSender *backupDataSender;
@property <HMDMediaGroupsLocalDataStorageDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addBackedUpGroup:(id)arg1;
- (void)addBackedUpGroups:(id)arg1;
- (id)allParticipantAccessoryUUIDs;
- (id)associatedGroupIdentifierForParticipantAccessoryUUID:(id)arg1;
- (id)associatedGroupsWithGroupIdentifier:(id)arg1;
- (void)backupData;
- (id)backupDataSender;
- (id)backupGroupsForParticipantAccessoryUUID:(id)arg1;
- (id)backupGroupsForParticipantAccessoryUUID:(id)arg1 mediaGroupsAggregatorBackupSender:(id)arg2;
- (void)clearCachedData;
- (void)clearCachedDataForParticipantAccessoryUUID:(id)arg1;
- (id)dataSource;
- (id)groupWithIdentifier:(id)arg1;
- (id)groups;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 backupSender:(id)arg2;
- (id)logIdentifier;
- (id)nullSentinelUUID;
- (id)receiverForParticipantAccessoryUUID:(id)arg1;
- (id)receiverForParticipantAccessoryUUID:(id)arg1 mediaGroupsAggregatorBackupSender:(id)arg2;
- (void)removeAssociatedGroupIdentifierForParticipantAccessoryUUID:(id)arg1;
- (void)removeGroupWithIdentifier:(id)arg1;
- (id)routerForParticipantAccessoryUUID:(id)arg1;
- (id)routerForParticipantAccessoryUUID:(id)arg1 mediaGroupsAggregatorBackupSender:(id)arg2;
- (void)setDataSource:(id)arg1;
- (void)setParticipantAccessoryUUID:(id)arg1 associatedGroupIdentifier:(id)arg2;
- (void)unsetParticipantAccessoryUUIDsWithAssociatedGroupIdentifier:(id)arg1;
- (void)updateGroup:(id)arg1;
- (void)updateGroup:(id)arg1 participantAccessoryUUIDs:(id)arg2;
- (void)updateUsingParticipantAccessoryUUID:(id)arg1 associatedGroupIdentifier:(id)arg2 backedUpGroupData:(id)arg3;

@end
