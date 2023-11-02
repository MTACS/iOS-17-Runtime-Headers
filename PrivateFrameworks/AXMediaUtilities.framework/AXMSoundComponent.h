
@interface AXMSoundComponent : AXMOutputComponent {
    NSMutableArray * _activeSounds;
    id  _configChangedObserverToken;
    AVAudioEngine * _engine;
    AVAudioPlayerNode * _oneShotSoundPlayer;
}

@property (nonatomic, retain) id configChangedObserverToken;

+ (bool)isSupported;

- (void).cxx_destruct;
- (void)_logAudioFileInfo:(id)arg1;
- (id)_scheduleActiveSound:(id)arg1;
- (void)_scheduleOneShotSound:(id)arg1 completion:(id /* block */)arg2;
- (bool)_startEngineIfNeeded:(id*)arg1;
- (void)_stopActiveSound:(id)arg1;
- (bool)canHandleRequest:(id)arg1;
- (id)configChangedObserverToken;
- (void)dealloc;
- (void)handleRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)setConfigChangedObserverToken:(id)arg1;
- (void)transitionToState:(long long)arg1 completion:(id /* block */)arg2;

@end
