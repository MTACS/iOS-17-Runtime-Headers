
@interface MNAudioHardwareEngine : NSObject <MNAudioEventQueueDelegate, MNAudioSessionAccessDelegate, MNHapticControllerDelegate, MNSoundEffectControllerDelegate, MNSpeechControllerDelegate> {
    unsigned long long  _currentUtteranceGuidanceLevel;
    MNHapticResourceController * _hapticController;
    MNObserverHashTable * _observers;
    MNAudioSystemOptions * _options;
    MNAudioPathwayResourceAccess * _pathwayAccess;
    MNAudioSystemEvent * _pendingEvent;
    MNAudioSystemEventQueue * _queue;
    MNAudioSessionResourceAccess * _sessionAccess;
    MNSoundEffectResourceController * _sfxController;
    MNSpeechResourceController * _speechController;
    int  _transportType;
    NSString * _voiceLanguage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MNHapticResourceController *hapticController;
@property (readonly) unsigned long long hash;
@property (readonly) MNAudioSystemOptions *options;
@property (nonatomic, retain) MNAudioPathwayResourceAccess *pathwayAccess;
@property (nonatomic, retain) MNAudioSessionResourceAccess *sessionAccess;
@property (nonatomic, retain) MNSoundEffectResourceController *sfxController;
@property (nonatomic, readonly) bool speaking;
@property (nonatomic, retain) MNSpeechResourceController *speechController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long voiceGuidanceLevel;

+ (bool)deviceSpeakerIsInUse;
+ (bool)headphonesAreInUse;

- (void).cxx_destruct;
- (void)_finishedProcessingEventWithStatus:(unsigned long long)arg1;
- (bool)_hardwareIsBusy;
- (void)_mediaSessionServicesWereLost:(id)arg1;
- (void)_mediaSessionServicesWereReset:(id)arg1;
- (void)_process:(id)arg1;
- (void)_processNextEvent;
- (void)_processNextEventIfNecessary;
- (void)_registerForObservation;
- (bool)_speechMuted;
- (bool)_stopCurrentEvent;
- (void)addObserver:(id)arg1;
- (void)audioSessionResourceAccess:(id)arg1 didActivateSession:(bool)arg2;
- (void)audioSessionResourceAccess:(id)arg1 didDeactivateSession:(bool)arg2;
- (void)audioSessionResourceAccess:(id)arg1 didFailWhileActivatingSession:(id)arg2;
- (void)audioSessionResourceAccess:(id)arg1 didFailWhileDeactivatingSession:(id)arg2;
- (void)audioSystemEventQueue:(id)arg1 eventWillInterrupt:(id)arg2;
- (void)cache:(id)arg1;
- (void)changeOptions:(id)arg1 forTransportType:(int)arg2;
- (void)changeTransportType:(int)arg1;
- (void)clearAlEvents;
- (double)durationOf:(id)arg1;
- (id)hapticController;
- (id)initWithAudioSystemOptions:(id)arg1 andVoiceLanguage:(id)arg2 andTransportType:(int)arg3;
- (id)options;
- (id)pathwayAccess;
- (void)removeObserver:(id)arg1;
- (id)sessionAccess;
- (void)setHapticController:(id)arg1;
- (void)setPathwayAccess:(id)arg1;
- (void)setSessionAccess:(id)arg1;
- (void)setSfxController:(id)arg1;
- (void)setSpeechController:(id)arg1;
- (id)sfxController;
- (void)soundEffectResourceController:(id)arg1 didFailWhilePlayingIndicator:(unsigned long long)arg2 withError:(id)arg3;
- (void)soundEffectResourceController:(id)arg1 didFinishPlayingIndicator:(unsigned long long)arg2;
- (void)soundEffectResourceController:(id)arg1 wasInterruptedWhilePlayingIndicator:(unsigned long long)arg2 withError:(id)arg3;
- (void)speak:(id)arg1 withShortPrompt:(unsigned long long)arg2 andVoiceGuidanceLevel:(unsigned long long)arg3 thenCallCompletion:(id /* block */)arg4;
- (bool)speaking;
- (id)speechController;
- (void)speechResourceController:(id)arg1 didFailWhileSpeakingUtterance:(id)arg2 withError:(id)arg3;
- (void)speechResourceController:(id)arg1 didFinishSpeakingUtterance:(id)arg2 withDuration:(double)arg3;
- (void)speechResourceController:(id)arg1 didTimeoutWhileSpeakingUtterance:(id)arg2 withError:(id)arg3;
- (void)speechResourceController:(id)arg1 wasInterruptedWhileSpeakingUtterance:(id)arg2 withError:(id)arg3;
- (void)speechResourceController:(id)arg1 willStartSpeakingUtterance:(id)arg2;
- (void)stop;
- (bool)vibrateForShortPrompt:(unsigned long long)arg1;
- (unsigned long long)voiceGuidanceLevel;

@end
