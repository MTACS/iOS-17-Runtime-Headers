
@interface HMDMediaGroupsAggregatorBackupSender : HMFObject <HMDMediaGroupsAggregateBackupMessageTimerDelegate, HMDMediaGroupsAggregateBackupMessageTimerProvider, HMFLogging> {
    <HMDMediaGroupsAggregateBackupMessageTimerProvider> * _backupTimerProvider;
    NSMutableDictionary * _backupTimers;
    <HMDMediaGroupsAggregatorBackupSenderDataSource> * _dataSource;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property <HMDMediaGroupsAggregateBackupMessageTimerProvider> *backupTimerProvider;
@property <HMDMediaGroupsAggregatorBackupSenderDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_sendBackupToFirstPartyParticipantAccessoryUUID:(id)arg1 backupGroups:(id)arg2;
- (void)_sendBackupToParticipantAccessoryUUID:(id)arg1;
- (id)backupGroupsForParticipantAccessoryUUID:(id)arg1;
- (id)backupTimerForParticipantAccessoryUUID:(id)arg1;
- (id)backupTimerProvider;
- (void)clearCachedData;
- (void)clearCachedDataForParticipantAccessoryUUID:(id)arg1;
- (void)createNewBackupTimerForParticipantAccessoryUUID:(id)arg1;
- (id)dataSource;
- (void)didFireTimerForMediaGroupsAggregateBackupMessageTimer:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 backupTimerProvider:(id)arg2;
- (void)locallyRouteGroupsBackupDataMessage:(id)arg1 toParticipantAccessoryUUID:(id)arg2;
- (id)logIdentifier;
- (void)markAttemptForParticipantAccessoryUUID:(id)arg1 withMessageIdentifier:(id)arg2;
- (id)mediaGroupsAggregateBackupMessageTimerWithParticipantAccessoryUUID:(id)arg1;
- (id)receiverForParticipantAccessoryUUID:(id)arg1;
- (void)removeBackupTimerWithParticipantAccessoryUUID:(id)arg1;
- (void)routeBackedUpGroupsMessage:(id)arg1 toParticipantAccessoryUUID:(id)arg2;
- (id)routerParticipantAccessoryUUID:(id)arg1;
- (void)sendBackupToParticipantAccessoryUUID:(id)arg1;
- (void)setBackUpTimer:(id)arg1;
- (void)setBackupTimerProvider:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)startBackupTimerWithParticipantAccessoryUUID:(id)arg1 dueToFailedMessageIdentifier:(id)arg2;

@end
