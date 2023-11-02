
@interface CACUserAttentionInterface : NSObject <CACUserAttentionControllerDelegate> {
    bool  _isAttentionAwarenessInterrupted;
    CACUserAttentionController * _userAttentionController;
}

@property (nonatomic) bool isAttentionAwarenessInterrupted;
@property (getter=_userAttentionController, setter=_setUserAttentionController:, nonatomic, retain) CACUserAttentionController *userAttentionController;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_setUserAttentionController:(id)arg1;
- (id)_userAttentionController;
- (void)cancelDelayedUserAttentionControllerStop;
- (bool)isAttentionAwarenessInterrupted;
- (void)setIsAttentionAwarenessInterrupted:(bool)arg1;
- (void)startUserAttentionControllerIfNeeded;
- (void)startUserAttentionControllerIfNeededForTypes:(unsigned long long)arg1;
- (void)stopUserAttentionControllerIfNeeded;
- (void)stopUserAttentionControllerIfNeededAfterDelay:(double)arg1;
- (void)userAttentionController:(id)arg1 didGainAttentionWithEvent:(long long)arg2;
- (void)userAttentionController:(id)arg1 didLoseAttentionWithEvent:(long long)arg2;
- (void)userAttentionControllerAttentionAwarenessInterrupted:(id)arg1;
- (void)userAttentionControllerAttentionAwarenessInterruptionEnded:(id)arg1;

@end
