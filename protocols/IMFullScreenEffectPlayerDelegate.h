
@protocol IMFullScreenEffectPlayerDelegate <NSObject>

@required

- (void)fullScreenEffectPlayerDidFinish:(IMFullScreenEffectPlayer *)arg1;
- (void)fullScreenEffectPlayerDidPrepare:(IMFullScreenEffectPlayer *)arg1;
- (void)fullScreenEffectPlayerDidStart:(IMFullScreenEffectPlayer *)arg1;

@end
