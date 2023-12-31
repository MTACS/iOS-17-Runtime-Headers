
@protocol SXVideoPlayerViewControllerProvider <NSObject>

@required

- (bool)presentedAndAppeared;
- (void)setPresentedAndAppeared:(bool)arg1;
- (SXVideoPlayerViewControllerResponse *)videoPlayerViewControllerForURL:(void *)arg1 receiveOwnershipBlock:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SVVideoPlayerViewController *, void*

@end
