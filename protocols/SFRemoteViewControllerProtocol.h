
@protocol SFRemoteViewControllerProtocol <NSObject>

@required

- (void)didAddToHomeScreen;
- (void)didChangeFullScreen:(bool)arg1;
- (void)didDecideCookieSharingForURL:(NSURL *)arg1 shouldCancel:(bool)arg2;
- (void)didDecideShouldShowLinkPreviews:(bool)arg1;
- (void)didFinishInitialLoad:(bool)arg1;
- (void)didLoadWebView;
- (void)didResolveRedirectionWithURL:(NSURL *)arg1 appLink:(LSAppLink *)arg2;
- (void)executeCustomActivityProxyID:(NSNumber *)arg1;
- (void)fetchActivityViewControllerInfoForURL:(NSURL *)arg1 title:(NSString *)arg2;
- (void)initialLoadDidRedirectToURL:(NSURL *)arg1;
- (void)setRemoteSwipeGestureEnabled:(bool)arg1;
- (void)willDismissServiceViewController;
- (void)willOpenCurrentPageInBrowser;
- (void)willOpenURLInHostApplication:(NSURL *)arg1;

@end
