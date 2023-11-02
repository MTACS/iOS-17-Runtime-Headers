
@interface TITypingAssertion : NSObject {
    bool  _active;
    PSPointerClientController * _pointerClientController;
    NSMutableSet * _restingPathIndices;
    NSTimer * _timer;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) PSPointerClientController *pointerClientController;
@property (nonatomic, retain) NSTimer *timer;

+ (id)sharedTypingAssertion;

- (void).cxx_destruct;
- (id)__restingPathIndices;
- (void)_sbsSetTypingActive:(bool)arg1;
- (void)dealloc;
- (id)init;
- (bool)isActive;
- (id)pointerClientController;
- (void)restResetTouches;
- (void)restTouchEndWithPathIndex:(long long)arg1;
- (void)restTouchStartWithPathIndex:(long long)arg1;
- (void)setActive:(bool)arg1;
- (void)setPointerClientController:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;
- (void)timerFired:(id)arg1;
- (void)touchWithDuration:(double)arg1 reason:(long long)arg2;
- (void)touchWithReason:(long long)arg1;

@end
