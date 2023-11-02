
@protocol ITIdleTimerDelegate <NSObject>

@required

- (void)idleTimer:(ITAttentionAwareIdleTimer *)arg1 attentionLostTimeoutDidExpire:(ITIdleTimeout *)arg2;
- (void)idleTimerDidReset:(ITAttentionAwareIdleTimer *)arg1 forUserAttention:(unsigned long long)arg2 at:(double)arg3;

@end
