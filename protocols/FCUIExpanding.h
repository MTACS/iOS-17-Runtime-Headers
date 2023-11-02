
@protocol FCUIExpanding <NSObject>

@required

- (bool)isExpanded;
- (void)setExpanded:(bool)arg1;

@optional

- (UIGestureRecognizer *)gestureRecognizerForExclusionRelationships;
- (void)setExpanded:(bool)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;

@end
