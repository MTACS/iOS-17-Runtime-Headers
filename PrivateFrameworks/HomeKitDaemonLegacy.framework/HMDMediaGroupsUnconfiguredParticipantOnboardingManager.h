
@interface HMDMediaGroupsUnconfiguredParticipantOnboardingManager : NSObject <HMFLogging> {
    <HMDMediaGroupsUnconfiguredParticipantOnboardingManagerDataSource> * _dataSource;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _queuedAssociatedGroupIdentifiers;
}

@property <HMDMediaGroupsUnconfiguredParticipantOnboardingManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)attemptOnboardingForParticipantAccessoryUUID:(id)arg1;
- (void)configureWithNotificationCenter:(id)arg1;
- (id)dataSource;
- (void)dequeueAvailableOnboadedParticipants;
- (id)dequeuedAssociatedGroupIdentifierForParticipantAccessoryUUID:(id)arg1;
- (void)handleMediaGroupsAggregateConsumerUpdatedAggregateDataNotification:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)logIdentifier;
- (id)mediaDestinationManagerWithParticipantAccessoryUUID:(id)arg1;
- (void)queueOnboardingParticipantWithAccessoryUUID:(id)arg1 withAssociatedGroupIdentifier:(id)arg2;
- (id)queuedParticipantAccessoryUUIDs;
- (void)setDataSource:(id)arg1;
- (void)setQueuedAssociatedGroupIdentifier:(id)arg1 forParticipantAccessoryUUID:(id)arg2;

@end
