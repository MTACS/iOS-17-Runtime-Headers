
@interface AFAccessibilityObserver : NSObject {
    NSHashTable * _listeners;
    NSObject<OS_dispatch_queue> * _queue;
    AFAccessibilityState * _state;
    unsigned long long  _stateDirtyFlags;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
}

@property (nonatomic, readonly, copy) AFAccessibilityState *state;

+ (id)sharedObserver;

- (void).cxx_destruct;
- (bool)_fetchIsVibrationDisabled;
- (bool)_fetchIsVoiceOverTouchEnabled;
- (void)_setState:(id)arg1 clearDirtyFlags:(unsigned long long)arg2;
- (void)_updateVibrationDisabledPreference;
- (void)_updateVoiceOverTouchEnabledPreference;
- (void)addListener:(id)arg1;
- (id)currentState;
- (void)getStateWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)removeListener:(id)arg1;
- (id)state;
- (void)vibrationDisabledPreferenceDidChange:(id)arg1;
- (void)voiceOverTouchEnabledPreferenceDidChange:(id)arg1;

@end
