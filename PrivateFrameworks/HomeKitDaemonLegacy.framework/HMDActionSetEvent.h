
@interface HMDActionSetEvent : HMMHomeLogEvent <HMDBiomeLogEvent, HMDMicroLocationLogEvent> {
    NSArray * _accessoryUUIDs;
    NSArray * _accessoryUniqueIdentifiers;
    NSString * _actionSetName;
    NSString * _actionSetType;
    NSUUID * _actionSetUUID;
    NSUUID * _actionSetUniqueIdentifier;
    NSString * _bundleId;
    NSString * _clientMetricIdentifier;
    HMDHome * _home;
    NSString * _homeName;
    unsigned int  _numAccessoriesInHome;
    unsigned int  _numAccessoriesModified;
    unsigned int  _numNonEmptyScenesInHome;
    NSString * _serializedIdentifier;
    NSUUID * _transactionId;
    unsigned long long  _triggerSource;
}

@property (nonatomic, readonly, copy) NSArray *accessoryUUIDs;
@property (nonatomic, readonly, copy) NSArray *accessoryUniqueIdentifiers;
@property (nonatomic, readonly, copy) NSString *actionSetName;
@property (nonatomic, readonly, copy) NSString *actionSetType;
@property (nonatomic, readonly, copy) NSUUID *actionSetUUID;
@property (nonatomic, readonly, copy) NSUUID *actionSetUniqueIdentifier;
@property (nonatomic, readonly, copy) NSString *bundleId;
@property (nonatomic, readonly, copy) NSString *clientMetricIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHome *home;
@property (readonly, copy) NSString *homeName;
@property (nonatomic, readonly) unsigned int numAccessoriesInHome;
@property (nonatomic, readonly) unsigned int numAccessoriesModified;
@property (nonatomic, readonly) unsigned int numNonEmptyScenesInHome;
@property (nonatomic, readonly, copy) NSString *serializedIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *transactionId;
@property (nonatomic, readonly) unsigned long long triggerSource;

- (void).cxx_destruct;
- (id)accessoryUUIDs;
- (id)accessoryUniqueIdentifiers;
- (id)actionSetName;
- (id)actionSetType;
- (id)actionSetUUID;
- (id)actionSetUniqueIdentifier;
- (id)biomeEventsRepresentationForLogObserver:(id)arg1;
- (id)bundleId;
- (id)clientMetricIdentifier;
- (id)home;
- (id)homeName;
- (id)initWithActionSet:(id)arg1 source:(unsigned long long)arg2 numAccessories:(unsigned int)arg3 bundleId:(id)arg4 transactionId:(id)arg5;
- (id)microLocationMetadataForLogEventObserver:(id)arg1;
- (unsigned long long)microLocationScanTriggerTypeForLogEventObserver:(id)arg1;
- (unsigned int)numAccessoriesInHome;
- (unsigned int)numAccessoriesModified;
- (unsigned int)numNonEmptyScenesInHome;
- (id)serializedIdentifier;
- (bool)shouldTriggerMicroLocationLocalizationScanForLogEventObserver:(id)arg1;
- (bool)shouldTriggerMicroLocationRecordingScanForLogEventObserver:(id)arg1;
- (id)transactionId;
- (unsigned long long)triggerSource;

@end
