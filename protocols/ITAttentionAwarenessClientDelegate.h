
@protocol ITAttentionAwarenessClientDelegate <NSObject>

@required

- (void)client:(ITAttentionAwarenessClient *)arg1 attentionLostTimeoutDidExpire:(ITIdleTimeout *)arg2 forContext:(ITAttentionAwarenessContext *)arg3;
- (void)clientDidReset:(ITAttentionAwarenessClient *)arg1 forUserAttentionEvent:(AWAttentionEvent *)arg2 withContext:(ITAttentionAwarenessContext *)arg3;

@end
