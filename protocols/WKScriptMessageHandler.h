
@protocol WKScriptMessageHandler <NSObject>

@required

- (void)userContentController:(WKUserContentController *)arg1 didReceiveScriptMessage:(WKScriptMessage *)arg2;

@end
