
@protocol QLCustomItemViewControllerHost <NSObject>

@required

- (void)dismissQuickLook;
- (void)forwardMessageToHostOfCustomViewController:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)presentShareSheetWithPopoverTracker:(void *)arg1 customSharedURL:(void *)arg2 dismissCompletion:(void *)arg3; // needs 3 arg types, found 7: <QLRemotePopoverTracker> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setFullScreen:(bool)arg1;

@end
