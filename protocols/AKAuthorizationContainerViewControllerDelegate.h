
@protocol AKAuthorizationContainerViewControllerDelegate <NSObject>

@optional

- (void)authorizationContainerViewControllerDidDismiss:(AKAuthorizationContainerViewController *)arg1;
- (bool)authorizationContainerViewControllerShouldDismiss:(AKAuthorizationContainerViewController *)arg1;

@end
