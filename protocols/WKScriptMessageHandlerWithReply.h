
@protocol WKScriptMessageHandlerWithReply <NSObject>

@required

- (void)userContentController:(void *)arg1 didReceiveScriptMessage:(void *)arg2 replyHandler:(void *)arg3; // needs 3 arg types, found 9: WKUserContentController *, WKScriptMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSString *, void*

@end
