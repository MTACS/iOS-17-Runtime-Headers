
@protocol PRUIModalRemoteViewControllerDelegate <NSObject>

@optional

- (void)modalRemoteViewController:(PRUIModalRemoteViewController *)arg1 didDismissWithResponse:(PRUIModalEntryPointResponse *)arg2;
- (void)modalRemoteViewController:(PRUIModalRemoteViewController *)arg1 willDismissWithResponse:(PRUIModalEntryPointResponse *)arg2;
- (void)modalRemoteViewControllerDidDismiss:(PRUIModalRemoteViewController *)arg1;

@end
