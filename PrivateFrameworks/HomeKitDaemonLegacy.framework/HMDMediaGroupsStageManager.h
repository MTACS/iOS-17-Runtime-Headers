
@interface HMDMediaGroupsStageManager : NSObject <HMFLogging, HMFStagedValueDelegate> {
    HMDMediaGroupsAggregateData * _committedAggregateData;
    <HMDMediaGroupsStageManagerDelegate> * _delegate;
    NSUUID * _identifier;
    HMDMediaGroupsAggregateData * _lastNotifiedAggregateData;
    HMFStagedValue * _stagedAggregateData;
    NSUUID * _stagedUnpairedCurrentDestinationControllerIdentifier;
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) HMDMediaGroupsAggregateData *aggregateData;
@property (retain) HMDMediaGroupsAggregateData *committedAggregateData;
@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaGroupsStageManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (copy) HMDMediaGroupsAggregateData *lastNotifiedAggregateData;
@property (readonly) HMFStagedValue *stagedAggregateData;
@property (retain) NSUUID *stagedUnpairedCurrentDestinationControllerIdentifier;
@property (readonly) Class superclass;
@property (readonly) NSUserDefaults *userDefaults;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)aggregateData;
- (void)clearSavedData;
- (void)commitAggregateData:(id)arg1;
- (id)committedAggregateData;
- (void)configure;
- (id)delegate;
- (bool)hasSavedIdentifier;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 userDefaults:(id)arg2;
- (id)lastNotifiedAggregateData;
- (id)logIdentifier;
- (void)notifyOfUpdatedAggregateData;
- (void)refreshManager;
- (void)saveAggregateData:(id)arg1;
- (void)saveAssociatedGroupDataForCurrentLegacyAppleTVAccessory:(id)arg1;
- (void)saveAssociatedGroupDataForCurrentLegacyHomePodAccessory:(id)arg1;
- (void)saveAssociatedGroupDataForLegacyCurrentAccessory:(id)arg1;
- (void)saveDataForLegacyMediaSystem:(id)arg1;
- (void)saveDestinationControllerData:(id)arg1;
- (void)saveDestinations:(id)arg1;
- (void)saveGroup:(id)arg1;
- (void)saveIdentifier;
- (id)savedAggregateData;
- (void)setCommittedAggregateData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastNotifiedAggregateData:(id)arg1;
- (void)setStagedUnpairedCurrentDestinationControllerIdentifier:(id)arg1;
- (void)stageNullDestinationForCurrentDestinationControllerIdentifier:(id)arg1;
- (id)stagedAggregateData;
- (id)stagedUnpairedCurrentDestinationControllerIdentifier;
- (void)stagedValue:(id)arg1 didExpireValue:(id)arg2;
- (id)transformedDestinationControllersData;
- (id)transformedDestinationForLegacyMediaSystem:(id)arg1 role:(unsigned long long)arg2;
- (id)transformedDestinations;
- (id)transformedGroups;
- (void)unstageNullDestinationForCurrentDestinationController;
- (id)userDefaults;

@end
