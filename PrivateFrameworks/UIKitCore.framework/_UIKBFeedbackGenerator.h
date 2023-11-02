
@interface _UIKBFeedbackGenerator : NSObject <_UIKBFeedbackGenerating> {
    bool  __isEngineRunning;
    long long  __mode;
    unsigned long long  _actionCount;
    AVSystemController * _avSystemController;
    CHHapticEngine * _engine;
    double  _engineActiveDuration;
    unsigned long long  _engineStartCount;
    NSDate * _engineStartDate;
    bool  _isActive;
    bool  _isAudioOnly;
    bool  _isFeedbackDisabled;
    double  _lastActionTime;
    NSDictionary * _players;
    NSObject<OS_dispatch_queue> * _queue;
    int  _ringerStateNotifyToken;
    NSUserDefaults * _soundsDefaults;
    NSDictionary * _systemSounds;
    bool  _usesCoreHapticsForAudioOnly;
    float  _volume;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dictationDidBeginNotification:(id)arg1;
- (void)_dictationDidEndNotification:(id)arg1;
- (void)_effectiveVolumeDidChangeNotification:(id)arg1;
- (void)_keyboardPreferencesDidUpdateNotification:(id)arg1;
- (void)_serverConnectionDiedNotification:(id)arg1;
- (void)_stopEngineDueToIdle;
- (void)_stopEngineForApplicationNotification:(id)arg1;
- (void)actionOccurred:(long long)arg1;
- (void)actionOccurred:(long long)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)activateWithCompletionBlock:(id /* block */)arg1;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (bool)isActive;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
