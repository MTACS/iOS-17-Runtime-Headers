
@interface NRPairingProxy : NRRegistryProxy <NRPairedDeviceRegistryXPCDaemonDelegate>

+ (id)clientExportedInterface;
+ (id)clientRemoteObjectInterface;
+ (id)machServiceName;
+ (id)serverExportedInterface;
+ (id)serverRemoteObjectInterface;

- (void)xpcAbortPairingReason:(id)arg1 withBlock:(id /* block */)arg2;
- (void)xpcActiveDeviceAssertions:(id /* block */)arg1;
- (void)xpcBeginDiscoveryWithBlock:(id /* block */)arg1;
- (void)xpcBeginMigrationWithCompletion:(id /* block */)arg1;
- (void)xpcBeginMigrationWithDeviceID:(id)arg1 completion:(id /* block */)arg2;
- (void)xpcBeginMigrationWithDeviceID:(id)arg1 passcode:(id)arg2 withBlock:(id /* block */)arg3;
- (void)xpcCheckIfFlaggedForRecoveryWithCompletion:(id /* block */)arg1;
- (void)xpcClearRecoveryFlagWithCompletion:(id /* block */)arg1;
- (void)xpcClearWatchNeedsGraduation:(id /* block */)arg1;
- (void)xpcCompanionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(id /* block */)arg4;
- (void)xpcCompanionPasscodePairWithDeviceID:(id)arg1 withOptions:(id)arg2 operationHasBegun:(id /* block */)arg3;
- (void)xpcEndDiscoveryWithBlock:(id /* block */)arg1;
- (void)xpcEnterCompatibilityState:(unsigned short)arg1 withDeviceID:(id)arg2;
- (void)xpcFakePairedSyncIsCompleteWithCompletion:(id /* block */)arg1;
- (void)xpcGetInitialSyncCompletedForPairingID:(id)arg1 completion:(id /* block */)arg2;
- (void)xpcGetLastMigrationRequestPhoneNameWithCompletion:(id /* block */)arg1;
- (void)xpcGetLastSwitchIndex:(id /* block */)arg1;
- (void)xpcGetMigrationCountForPairingID:(id)arg1 completion:(id /* block */)arg2;
- (void)xpcGetMigrationPairingCharacteristicReadDataWithCompletion:(id /* block */)arg1;
- (void)xpcGizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(id /* block */)arg2;
- (void)xpcGizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(id /* block */)arg2;
- (void)xpcInvalidateSwitchAssertionWithIdentifier:(id)arg1 block:(id /* block */)arg2;
- (void)xpcIsAssertionActive:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)xpcIsPhoneReadyToMigrateDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)xpcKeepPhoneUnlockedInternalTestSPI:(id /* block */)arg1;
- (void)xpcNotifyActivationCompleted:(id)arg1 withSuccess:(bool)arg2;
- (void)xpcNotifyPasscode:(id)arg1 withDeviceID:(id)arg2;
- (void)xpcPairWithSimulator:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)xpcPairingClientDidEnterPhase:(id)arg1 withBlock:(id /* block */)arg2;
- (void)xpcPairingClientSetAltAccountName:(id)arg1 altDSID:(id)arg2 forPairingID:(id)arg3 completion:(id /* block */)arg4;
- (void)xpcPairingClientSetPairingParentName:(id)arg1 pairingParentAltDSID:(id)arg2 forPairingID:(id)arg3 completion:(id /* block */)arg4;
- (void)xpcPairingShouldContinue;
- (void)xpcPingActiveGizmoWithPriority:(int)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (void)xpcPutMigrationChallengeCharacteristicWriteData:(id)arg1 completion:(id /* block */)arg2;
- (void)xpcResumePairingClientCrashMonitoring:(id /* block */)arg1;
- (void)xpcRetriggerUnpairInfoDialogWithBlock:(id /* block */)arg1;
- (void)xpcScanForMigratableWatchesWithBlock:(id /* block */)arg1;
- (void)xpcSetWatchNeedsGraduation:(id /* block */)arg1;
- (void)xpcStartWatchSetupPushWithBlock:(id /* block */)arg1;
- (void)xpcStopWatchSetupPushWithBlock:(id /* block */)arg1;
- (void)xpcSubmitAlbertPairingReport:(id /* block */)arg1;
- (void)xpcSubmitRTCPairingMetricForMetricID:(id)arg1 withSuccess:(id /* block */)arg2;
- (void)xpcSubmitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned int)arg3 block:(id /* block */)arg4;
- (void)xpcSuspendPairingClientCrashMonitoring:(id /* block */)arg1;
- (void)xpcSwitchActiveDeviceWithDeviceID:(id)arg1 isMagicSwitch:(bool)arg2 operationHasCompleted:(id /* block */)arg3;
- (void)xpcSwitchActiveDeviceWithDeviceID:(id)arg1 withAssertionHandler:(id /* block */)arg2;
- (void)xpcSwitchToSimulator:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)xpcTriggerVersion4Workaround;
- (void)xpcUnpairWithDeviceID:(id)arg1 withOptions:(id)arg2 operationHasBegun:(id /* block */)arg3;
- (void)xpcUnpairWithSimulator:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)xpcUpdateWatchBuddyStage:(unsigned int)arg1 forPairingID:(id)arg2;
- (void)xpcWaitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(id /* block */)arg2;
- (void)xpcWatchBuddyCompletedSetupSteps:(id /* block */)arg1;
- (void)xpcWatchNeedsGraduation:(id /* block */)arg1;

@end
