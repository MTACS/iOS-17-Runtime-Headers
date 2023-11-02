
@protocol AMSUIWebSafariWebDelegate <NSObject>

@required

- (void)safariView:(void *)arg1 didReceiveAction:(void *)arg2 body:(void *)arg3 replyHandler:(void *)arg4; // needs 4 arg types, found 10: AMSUIWebSafariWebView *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSString *, void*
- (void)safariView:(AMSUIWebSafariWebView *)arg1 didRedirectToSchemeWithURL:(NSURL *)arg2;

@end
