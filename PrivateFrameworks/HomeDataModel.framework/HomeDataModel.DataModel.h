
@interface HomeDataModel.DataModel : NSObject <HFAccessorySoftwareUpdateControllerV2Observer, HFHomeObserver, HMAccessoryDelegate, HMAccessoryDelegatePrivate, HMAccessorySoftwareUpdateControllerV2Delegate, HMHomeDelegate, HMHomeDelegatePrivate, HMHomeManagerDelegate, HMLightProfileDelegate, HMMediaSessionDelegate, HMSoftwareUpdateDelegate, HMSymptomsHandlerDelegate, HMUserActionPredictionControllerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _currentStateSnapshot;
    void currentHome;
    void currentUserActionPredictionControllersDictionary;
    void currentUserActionPredictionsDictionary;
    void homeManager;
    void homesToStateSnapshots;
    void incomingHomeKitMessagesQueue;
}

@property (nonatomic, readonly) NSArray *alphabeticalHomes;
@property (nonatomic, retain) HMHome *currentHome;
@property (nonatomic, retain) HMHomeManager *homeManager;
@property (nonatomic, readonly) HMHome *primaryHome;
@property (nonatomic, readonly) NSArray *sortedHomes;

// Image: /System/Library/PrivateFrameworks/HomeDataModel.framework/HomeDataModel

+ (id)homeManagerConfiguration;
+ (void)setHomeManagerConfiguration:(id)arg1;
+ (id)shared;

- (void).cxx_destruct;
- (void)accessory:(id)arg1 didAddProfile:(id)arg2;
- (void)accessory:(id)arg1 didRemoveProfile:(id)arg2;
- (void)accessory:(id)arg1 didUpdateApplicationDataForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateAssociatedServiceTypeForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateFirmwareVersion:(id)arg2;
- (void)accessory:(id)arg1 didUpdateNameForService:(id)arg2;
- (void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;
- (void)accessoryDidUpdateApplicationData:(id)arg1;
- (void)accessoryDidUpdateName:(id)arg1;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)accessoryDidUpdateServices:(id)arg1;
- (id)accessoryFor:(id)arg1;
- (id)accessoryFor:(id)arg1 in:(id)arg2;
- (id)accessoryFromAnyHomeFor:(id)arg1;
- (id)actionSetFor:(id)arg1;
- (id)alphabeticalHomes;
- (id)characteristicFor:(id)arg1;
- (id)currentHome;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didAddActionSet:(id)arg2;
- (void)home:(id)arg1 didAddMediaSystem:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
- (void)home:(id)arg1 didAddService:(id)arg2 toServiceGroup:(id)arg3;
- (void)home:(id)arg1 didAddServiceGroup:(id)arg2;
- (void)home:(id)arg1 didAddTrigger:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didAddZone:(id)arg2;
- (void)home:(id)arg1 didEncounterError:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveActionSet:(id)arg2;
- (void)home:(id)arg1 didRemoveMediaSystem:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3;
- (void)home:(id)arg1 didRemoveService:(id)arg2 fromServiceGroup:(id)arg3;
- (void)home:(id)arg1 didRemoveServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveTrigger:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didRemoveZone:(id)arg2;
- (void)home:(id)arg1 didUnblockAccessory:(id)arg2;
- (void)home:(id)arg1 didUpdateActionsForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateHomeHubState:(unsigned long long)arg2;
- (void)home:(id)arg1 didUpdateNameForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForZone:(id)arg2;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didUpdateTrigger:(id)arg2;
- (void)homeDidUpdateAccessControlForCurrentUser:(id)arg1;
- (void)homeDidUpdateName:(id)arg1;
- (void)homeDidUpdateSupportedFeatures:(id)arg1;
- (id)homeFor:(id)arg1;
- (id)homeManager;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didUpdateAuthorizationStatus:(unsigned long long)arg2;
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)homeManagerDidUpdatePrimaryHome:(id)arg1;
- (id)init;
- (void)lightProfile:(id)arg1 didUpdateSettings:(id)arg2;
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;
- (id)primaryHome;
- (void)recalculateCurrentHome;
- (id)roomFor:(id)arg1;
- (id)serviceFor:(id)arg1;
- (id)serviceGroupFor:(id)arg1;
- (void)setCurrentHome:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)softwareUpdate:(id)arg1 didUpdateDocumentation:(id)arg2;
- (void)softwareUpdate:(id)arg1 didUpdateState:(long long)arg2;
- (void)softwareUpdateController:(id)arg1 accessory:(id)arg2 didFailUpdate:(id)arg3 withError:(id)arg4 timestamp:(id)arg5;
- (void)softwareUpdateController:(id)arg1 accessory:(id)arg2 didReceiveUpdate:(id)arg3;
- (void)softwareUpdateController:(id)arg1 accessory:(id)arg2 didUpdateProgress:(id)arg3;
- (id)sortedHomes;
- (void)symptomsHandler:(id)arg1 didUpdateSymptoms:(id)arg2;
- (void)userActionPredictionController:(id)arg1 didUpdatePredictions:(id)arg2;
- (id)userFor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (void)didUpdateToInstallingState:(bool)arg1 forAccessory:(id)arg2;
- (void)home:(id)arg1 didReadValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
- (void)home:(id)arg1 didWriteValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
- (void)home:(id)arg1 willReadValuesForCharacteristics:(id)arg2;

@end
