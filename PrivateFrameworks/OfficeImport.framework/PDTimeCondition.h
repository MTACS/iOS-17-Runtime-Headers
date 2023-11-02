
@interface PDTimeCondition : NSObject {
    int  mDelay;
    bool  mHasDelay;
    bool  mHasTriggerEvent;
    PDAnimationTarget * mTarget;
    int  mTriggerEvent;
}

- (void).cxx_destruct;
- (int)delay;
- (id)description;
- (bool)hasDelay;
- (bool)hasTriggerEvent;
- (id)init;
- (void)setDelay:(int)arg1;
- (void)setTarget:(id)arg1;
- (void)setTriggerEvent:(int)arg1;
- (id)target;
- (int)triggerEvent;
- (int)writeDelay;

@end
