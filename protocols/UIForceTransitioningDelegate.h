
@protocol UIForceTransitioningDelegate <UIViewControllerTransitioningDelegate>

@required

- (UIInteractionProgress *)interactionProgressForPresentation;
- (void)setInteractionProgressForPresentation:(UIInteractionProgress *)arg1;

@end
