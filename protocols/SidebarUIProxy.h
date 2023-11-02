
@protocol SidebarUIProxy <NSObject>

@required

- (long long)bookmarksPresentationStyle;
- (bool)isShowingSidebar;
- (UIBarButtonItem *)leadingSidebarButtonItem;
- (void)setShowingSidebar:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setSidebarUIProxyDelegate:(id <SidebarUIProxyDelegate>)arg1;
- (long long)sidebarStyle;
- (<SidebarUIProxyDelegate> *)sidebarUIProxyDelegate;
- (SidebarViewController *)sidebarViewController;
- (UIBarButtonItem *)trailingSidebarButtonItem;

@end
