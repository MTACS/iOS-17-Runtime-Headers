
@protocol UIContentContainer <NSObject>

@required

- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id <UIContentContainer>)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id <UIContentContainer>)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id <UIContentContainer>)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)willTransitionToTraitCollection:(UITraitCollection *)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;

@end
