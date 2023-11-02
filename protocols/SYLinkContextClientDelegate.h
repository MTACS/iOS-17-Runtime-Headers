
@protocol SYLinkContextClientDelegate <NSObject>

@optional

- (UIViewController *)presentingViewControllerForLinkContextClient:(SYLinkContextClient *)arg1;
- (void)userDidRemoveContentItems:(NSArray *)arg1;
- (void)userEditDidAddContentItems:(NSArray *)arg1;
- (void)userWillAddLinkWithActivity:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUserActivity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUserActivity *, NSData *, void*

@end
