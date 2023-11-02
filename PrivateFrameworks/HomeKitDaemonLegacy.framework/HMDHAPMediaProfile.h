
@interface HMDHAPMediaProfile : HMDMediaProfile {
    long long  _airPlayEnable;
    NSString * _clientIdentifier;
}

@property long long airPlayEnable;
@property (readonly) NSString *clientIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_allCharacteristicsToMonitor;
- (void)_disableCharacteristicNotifications;
- (void)_handleCharacteristicChanges:(id)arg1;
- (id)_mediaSessionStateFromProfile;
- (void)_notifyProfileSettingsUpdated:(id)arg1;
- (void)_setCharacteristicNotifications:(bool)arg1;
- (id)_smartSpeakerAirPlayEnableCharacteristic;
- (id)_smartSpeakerAirPlayEnableReadRequest;
- (id)_smartSpeakerCurrentMediaStateCharacteristic;
- (id)_smartSpeakerCurrentMediaStateReadRequest;
- (id)_smartSpeakerMutedCharacteristic;
- (id)_smartSpeakerMutedReadRequest;
- (id)_smartSpeakerMutedWriteRequestWithMuted:(id)arg1;
- (id)_smartSpeakerService;
- (id)_smartSpeakerTargetMediaStateCharacteristic;
- (id)_smartSpeakerTargetMediaStateWriteRequestWithPlaybackState:(id)arg1;
- (id)_smartSpeakerVolumeCharacteristic;
- (id)_smartSpeakerVolumeReadRequest;
- (id)_smartSpeakerVolumeWriteRequestWithVolumePercentage:(id)arg1;
- (bool)_updateAudioControl:(id)arg1;
- (void)_updateCharacteristicChanges;
- (void)_updateCurrentMediaState:(id)arg1 volumePercentage:(id)arg2 muted:(id)arg3 enable:(id)arg4 message:(id)arg5;
- (bool)_updatePlayback:(id)arg1;
- (bool)_updateRefreshPlayback:(id)arg1;
- (long long)airPlayEnable;
- (unsigned long long)capability;
- (id)clientIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (void)handleAccessoryConfigured:(id)arg1;
- (void)handleCharacteristicsUpdated:(id)arg1;
- (void)handleHomeCharacteristicValuesChanged:(id)arg1;
- (void)handlePrimaryResidentChanged:(id)arg1;
- (void)handleResidentAdded:(id)arg1;
- (id)initWithMediaServices:(id)arg1;
- (id)mediaSessionFromProfile;
- (id)playStateWriteRequestWithPlaybackState:(long long)arg1;
- (void)registerForNotifications;
- (void)setAirPlayEnable:(long long)arg1;
- (void)setEnable:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateMediaSessionState:(id)arg1 usingCharacteristics:(id)arg2;
- (void)updateMediaSessionState:(id)arg1 usingServices:(id)arg2;
- (id)volumeWriteRequestWithVolumePercentage:(id)arg1;

@end
