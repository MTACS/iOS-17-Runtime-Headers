
@interface NRPairedDeviceRegistry : NRRegistryClient <NRPairedDeviceRegistryXPCFrameworkDelegate> {
    unsigned long long  _callCount;
    bool  _disconnected;
    unsigned short  _lastCompatibilityState;
    unsigned long long  _lastStatus;
    NSMutableDictionary * _legacyDevices;
    NSObject<OS_dispatch_queue> * _pairedDeviceRegistryDeviceListQueue;
    NSObject<OS_dispatch_queue> * _pairedRegistryGetDevicesQueue;
    NRCallbackArray * _waitingForRegistryUpdateBlocks;
}

@property (nonatomic, readonly) unsigned long long status;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

+ (id /* block */)activeDeviceSelectorBlock;
+ (id /* block */)activePairedDeviceSelectorBlock;
+ (id /* block */)pairedDevicesSelectorBlock;
+ (Class)proxyClass;
+ (id /* block */)setupCompletedDevicesSelectorBlock;
+ (id)sharedInstance;
+ (bool)shouldBoostProcess;

- (void).cxx_destruct;
- (id)_;
- (id)_deviceIDAtSwitchIndex:(unsigned int)arg1 date:(id*)arg2;
- (void)_getActiveDeviceAssertionsWithInlineBlock:(id /* block */)arg1;
- (id)_getChangeHistory;
- (id)_getClientInfo;
- (id)_getLocalDeviceCollection;
- (id)_getSecureProperties:(id)arg1;
- (unsigned long long)_getStatusWithCollection:(id)arg1;
- (void)_invalidateActiveDeviceAssertionWithIdentifier:(id)arg1;
- (void)_pingActiveGizmoWithPriority:(long long)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (void)_submitAlbertPairingReport;
- (void)abortPairing;
- (void)abortPairingWithReason:(id)arg1;
- (void)altAccountPairingStorePathPairingID:(id /* block */)arg1;
- (id)applyDiff:(id)arg1;
- (void)beginDiscovery;
- (void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(id /* block */)arg3;
- (void)beginMigrationWithDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)blockAndQueryVersions;
- (void)checkIfFlaggedForRecoveryWithCompletion:(id /* block */)arg1;
- (void)clearRecoveryFlagWithCompletion:(id /* block */)arg1;
- (void)clearWatchNeedsGraduation:(id /* block */)arg1;
- (void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(id /* block */)arg4;
- (void)companionPasscodePairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(id /* block */)arg3;
- (unsigned short)compatibilityState;
- (void)completeRTCPairingMetricForMetricID:(id)arg1 withSuccess:(id /* block */)arg2;
- (id)deviceForBTDeviceID:(id)arg1;
- (id)deviceForBluetoothID:(id)arg1;
- (id)deviceForIDSDevice:(id)arg1;
- (id)deviceForNRDevice:(id)arg1 fromIDSDevices:(id)arg2;
- (id)deviceForPairingID:(id)arg1;
- (id)deviceIDForIDSDevice:(id)arg1;
- (id)deviceIDForNRDevice:(id)arg1;
- (id)devicesFromMigrationConsentRequestData:(id)arg1;
- (void)endDiscovery;
- (void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2;
- (void)fakePairedSyncIsCompleteWithCompletion:(id /* block */)arg1;
- (id)getActivePairedDevice;
- (id)getActivePairedDeviceExcludingAltAccount;
- (id)getActivePairedDeviceIncludingAltAccount;
- (id)getAllDevices;
- (id)getAllDevicesWithArchivedAltAccountDevicesMatching:(id /* block */)arg1;
- (id)getAllDevicesWithArchivedDevices;
- (id)getAllDevicesWithArchivedDevicesMatching:(id /* block */)arg1;
- (id)getDevices;
- (id)getDevicesMatching:(id /* block */)arg1;
- (void)getDevicesWithBlock:(id /* block */)arg1;
- (void)getMigrationPairingCharacteristicReadDataWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)getPairedDevices;
- (id)getSetupCompletedDevices;
- (void)getSwitchEventsFromIndex:(unsigned int)arg1 inlineCallback:(id /* block */)arg2;
- (void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(id /* block */)arg2;
- (void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(id /* block */)arg2;
- (bool)hasCompletedInitialSyncForPairingID:(id)arg1;
- (id)init;
- (id)initWithBoost:(bool)arg1;
- (id)initWithBoost:(bool)arg1 disconnected:(bool)arg2;
- (bool)isAssertionActive:(id)arg1;
- (bool)isKeychainEnabled;
- (bool)isPaired;
- (void)isPhoneReadyToMigrateDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)isWatchSetupPushActive;
- (void)keepPhoneUnlockedInternalTestSPI:(id /* block */)arg1;
- (id)lastMigrationRequestPhoneName;
- (unsigned long long)lastSyncSwitchIndex;
- (void)logCallFrequency;
- (long long)maxPairedDeviceCount;
- (long long)maxPairingCompatibilityVersion;
- (long long)maxTinkerPairedDeviceCount;
- (id)migrationConsentRequestData;
- (unsigned long long)migrationCountForPairingID:(id)arg1;
- (long long)minPairingCompatibilityVersion;
- (long long)minQuickSwitchCompatibilityVersion;
- (id)nonActiveDeviceForBTDeviceID:(id)arg1;
- (id)nonActiveDeviceForBluetoothID:(id)arg1;
- (id)nonActiveDeviceForIDSDevice:(id)arg1;
- (void)notifyActivationCompleted:(id)arg1 withSuccess:(bool)arg2;
- (void)notifyPairingShouldContinue;
- (void)notifyPasscode:(id)arg1 forDevice:(id)arg2;
- (void)overrideSignalStrengthLimit:(long long)arg1;
- (void)pairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)pairedDeviceCountIsLessThanMaxPairedDevices;
- (bool)pairedDeviceCountIsLessThanMaxTinkerPairedDevices;
- (bool)pairedDeviceSupportQuickSwitch;
- (void)pairingClientDidEnterPhase:(id)arg1;
- (void)pairingClientSetAltAccountName:(id)arg1 altDSID:(id)arg2 forDevice:(id)arg3 completion:(id /* block */)arg4;
- (void)pairingClientSetAltAccountName:(id)arg1 forDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)pairingClientSetPairingParentName:(id)arg1 pairingParentAltDSID:(id)arg2 forDevice:(id)arg3 completion:(id /* block */)arg4;
- (long long)pairingCompatibilityVersion;
- (id)pairingID;
- (id)pairingStorePath;
- (void)pairingStorePathPairingID:(id /* block */)arg1;
- (void)putMigrationChallengeCharacteristicWriteData:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)resumePairingClientCrashMonitoring;
- (void)retriggerUnpairInfoDialog;
- (void)sendDevicesUpdatedNotification;
- (void)setActivePairedDevice:(id)arg1 isMagicSwitch:(bool)arg2 operationHasCompleted:(id /* block */)arg3;
- (void)setActivePairedDevice:(id)arg1 operationHasCompleted:(id /* block */)arg2;
- (void)setActivePairedDevice:(id)arg1 withActiveDeviceAssertionHandler:(id /* block */)arg2;
- (void)setMigrationConsented:(bool)arg1 forDevice:(id)arg2 withBlock:(id /* block */)arg3;
- (void)setMigrationConsented:(bool)arg1 forDeviceID:(id)arg2 withBlock:(id /* block */)arg3;
- (void)setWatchBuddyCompletedSetupSteps:(id /* block */)arg1;
- (void)setWatchBuddyPushedSyncTrapUI:(id /* block */)arg1;
- (void)setWatchNeedsGraduation:(id /* block */)arg1;
- (void)startWatchSetupPush;
- (unsigned long long)status;
- (void)stopWatchSetupPush;
- (bool)supportsPairedDevice;
- (bool)supportsWatch;
- (void)suspendPairingClientCrashMonitoring;
- (unsigned int)switchIndex;
- (void)switchToSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)threadIsBlockedWaitingOn_nanoregistryd_syncGrabLegacyRegistryWithBlock:(id /* block */)arg1;
- (void)unpairWithDevice:(id)arg1 shouldObliterate:(bool)arg2 operationHasBegun:(id /* block */)arg3;
- (void)unpairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(id /* block */)arg3;
- (void)unpairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)updateWatchBuddyStage:(unsigned int)arg1 forPairingID:(id)arg2;
- (void)userIsCheckingForUpdate;
- (id)waitForActiveDevice;
- (id)waitForActiveOrAltAccountDevice;
- (id)waitForActivePairedDevice;
- (id)waitForActivePairedOrAltAccountDevice;
- (void)waitForAltAccountPairingStorePathPairingID:(id /* block */)arg1;
- (void)waitForPairingStorePathPairingID:(id /* block */)arg1;
- (void)waitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(id /* block */)arg2;
- (bool)watchNeedsGraduation;
- (void)xpcDeviceID:(id)arg1 needsPasscode:(id)arg2;
- (void)xpcHasNewOOBKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

+ (id)blt_boundedWaitForActivePairedDevice;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)hd_deviceForIDSDevice:(id)arg1;

@end
