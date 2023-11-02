
@protocol _UIPresentationControllerVisualStyleProviding <NSObject>

@required

- (_UIPresentationControllerVisualStyle *)defaultStyleForPresentationController:(UIPresentationController *)arg1;
- (_UIPresentationControllerVisualStyle<_UIAlertPresentationControllerVisualStyling> *)styleForAlertPresentationController:(UIPresentationController *)arg1;
- (_UIPresentationControllerVisualStyle<_UIPopoverPresentationControllerVisualStyling> *)styleForPopoverPresentationController:(UIPopoverPresentationController *)arg1;
- (_UIPresentationControllerVisualStyle *)styleForRootPresentationController:(UIPresentationController *)arg1;
- (_UIPresentationControllerVisualStyle<_UISearchPresentationControllerVisualStyling> *)styleForSearchPresentationController:(UIPresentationController *)arg1;
- (_UIPresentationControllerVisualStyle<_UISheetPresentationControllerVisualStyling> *)styleForSheetPresentationController:(UISheetPresentationController *)arg1;

@optional

- (long long)defaultConcretePresentationStyleForViewController:(UIViewController *)arg1;
- (long long)defaultConcreteTransitionStyleForViewController:(UIViewController *)arg1;
- (_UISheetPresentationMetrics *)defaultSheetMetrics;
- (Class)presentationControllerClassForModalPresentationStyle:(long long)arg1 inIdiom:(long long)arg2;
- (UIPresentationController *)presentationControllerForPresentedViewController:(UIViewController *)arg1;
- (UIPresentationController *)presentationControllerForPresentedViewController:(UIViewController *)arg1 inIdiom:(long long)arg2;

@end
