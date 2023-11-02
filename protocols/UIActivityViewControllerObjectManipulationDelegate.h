
@protocol UIActivityViewControllerObjectManipulationDelegate <NSObject>

@required

- (NSArray *)_customizationGroupsForActivityViewController:(UIActivityViewController *)arg1;

@optional

- (bool)_customizationAvailableForActivityViewController:(UIActivityViewController *)arg1;
- (UIViewController *)customActionViewControllerForActivityViewController:(UIActivityViewController *)arg1;
- (NSString *)customLocalizedActionTitleForActivityViewController:(UIActivityViewController *)arg1;

@end
