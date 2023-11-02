
@protocol SBHAddWidgetSheetViewControllerDelegate <SBHWidgetDragHandlerPassing>

@required

- (void)addWidgetSheetViewController:(UIViewController<SBHWidgetSheetViewControlling> *)arg1 didSelectWidgetIconView:(SBIconView *)arg2;
- (void)addWidgetSheetViewControllerDidAppear:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (void)addWidgetSheetViewControllerDidCancel:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (void)addWidgetSheetViewControllerDidDisappear:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (void)addWidgetSheetViewControllerWillAppear:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (void)addWidgetSheetViewControllerWillDisappear:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;

@optional

- (UIViewController *)addWidgetSheetViewController:(UIViewController<SBHWidgetSheetViewControlling> *)arg1 detailViewControllerForWidgetCollection:(SBHApplicationWidgetCollection *)arg2;
- (UIView *)backgroundViewMatchingMaterialBeneathAddWidgetSheetViewController:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (void)configureBackgroundView:(UIView *)arg1 matchingMaterialBeneathAddWidgetSheetViewController:(UIViewController<SBHWidgetSheetViewControlling> *)arg2;
- (UIViewController *)galleryViewControllerForAddWidgetSheetViewController:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;

@end
