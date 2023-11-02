
@interface BKUIPearlEnrollAudioManager : NSObject {
    BKUIPearlAudioSession * _audioSession;
    CHHapticEngine * _hapticsEngine;
    BKUIPearlEnrollControllerPreloadedState * _preloadedState;
    <BKUIPearlAudioStateDelegate> * _stateDelegate;
}

@property (nonatomic, retain) CHHapticEngine *hapticsEngine;
@property (nonatomic, retain) BKUIPearlEnrollControllerPreloadedState *preloadedState;
@property (nonatomic) <BKUIPearlAudioStateDelegate> *stateDelegate;

- (void).cxx_destruct;
- (void)cleanupHaptics;
- (void)cleanupHapticsAndSound;
- (void)cleanupSound;
- (id)createEngine;
- (void)dealloc;
- (void)fadeCurrentSound:(double)arg1 completion:(id /* block */)arg2;
- (id)hapticEventWithEventType:(unsigned long long)arg1 withDelay:(double)arg2;
- (id)hapticsEngine;
- (void)playHaptic:(unsigned long long)arg1 withDelay:(double)arg2;
- (void)playHapticWithEvents:(id)arg1;
- (id)preloadedState;
- (void)setHapticsEngine:(id)arg1;
- (void)setPreloadedState:(id)arg1;
- (void)setStateDelegate:(id)arg1;
- (void)setUpHaptics;
- (void)setupSound;
- (id)stateDelegate;
- (void)triggerSoundHapticForTransitionToState:(int)arg1 fromState:(int)arg2;
- (void)triggerSoundHapticForTransitionToSubstate:(int)arg1 fromSubstate:(int)arg2;

@end
