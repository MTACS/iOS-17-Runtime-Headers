
@protocol HMHomeDelegatePrivate <HMHomeDelegate>

@optional

- (void)home:(HMHome *)arg1 didAddAccessoryNetworkProtectionGroup:(HMAccessoryNetworkProtectionGroup *)arg2;
- (void)home:(HMHome *)arg1 didAddMediaSystem:(HMMediaSystem *)arg2;
- (void)home:(HMHome *)arg1 didAddResidentDevice:(HMResidentDevice *)arg2;
- (void)home:(HMHome *)arg1 didEnableNotifications:(bool)arg2;
- (void)home:(HMHome *)arg1 didFailAccessorySetupWithError:(NSError *)arg2;
- (void)home:(HMHome *)arg1 didRemoveAccessoryNetworkProtectionGroup:(HMAccessoryNetworkProtectionGroup *)arg2;
- (void)home:(HMHome *)arg1 didRemoveMediaSystem:(HMMediaSystem *)arg2;
- (void)home:(HMHome *)arg1 didRemoveResidentDevice:(HMResidentDevice *)arg2;
- (void)home:(HMHome *)arg1 didUpdateAccesoryInvitationsForUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateAccessControlForUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateAccessoryNetworkProtectionGroup:(HMAccessoryNetworkProtectionGroup *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForRoom:(HMRoom *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForServiceGroup:(HMServiceGroup *)arg2;
- (void)home:(HMHome *)arg1 didUpdateAreBulletinNotificationsSupported:(bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateAudioAnalysisClassifierOptions:(unsigned long long)arg2;
- (void)home:(HMHome *)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateAutomaticThirdPartyAccessorySoftwareUpdateEnabled:(bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateEventLogDuration:(unsigned long long)arg2;
- (void)home:(HMHome *)arg1 didUpdateEventLogEnabled:(bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateHasOnboardedForWalletKey:(bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateLastExecutionDateForActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didUpdateLocation:(CLLocation *)arg2;
- (void)home:(HMHome *)arg1 didUpdateMediaPassword:(NSString *)arg2;
- (void)home:(HMHome *)arg1 didUpdateMediaPeerToPeerEnabled:(bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;
- (void)home:(HMHome *)arg1 didUpdateOnboardAudioAnalysis:(bool)arg2;
- (void)home:(HMHome *)arg1 didUpdatePersonManagerSettings:(HMHomePersonManagerSettings *)arg2;
- (void)home:(HMHome *)arg1 didUpdateReprovisionStateForAccessory:(HMAccessory *)arg2;
- (void)home:(HMHome *)arg1 didUpdateSiriPhraseOptions:(unsigned long long)arg2;
- (void)home:(HMHome *)arg1 didUpdateStateForOutgoingInvitations:(NSArray *)arg2;
- (void)homeDidAddWalletKey:(HMHome *)arg1;
- (void)homeDidEnableLocationServices:(HMHome *)arg1;
- (void)homeDidEnableMultiUser:(HMHome *)arg1;
- (void)homeDidOnboardLocationServices:(HMHome *)arg1;
- (void)homeDidRemoveWalletKey:(HMHome *)arg1;
- (void)homeDidSetEnableDoorbellChime:(HMHome *)arg1;
- (void)homeDidSetHasAnyUserAcknowledgedCameraRecordingOnboarding:(HMHome *)arg1;
- (void)homeDidSetHasOnboardedForAccessCode:(HMHome *)arg1;
- (void)homeDidUpdateApplicationData:(HMHome *)arg1;
- (void)homeDidUpdateAssistantIdentifiers:(HMHome *)arg1;
- (void)homeDidUpdateHomeLocationStatus:(HMHome *)arg1;
- (void)homeDidUpdateNetworkRouterSupport:(HMHome *)arg1;
- (void)homeDidUpdateOnboardedEventLog:(HMHome *)arg1;
- (void)homeDidUpdateProtectionMode:(HMHome *)arg1;
- (void)homeDidUpdateSoundCheck:(HMHome *)arg1;
- (void)homeDidUpdateToROAR:(HMHome *)arg1;

@end
