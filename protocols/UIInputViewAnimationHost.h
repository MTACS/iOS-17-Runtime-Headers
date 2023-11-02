
@protocol UIInputViewAnimationHost <NSObject>

@required

- (void)changeToInputViewSet:(UIInputViewSet *)arg1;
- (UIInputViewSet *)inputViewSet;
- (UIView *)inputViewSnapshotOfView:(UIView *)arg1 afterScreenUpdates:(bool)arg2;
- (void)setInputViewsHidden:(bool)arg1;
- (void)setKeyboardWindowSnapshotOn:(bool)arg1;
- (void)syncToExistingAnimations;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitioningFrame;
- (UIView *)transitioningView;
- (void)updateToPlacement:(UIInputViewSetPlacement *)arg1 withNormalAnimationsAndNotifications:(bool)arg2;
- (UIView *)viewForTransitionScreenSnapshot;

@end
