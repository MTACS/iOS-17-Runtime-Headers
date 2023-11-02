
@protocol SBHWidgetWrapperViewControllerDelegate <SBHWidgetDragHandlerPassing>

@required

- (UIView *)backgroundViewMatchingMaterialBeneathWrapperViewController:(SBHWidgetWrapperViewController *)arg1;
- (void)configureBackgroundView:(UIView *)arg1 matchingMaterialBeneathWrapperViewController:(SBHWidgetWrapperViewController *)arg2;

@optional

- (void)iconTapped:(SBHWidgetWrapperViewController *)arg1;
- (void)wrapperViewControllerSelectedSizeClassChanged:(SBHWidgetWrapperViewController *)arg1;

@end
