
@interface HMDMediaGroupParticipantLocalDataStorage : HMFObject <HMDMediaDestinationControllerLocalDataStorageHandler, HMDMediaDestinationLocalDataStorageHandler, HMDMediaGroupsAggregatorBackupReceiverDelegate, HMDMediaGroupsBackupLocalDataStorageHandler, HMFLogging> {
    <HMDMediaGroupParticipantLocalDataStorageDataSource> * _dataSource;
    <HMDMediaGroupParticipantLocalDataStorageDelegate> * _delegate;
    <HMEEventForwarder> * _eventForwarder;
    <HMELastEventStoreReadHandle> * _eventStoreReadHandle;
    <HMDFeaturesDataSource> * _featuresDataSource;
    HMDMediaGroupsAggregatorBackupReceiver * _groupsBackupReceiver;
    NSUUID * _identifier;
    NSObject<OS_os_log> * _logger;
    NSUserDefaults * _userDefaults;
}

@property <HMDMediaGroupParticipantLocalDataStorageDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaGroupParticipantLocalDataStorageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMMediaDestination *destination;
@property (readonly, copy) HMMediaDestinationControllerData *destinationControllerData;
@property (readonly) <HMEEventForwarder> *eventForwarder;
@property (readonly) <HMELastEventStoreReadHandle> *eventStoreReadHandle;
@property (readonly) <HMDFeaturesDataSource> *featuresDataSource;
@property (readonly) HMDMediaGroupsAggregatorBackupReceiver *groupsBackupReceiver;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) Class superclass;
@property (readonly) NSUserDefaults *userDefaults;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2;
- (id)createDefaultParticipantData;
- (id)dataSource;
- (id)delegate;
- (id)destination;
- (id)destinationControllerData;
- (void)didReceiveBackupData:(id)arg1 forBackupReceiver:(id)arg2;
- (id)eventForwarder;
- (id)eventSource;
- (id)eventStoreReadHandle;
- (id)featuresDataSource;
- (id)groupsBackupReceiver;
- (bool)hasDataToPublishInParticipantData:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 backUpReciever:(id)arg2 userDefaults:(id)arg3 eventForwarder:(id)arg4 eventStoreReadHandle:(id)arg5;
- (id)initWithIdentifier:(id)arg1 backUpReciever:(id)arg2 userDefaults:(id)arg3 eventForwarder:(id)arg4 eventStoreReadHandle:(id)arg5 featuresDataSource:(id)arg6;
- (id)lastCachedEventParticipantData;
- (id)logIdentifier;
- (void)migrateWithExpectedDestinationControllerSupportOptions:(unsigned long long)arg1;
- (void)migrateWithExpectedDestinationSupportOptions:(unsigned long long)arg1;
- (id)migratedParticipantData:(id)arg1 withDestinationSupportOptions:(unsigned long long)arg2;
- (void)notifyDidChangeDestinationIdentifier:(id)arg1 forDestinationControllerIdentifier:(id)arg2;
- (id)participantData;
- (id)protoParticipantData;
- (void)publishCachedObject;
- (void)publishCachedObjectIfNeeded;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)topicName;
- (void)updateAudioGroupIdentifier:(id)arg1;
- (void)updateBackupGroupData:(id)arg1;
- (void)updateDestinationControllerAvailableDestinationIdentifiers:(id)arg1;
- (void)updateDestinationControllerData:(id)arg1;
- (void)updateDestinationControllerDestinationIdentifier:(id)arg1;
- (void)updateDestinationControllerSupportedOptions:(unsigned long long)arg1;
- (void)updateDestinationSupportOptions:(unsigned long long)arg1;
- (void)updateMediaDestination:(id)arg1;
- (void)updateParticipantData:(id)arg1;
- (id)userDefaults;

@end
