
@protocol SBAttentionAwarenessClientDelegate <NSObject>

@required

- (void)client:(SBAttentionAwarenessClient *)arg1 attentionLostTimeoutDidExpire:(double)arg2 forConfigurationGeneration:(unsigned long long)arg3 withAssociatedObject:(id)arg4;
- (void)clientDidResetForUserAttention:(SBAttentionAwarenessClient *)arg1;

@end
