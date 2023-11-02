
@protocol WBSSystemNoteTakingControllerDelegate <NSObject>

@required

- (bool)isNoteTakingControllerSupportedInPrivateBrowsing:(WBSSystemNoteTakingController *)arg1;
- (void)noteTakingController:(void *)arg1 addHighlightForUserActivity:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: WBSSystemNoteTakingController *, NSUserActivity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUserActivity *, NSData *, void*
- (void)notifyAddedLinkPreviewMetadata:(NSData *)arg1 toUserActivity:(NSUserActivity *)arg2 webView:(WKWebView *)arg3;

@end
