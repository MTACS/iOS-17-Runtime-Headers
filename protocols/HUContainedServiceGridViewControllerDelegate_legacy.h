
@protocol HUContainedServiceGridViewControllerDelegate_legacy <NSObject, HUServiceGridViewControllerDelegate>

@optional

- (UIViewController<HUDetailsPresentationDelegateHost> *)detailsViewControllerForContainedServiceGridViewController:(HUContainedServicesGridViewController_legacy *)arg1 item:(HFItem *)arg2;
- (bool)hasDetailsActionForContainedServiceGridViewController:(HUContainedServicesGridViewController_legacy *)arg1 item:(HFItem *)arg2;

@end
