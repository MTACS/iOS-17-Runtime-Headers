
@protocol RemoteUIWebViewControllerDelegate

@optional

- (void)remoteUIWebViewController:(RemoteUIWebViewController *)arg1 dismissWithPayload:(id)arg2;
- (void)remoteUIWebViewControllerDidDismiss:(RemoteUIWebViewController *)arg1;
- (void)remoteUIWebViewControllerDonePressed:(RemoteUIWebViewController *)arg1;

@end
