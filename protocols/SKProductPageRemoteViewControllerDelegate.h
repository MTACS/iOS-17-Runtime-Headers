
@protocol SKProductPageRemoteViewControllerDelegate <NSObject>

@required

- (void)productPageRemoteViewController:(void *)arg1 finishWithResult:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: SKProductPageRemoteViewController *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)productPageRemoteViewControllerLoadDidFinish:(SKProductPageRemoteViewController *)arg1;

@optional

- (void)productPageRemoteViewController:(SKProductPageRemoteViewController *)arg1 didTerminateWithError:(NSError *)arg2;

@end
