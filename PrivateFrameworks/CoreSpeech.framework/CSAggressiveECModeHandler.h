
@interface CSAggressiveECModeHandler : NSObject <CSAttSiriSessionStateDelegate> {
    bool  _aggressiveEchoCancellationApplied;
    bool  _audioSessionStateActive;
    bool  _echoCancellationDeferred;
    bool  _inAttendingWindow;
    NSObject<OS_dispatch_queue> * _queue;
    CSAttSiriAudioSessionStateClient * _siriStateClient;
}

@property (nonatomic) bool aggressiveEchoCancellationApplied;
@property (nonatomic) bool audioSessionStateActive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool echoCancellationDeferred;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inAttendingWindow;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CSAttSiriAudioSessionStateClient *siriStateClient;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureAggressiveEchoCancellationParams:(bool)arg1;
- (bool)aggressiveEchoCancellationApplied;
- (bool)audioSessionStateActive;
- (bool)echoCancellationDeferred;
- (bool)inAttendingWindow;
- (id)init;
- (void)notifySiriSessionStateChange:(bool)arg1;
- (void)notifySiriSessionStateTTSOngoing:(bool)arg1;
- (id)queue;
- (void)setAggressiveEchoCancellationApplied:(bool)arg1;
- (void)setAttendingState:(bool)arg1;
- (void)setAudioSessionState:(id)arg1;
- (void)setAudioSessionStateActive:(bool)arg1;
- (void)setEchoCancellationDeferred:(bool)arg1;
- (void)setInAttendingWindow:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setSiriStateClient:(id)arg1;
- (void)siriDismissed;
- (id)siriStateClient;

@end
