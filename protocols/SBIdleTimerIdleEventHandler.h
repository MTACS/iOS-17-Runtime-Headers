
@protocol SBIdleTimerIdleEventHandler <NSObject>

@optional

- (bool)handleIdleTimerDidExpire;
- (bool)handleIdleTimerDidWarn;
- (bool)handleIdleTimerUserAttentionDidReset;

@end
