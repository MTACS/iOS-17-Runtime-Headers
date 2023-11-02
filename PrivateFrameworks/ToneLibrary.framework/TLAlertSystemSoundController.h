
@interface TLAlertSystemSoundController : NSObject <TLAlertPlaybackBackEndController, TLBacklightObserver> {
    NSMapTable * _alertSystemSoundContexts;
    TLAudioQueue * _audioQueue;
    unsigned long long  _backlightObservationRequestsCount;
    long long  _backlightStatus;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned int)_componentSuppressionFlagsForAlert:(id)arg1;
+ (id)_descriptionForAlertComponentsSuppressionFlags:(unsigned int)arg1;
+ (id)_optionsForSystemSoundAlert:(id)arg1 withSound:(id)arg2;
+ (unsigned int)_soundBehaviorForAlert:(id)arg1 withSound:(id)arg2;
+ (id)_soundForAlert:(id)arg1 toneIdentifierForDeemphasizingAlert:(id)arg2;
+ (id)_toneIdentifierForDeemphasizingAlert:(id)arg1;
+ (id)_vibrationPatternForAlert:(id)arg1 withSound:(id)arg2;

- (void).cxx_destruct;
- (void)_beginRequiringBacklightObservationForAlert:(id)arg1 alertSystemSoundContext:(id)arg2;
- (struct { long long x1; bool x2; bool x3; })_considerDeferringPlayingAlertForBacklightStatusResolution:(id)arg1 alertSystemSoundContext:(id)arg2;
- (void)_didCompletePlaybackForAlert:(id)arg1;
- (void)_endRequiringBacklightObservationForAlert:(id)arg1 alertSystemSoundContext:(id)arg2;
- (void)_playAlert:(id)arg1 alertSystemSoundContext:(id)arg2 toneIdentifierForDeemphasizingAlert:(id)arg3 backlightStatusResolutionDeferralContext:(struct { long long x1; bool x2; bool x3; })arg4;
- (id)_playTaskDescriptorForAlert:(id)arg1 withSound:(id)arg2 alertSystemSoundContext:(id)arg3;
- (void)_preheatForAlert:(id)arg1 backlightStatus:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)_prepareForPreemptingAlertsBeforeBeginningPlaybackOfAlert:(id)arg1 withSound:(id)arg2 playbackCompletionType:(long long)arg3;
- (id)_prepareForStoppingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3;
- (void)_processDeemphasizableAlertChangesForBackglightStatus:(long long)arg1 stopTasksDescriptorForDeemphasizedAlerts:(id)arg2 deemphasizableAlertBeginPlayingContexts:(id)arg3;
- (void)_processPlayTaskDescriptors:(id)arg1;
- (void)_processPlaybackCompletionContexts:(id)arg1;
- (void)_processStopTasksDescriptor:(id)arg1;
- (void)_removeAlert:(id)arg1 alertSystemSoundContext:(id)arg2 didFailToPrepareSound:(bool)arg3 appendingPlaybackCompletionContextToArray:(id)arg4;
- (void)backlightStatusDidChange:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)playAlert:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)preheatForAlert:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3;

@end
