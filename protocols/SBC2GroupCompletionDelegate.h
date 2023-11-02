
@protocol SBC2GroupCompletionDelegate <NSObject>

@required

- (void)SBC2GroupCompletionAnimationDidBegin:(NSString *)arg1;
- (void)SBC2GroupCompletionAnimationDidComplete:(NSString *)arg1 finished:(bool)arg2 retargeted:(bool)arg3;

@end
