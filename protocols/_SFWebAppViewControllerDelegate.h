
@protocol _SFWebAppViewControllerDelegate <NSObject>

@required

- (void)webAppViewController:(_SFWebAppViewController *)arg1 didChangeLoadingState:(bool)arg2;
- (void)webAppViewController:(_SFWebAppViewController *)arg1 viewServiceDidTerminateWithError:(NSError *)arg2;
- (void)webAppViewControllerDidFinishInitialLoad:(_SFWebAppViewController *)arg1;

@end
