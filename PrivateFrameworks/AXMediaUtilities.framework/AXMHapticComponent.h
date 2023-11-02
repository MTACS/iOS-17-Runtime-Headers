
@interface AXMHapticComponent : AXMOutputComponent {
    <CHHapticPatternPlayer> * __levelPlayer;
    bool  _autoShutdownEnabled;
    double  _autoShutdownTimeout;
    CHHapticEngine * _engine;
    <CHHapticPatternPlayer> * _player;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _supportsAudio;
    bool  _supportsHaptics;
    bool  _usesHapticsOnly;
}

@property (nonatomic, retain) <CHHapticPatternPlayer> *_levelPlayer;
@property (getter=isAutoShutdownEnabled, nonatomic) bool autoShutdownEnabled;
@property (nonatomic) double autoShutdownTimeout;
@property (nonatomic) bool usesHapticsOnly;

+ (bool)isSupported;

- (void).cxx_destruct;
- (id)_levelPlayer;
- (double)autoShutdownTimeout;
- (bool)canHandleRequest:(id)arg1;
- (void)handleRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (bool)isAutoShutdownEnabled;
- (void)setAutoShutdownEnabled:(bool)arg1;
- (void)setAutoShutdownTimeout:(double)arg1;
- (void)setUsesHapticsOnly:(bool)arg1;
- (void)set_levelPlayer:(id)arg1;
- (void)stopCurrentHaptics;
- (void)transitionToState:(long long)arg1 completion:(id /* block */)arg2;
- (bool)usesHapticsOnly;

@end
