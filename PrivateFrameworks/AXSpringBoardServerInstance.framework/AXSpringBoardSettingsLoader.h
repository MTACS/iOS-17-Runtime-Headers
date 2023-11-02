
@interface AXSpringBoardSettingsLoader : NSObject <AVSpeechSynthesizerDelegate, AXSBVoiceOverSwipeDetectorDelegate, AXUIClientDelegate> {
    AXAssetsService * _assetsService;
    AXDispatchTimer * _managedConfigurationNotificationCoalesceTimer;
    AXAccessQueueTimer * _voiceOverActivationCanceler;
    UIWindow * _voiceOverVibrateWindow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_alreadyRebootedGracefullyOnce;
+ (void)_checkAccessibilityOptionsSetByiTunes;
+ (void)_checkAssistiveTouchSetByiTunes;
+ (void)_checkClosedCaptioningSetByiTunes;
+ (void)_checkContrastSetting;
+ (void)_checkForDataResetFile;
+ (void)_checkForHomeButtonBreakage:(bool)arg1;
+ (void)_checkInvertColorsSetByiTunes;
+ (void)_checkMonoAudioSetByiTunes;
+ (void)_checkSpeakAutofillSetByiTunes;
+ (void)_checkVoiceOverTouchSetByiTunes;
+ (void)_checkZoomTouchSetByiTunes;
+ (void)_findNoteFromLoginSessionWithCompletion:(id /* block */)arg1;
+ (void)_gracefulRebootForBrokenHomeButton;
+ (void)_handleLiveListenEventIsListening:(bool)arg1 audioLevel:(double)arg2;
+ (void)_initializeDelayedSpringBoardSettings;
+ (void)_performValidations;
+ (void)_processStartupSoundEnabled;
+ (void)_registerForHomeButtonBreakage;
+ (void)_registerForHomeButtonBreakageNotification;
+ (void)_registerForNotifications;
+ (void)_setRebootedGracefullyOnce;
+ (void)_setVoiceOverTouchSettings:(unsigned char)arg1;
+ (void)_startAssistiveTouchForBrokenHomeButton;
+ (void)_updateAXSettings;
+ (void)_updateSpringBoardHelper;
+ (void)bootstrapGuidedAccessIfNeeded;
+ (void)checkAccessibilityOptions;
+ (void)checkScreenContrast;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_bootstrapSoundDetection;
- (void)_ensureUltronAppVisibility:(bool)arg1;
- (void)_handleGuidedAccessManagedConfigurationDidChange:(id)arg1;
- (void)_hideVoiceOverEnabler;
- (void)_initializeRemoteSettingsListener;
- (bool)_isDeviceAffectedByVOActivationWorkaround;
- (void)_makeVoiceOverVibrateWindow;
- (void)_playVOActivationSoundEnded;
- (void)_playVOActivationSoundStarted;
- (void)_reachabilityChanged:(id)arg1;
- (void)_registerReachability;
- (void)_remoteAccessibilitySettingsChanged:(id)arg1;
- (void)_showSwipeDetectionEnablerView;
- (void)_showVibrationVoiceOverEnablerView;
- (void)_updateAXSettings;
- (void)_updateRemoteAccessibilitySettings;
- (void)_voiceOverEnabled:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)swipeDetectorCanceled;
- (void)swipeDetectorDetectedSwipe;

@end
