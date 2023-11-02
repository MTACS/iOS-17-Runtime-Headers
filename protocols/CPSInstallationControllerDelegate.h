
@protocol CPSInstallationControllerDelegate <NSObject>

@required

- (void)installationController:(CPSInstallationController *)arg1 didFinishWithError:(NSError *)arg2;
- (void)installationController:(CPSInstallationController *)arg1 didUpdateProgress:(double)arg2;
- (void)installationControllerDidInstallPlaceholder:(CPSInstallationController *)arg1;
- (void)installationControllerWillStartInstall:(CPSInstallationController *)arg1;

@end
