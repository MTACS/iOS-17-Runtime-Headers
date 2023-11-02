
@protocol WBSWebExtensionsControllerDelegate <WBSExtensionsControllerDelegate, NSObject>

@optional

- (void)webExtensionsControllerDidStartListeningForWebRequestEvents:(WBSWebExtensionsController *)arg1;
- (void)webExtensionsControllerDidStopListeningForWebRequestEvents:(WBSWebExtensionsController *)arg1;

@end
