
@interface CSSiriAudioPlaybackService : NSObject <AFAudioPlaybackService, AFMemoryPressureListening, CSAudioSessionControllerDelegate> {
    NSMutableDictionary * _activeHapticRequests;
    NSMutableDictionary * _activeSessionsByRequest;
    AVAudioSession * _audioSession;
    CSAudioSessionController * _audioSessionController;
    unsigned int  _audioSessionID;
    NSHashTable * _listeners;
    NSMutableDictionary * _pendingHapticRequests;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _reusableSessionsByRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedService;

- (void).cxx_destruct;
- (id)_audioSession;
- (unsigned int)_audioSessionID;
- (id)_createAudioPlaybackSessionWithRequest:(id)arg1 options:(unsigned long long)arg2;
- (void)_enumerateListenersUsingBlock:(id /* block */)arg1;
- (void)_evictAllReusableSessionsForReason:(id)arg1;
- (void)_handleExecutionForSession:(id)arg1;
- (void)_handleFinalizationForSession:(id)arg1 error:(id)arg2;
- (void)_handlePreparationForSession:(id)arg1;
- (id)_hapticEngine;
- (void)_hapticPlaybackDidCompleteForAllActiveRequests;
- (void)_initializeAndPrewarmHapticEngineIfNeededForRequest:(id)arg1;
- (void)_invalidate;
- (id)_playHapticForRequest:(id)arg1;
- (void)_prewarmRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_setAudioSessionID:(unsigned int)arg1;
- (void)_startHapticOnlyRequest:(id)arg1 options:(unsigned long long)arg2 preparationHandler:(id /* block */)arg3 executionHandler:(id /* block */)arg4 finalizationHandler:(id /* block */)arg5;
- (void)_startRequest:(id)arg1 options:(unsigned long long)arg2 preparationHandler:(id /* block */)arg3 executionHandler:(id /* block */)arg4 finalizationHandler:(id /* block */)arg5;
- (void)_stopAllRequests:(bool)arg1 completion:(id /* block */)arg2;
- (void)_stopAllRequestsSynchronously;
- (void)_stopRequest:(id)arg1 immediately:(bool)arg2;
- (void)addListener:(id)arg1;
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;
- (id)initWithAudioSessionController:(id)arg1;
- (void)memoryPressureObserver:(id)arg1 didChangeFromCondition:(long long)arg2 toCondition:(long long)arg3;
- (void)prewarmRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)removeAllListeners;
- (void)removeListener:(id)arg1;
- (void)startRequest:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)startRequest:(id)arg1 options:(unsigned long long)arg2 preparationHandler:(id /* block */)arg3 executionHandler:(id /* block */)arg4 finalizationHandler:(id /* block */)arg5;
- (void)stopAllRequests:(bool)arg1 completion:(id /* block */)arg2;
- (void)stopAllRequestsSynchronously;
- (void)stopRequest:(id)arg1 immediately:(bool)arg2;

@end
