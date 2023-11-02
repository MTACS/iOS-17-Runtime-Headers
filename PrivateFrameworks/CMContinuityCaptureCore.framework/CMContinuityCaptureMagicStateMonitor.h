
@interface CMContinuityCaptureMagicStateMonitor : NSObject {
    NSMutableSet * _activeMagicStateAssertions;
    NSMutableSet * _activeNonMagicStateAssertions;
    <ContinuityCaptureTransportDevice> * _device;
    bool  _magic;
    id /* block */  _magicTransitionCoolDownBlock;
    id /* block */  _nonMagicTransitionCoolDownBlock;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _skipNearByCheck;
}

@property (readonly) bool magic;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;

+ (bool)shouldForceMagicForAssertionType:(long long)arg1;
+ (bool)shouldForceNonMagicForAssertionType:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (void)holdMagicStateAssertion:(long long)arg1;
- (void)holdNonMagicStateAssertion:(long long)arg1;
- (id)initWithDevice:(id)arg1;
- (void)invalidate;
- (bool)magic;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)queue;
- (void)releaseMagicStateAssertion:(long long)arg1 stateTransitionCoolDownTime:(unsigned int)arg2;
- (void)releaseNonMagicStateAssertion:(long long)arg1 stateTransitionCoolDownTime:(unsigned int)arg2;
- (void)setupMagicStateListener;
- (void)updateState;

@end
