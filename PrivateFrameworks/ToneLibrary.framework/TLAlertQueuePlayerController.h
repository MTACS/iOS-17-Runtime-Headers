
@interface TLAlertQueuePlayerController : NSObject <TLAlertPlaybackBackEndController> {
    <NSCopying> * _attentionPollingToken;
    TLAudioQueue * _audioQueue;
    AVAudioSession * _audioSession;
    unsigned long long  _audioSessionDeactivationPreventionRequestsCount;
    TLAttentionAwarenessEffectCoordinator * _effectCoordinator;
    struct { 
        bool isIncomingCallActive; 
        bool usesReceiverRoute; 
    }  _externalEnvironmentValues;
    bool  _hasToneAssetForPendingPlayingAlert;
    bool  _isAttentionAwarenessSubsystemFullyInitialized;
    bool  _isAudioEnvironmentSetup;
    bool  _isAudioSessionActive;
    bool  _isBypassingRingerSwitchPolicy;
    bool  _isIgnoringAccessibilityDisabledVibrationSetting;
    bool  _isObservingAudioSessionInterruptionNotification;
    bool  _isObservingQueuePlayer;
    bool  _isStoppingPlayingAlert;
    bool  _isUsingAuxiliaryAudioSession;
    bool  _isWaitingToCompleteReloadPlaybackRequest;
    long long  _lastAttentionPollingEventType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _playingToneIdentifier;
    bool  _prefersToPlayDuringWombat;
    NSString * _previousAudioCategory;
    unsigned long long  _previousAudioCategoryOptions;
    NSString * _previousAudioMode;
    AVQueuePlayer * _queuePlayer;
    TLAlertQueuePlayerStateDescriptor * _stateDescriptor;
    AVAsset * _toneAssetForPendingPlayingAlert;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_audioCategoryForAlert:(id)arg1 externalEnvironmentValues:(struct { bool x1; bool x2; })arg2;
+ (unsigned long long)_audioCategoryOptionsForAlert:(id)arg1 externalEnvironmentValues:(struct { bool x1; bool x2; })arg2;
+ (id)_audioModeForAlert:(id)arg1 audioCategory:(id)arg2;
+ (double)_audioPlaybackInitiationDelayForAlert:(id)arg1 externalEnvironmentValues:(struct { bool x1; bool x2; })arg2;
+ (long long)_audioVolumeApplicationPolicyForAlert:(id)arg1 externalEnvironmentValues:(struct { bool x1; bool x2; })arg2;
+ (double)_audioVolumeRampingDurationForAlert:(id)arg1 externalEnvironmentValues:(struct { bool x1; bool x2; })arg2 toneAssetDuration:(double)arg3;
+ (id)_clientNameForAlert:(id)arg1;
+ (long long)_clientPriorityForAlert:(id)arg1;
+ (struct { bool x1; bool x2; })_externalEnvironmentValuesForAlert:(id)arg1;
+ (id)_mediaExperienceAudioCategoryForAudioSessionCategory:(id)arg1;
+ (bool)_prefersToPlayDuringWombatForAlert:(id)arg1;
+ (id)_propertyKeysOfInterestForToneAssets;
+ (bool)_shouldApplyAttentionAwarenessEffectsForAlert:(id)arg1;
+ (bool)_shouldApplyStandardDelayAndAudioVolumeRampForAlert:(id)arg1 externalEnvironmentValues:(struct { bool x1; bool x2; })arg2;
+ (bool)_shouldBypassRingerSwitchPolicyForAlert:(id)arg1;
+ (bool)_shouldEnsureActiveAudioSessionWhenStartingPlaybackForAlert:(id)arg1;
+ (bool)_shouldHandleAudioSessionActivationForAlert:(id)arg1;
+ (bool)_shouldRepeatVibrationForAlert:(id)arg1 externalEnvironmentValues:(struct { bool x1; bool x2; })arg2;
+ (bool)_shouldUseAuxiliaryAudioSessionForAlert:(id)arg1;
+ (bool)_shouldVibrateForAlert:(id)arg1;

- (void).cxx_destruct;
- (void)_activateAudioSessionIfNeededForStateDescriptor:(id)arg1;
- (void)_applyAudioVolume:(float)arg1 forAlert:(id)arg2;
- (float)_audioVolumeForAlert:(id)arg1 audioCategory:(id)arg2;
- (void)_beginPreventingAudioSessionDeactivation;
- (bool)_canPlayToneAsset:(id)arg1;
- (void)_createQueuePlayerIfNecessaryForStateDescriptor:(id)arg1;
- (void)_deactivateAudioSessionIfNeededForStateDescriptor:(id)arg1;
- (void)_destroyQueuePlayerForStateDescriptor:(id)arg1;
- (void)_didEndPlayingAlertForStateDescriptor:(id)arg1;
- (void)_didReceiveAttentionPollingEventOfType:(long long)arg1 stateDescriptor:(id)arg2;
- (void)_endPreventingAudioSessionDeactivationForStateDescriptor:(id)arg1;
- (id)_fallbackToneIdentifierForStateDescriptor:(id)arg1;
- (void)_handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(bool)arg2 previousStateDescriptor:(id)arg3 updatedStateDescriptor:(id)arg4;
- (void)_handleAudioSessionInterruptionNotification:(id)arg1;
- (void)_handleAudioSessionInterruptionOfType:(unsigned long long)arg1 withOptions:(unsigned long long)arg2;
- (void)_initiateAudioPlaybackForStateDescriptor:(id)arg1 audioVolumeRampingDuration:(double)arg2;
- (bool)_isPreventingAudioSessionDeactivation;
- (void)_performDelayedAudioPlaybackInitiationForStateDescriptor:(id)arg1 audioVolumeRampingDuration:(double)arg2;
- (void)_playAlertForStateDescriptor:(id)arg1 previousStateDescriptor:(id)arg2;
- (void)_prepareAudioEnvironmentForStateDescriptor:(id)arg1;
- (void)_queuePlayer:(id)arg1 currentItemStatusWasUpdatedToValue:(long long)arg2;
- (void)_queuePlayer:(id)arg1 currentItemWasUpdatedFromValue:(id)arg2;
- (void)_reloadPlaybackForStateDescriptor:(id)arg1 withToneIdentifier:(id)arg2;
- (void)_resetClientPriorityForStateDescriptor:(id)arg1;
- (void)_resetFlagsForSwitchingAuxiliaryAudioSession;
- (void)_restoreAudioEnvironmentForStateDescriptor:(id)arg1;
- (void)_startObservingAudioSessionInterruptionNotificationsForStateDescriptor:(id)arg1;
- (void)_startObservingQueuePlayer;
- (void)_startPlaybackForStateDescriptor:(id)arg1 usingAssetWithLoadedProperties:(id)arg2 shouldConfirmAlertStillPlaying:(bool)arg3;
- (void)_startPlaybackForStateDescriptor:(id)arg1 usingConfirmedPlayableAsset:(id)arg2;
- (void)_startPlaybackForStateDescriptor:(id)arg1 usingConfirmedPlayableAsset:(id)arg2 hasAlreadyDetectedUserAttention:(bool)arg3;
- (void)_stopObservingAudioSessionInterruptionNotificationsForStateDescriptor:(id)arg1;
- (void)_stopObservingQueuePlayer;
- (void)_stopPlaybackForStateDescriptor:(id)arg1;
- (void)_stopPlaybackForStateDescriptor:(id)arg1 withOptions:(id)arg2 playerWasAlreadyPausedExternally:(bool)arg3;
- (void)_stopPlayingAlertForStateDescriptor:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3;
- (void)_willBeginPlayingAlertForStateDescriptor:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(bool)arg2;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)playAlert:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3;
- (void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;

@end