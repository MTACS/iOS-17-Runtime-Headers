
@protocol HUContainedAccessoryElementsGridViewControllerDelegate <HUServiceGridViewControllerDelegate>

@optional

- (UIViewController<HUDetailsPresentationDelegateHost> *)detailsViewControllerFor:(HUContainedAccessoryElementsGridViewController *)arg1 item:(HFItem *)arg2;
- (bool)hasDetailsActionFor:(HUContainedAccessoryElementsGridViewController *)arg1 item:(HFItem *)arg2;

@end
