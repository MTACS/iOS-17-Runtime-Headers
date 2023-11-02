
@interface HUStaticStatusBarVisiblityHandler : NSObject <HUStatusBarVisibilityHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isStatusBarHidden, nonatomic, readonly) bool statusBarHidden;
@property (readonly) Class superclass;

- (bool)isStatusBarHidden;
- (void)setStatusBarHidden:(bool)arg1 withAnimationSettings:(id)arg2;

@end
