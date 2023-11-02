
@interface TLAlertController : NSObject <TLAlertPlaybackBackEndController> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _accessQueueLabel;
    NSMapTable * _alertContexts;
    TLAlertQueuePlayerController * _queuePlayerController;
    TLAlertSystemSoundController * _systemSoundController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)_playbackBackEndForAlert:(id)arg1;
+ (long long)_playbackBackEndForAlertType:(long long)arg1 topic:(id)arg2;
+ (bool)_shouldStopAlertForUserInterruption:(id)arg1;
+ (id)sharedAlertController;

- (void).cxx_destruct;
- (void)_assertRunningOnAccessQueue;
- (id)_controllerForPlaybackBackEnd:(long long)arg1;
- (void)_didCompletePlaybackOfAlert:(id)arg1;
- (void)_didReachTimeoutForAlert:(id)arg1;
- (void)_handleUserInterruptionNotification:(id)arg1;
- (void)_performBlockOnAccessQueue:(id /* block */)arg1;
- (id)_prepareForPlayingAlert:(id)arg1;
- (id)_queuePlayerController;
- (bool)_stopAllAlertsInCurrentProcessWithUserInterruptionDate:(id)arg1;
- (bool)_stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3;
- (id)_systemSoundController;
- (void)dealloc;
- (void)handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(bool)arg2;
- (id)init;
- (void)playAlert:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)preheatForAlert:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)stopAllAlerts;
- (bool)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3;
- (void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;

@end
