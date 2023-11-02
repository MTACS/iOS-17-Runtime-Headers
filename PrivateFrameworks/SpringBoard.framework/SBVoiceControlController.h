
@interface SBVoiceControlController : NSObject <SBVoiceControlTransientOverlayViewControllerDelegate> {
    bool  _delayedAssistantActivationPending;
    bool  _headsetDownDelayedActionPerformed;
    NSArray * _nextRecognitionAudioInputPaths;
    SiriLongPressButtonSource * _siriHeadsetDeviceSource;
    <SiriAssertion> * _siriPreheatAssertion;
    SBVoiceControlTransientOverlayViewController * _transientOverlayViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_assistantActivationSettingsDidChange:(id)arg1;
- (void)_cancelDelayedHeadsetAction;
- (id)_newVoiceControlTransientOverlayViewControllerWithSource:(id)arg1;
- (void)_performDelayedHeadsetActionForAssistant;
- (void)_performDelayedHeadsetActionForVoiceControl;
- (void)_prepareDelayedHeadsetAction;
- (bool)_shouldEnterVoiceControl;
- (void)_spokenLanguageDidChange:(id)arg1;
- (void)_updateNextRecognitionAudioInputPaths:(id)arg1;
- (void)bluetoothDeviceEndedVoiceControl:(id)arg1;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)arg1;
- (void)configureVoiceControl;
- (void)dismissTransientOverlay;
- (void)handleHeadsetButtonDownWithClickCount:(unsigned long long)arg1;
- (bool)handleHeadsetButtonUp;
- (bool)handleHeadsetButtonUpNotInCall;
- (bool)handleHomeButtonHeld;
- (void)headsetAvailabilityChanged;
- (id)init;
- (bool)isVisible;
- (id)siriBluetoothDeviceSource:(id)arg1;
- (void)voiceControlTransientOverlayViewControllerDidDisappear:(id)arg1;
- (void)voiceControlTransientOverlayViewControllerRequestsDismissal:(id)arg1;

@end
