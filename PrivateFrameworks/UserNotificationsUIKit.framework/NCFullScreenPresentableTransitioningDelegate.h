
@interface NCFullScreenPresentableTransitioningDelegate : NSObject <BNBannerTransitioningDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isResizeAnimationCustomizationPermitted, nonatomic) bool resizeAnimationCustomizationPermitted;
@property (readonly) Class superclass;

- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1 userInfo:(id)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 userInfo:(id)arg4;

@end
