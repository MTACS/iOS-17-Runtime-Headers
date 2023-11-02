
@protocol CACUserAttentionControllerDelegate

@required

- (void)userAttentionController:(CACUserAttentionController *)arg1 didGainAttentionWithEvent:(long long)arg2;
- (void)userAttentionController:(CACUserAttentionController *)arg1 didLoseAttentionWithEvent:(long long)arg2;
- (void)userAttentionControllerAttentionAwarenessInterrupted:(CACUserAttentionController *)arg1;
- (void)userAttentionControllerAttentionAwarenessInterruptionEnded:(CACUserAttentionController *)arg1;

@end
