
@interface CMContinuityCaptureFrameRateManager : NSObject {
    NSMutableSet * _activeControlsByNameThrottlingFrameRate;
    NSMutableSet * _activeStreamEntitiesThrottlingFrameRate;
    unsigned int  _allowedMaxFrameRate;
    unsigned int  _allowedMinFrameRate;
    _Atomic bool  _throttled;
    NSNumber * _throttledFrameRate;
    unsigned int  _userRequestedMaxFrameRate;
    unsigned int  _userRequestedMinFrameRate;
}

@property (readonly) unsigned int allowedMaxFrameRate;
@property (readonly) unsigned int allowedMinFrameRate;
@property (readonly) bool throttled;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleThermalLevelLowPowerModeChange;
- (bool)activeControlsForFrameRateThrottle;
- (unsigned int)allowedMaxFrameRate;
- (unsigned int)allowedMinFrameRate;
- (void)dealloc;
- (id)init;
- (void)lowPowerModeChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)reportControlStatus:(bool)arg1 forControlName:(id)arg2;
- (void)reportStreamStatus:(bool)arg1 forConfiguration:(id)arg2;
- (bool)throttled;
- (void)updateAllowedFPS;

@end
