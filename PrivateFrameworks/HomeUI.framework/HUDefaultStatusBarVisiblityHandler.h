
@interface HUDefaultStatusBarVisiblityHandler : NSObject <HUStatusBarVisibilityHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isStatusBarHidden, nonatomic, readonly) bool statusBarHidden;
@property (readonly) Class superclass;

- (id)_statusBarAnimationParametersForAnimationSettings:(id)arg1;
- (bool)isStatusBarHidden;
- (void)setStatusBarHidden:(bool)arg1 withAnimationSettings:(id)arg2;

@end
