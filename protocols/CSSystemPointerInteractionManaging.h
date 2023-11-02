
@protocol CSSystemPointerInteractionManaging <NSObject>

@required

- (void)registerView:(UIView *)arg1 delegate:(id <SBSystemPointerInteractionDelegate>)arg2;
- (void)unregisterView:(UIView *)arg1;

@end
