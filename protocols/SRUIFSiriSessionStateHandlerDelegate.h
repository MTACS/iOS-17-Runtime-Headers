
@protocol SRUIFSiriSessionStateHandlerDelegate <NSObject>

@required

- (void)sessionStateHandler:(SRUIFSiriSessionStateHandler *)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3 forEvent:(long long)arg4 machAbsoluteTime:(double)arg5;

@end
