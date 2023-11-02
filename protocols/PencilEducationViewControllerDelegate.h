
@protocol PencilEducationViewControllerDelegate

@required

- (void)educationController:(PencilEducationViewController *)arg1 didChangeAnimationState:(bool)arg2;
- (void)educationControllerDidChangePanel:(PencilEducationViewController *)arg1;
- (void)educationControllerWillReplay:(PencilEducationViewController *)arg1;

@end
