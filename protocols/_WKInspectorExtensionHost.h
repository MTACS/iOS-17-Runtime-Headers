
@protocol _WKInspectorExtensionHost <NSObject>

@optional

- (WKWebView *)extensionHostWebView;
- (void)navigateExtensionTabWithIdentifier:(void *)arg1 toURL:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)registerExtensionWithID:(void *)arg1 extensionBundleIdentifier:(void *)arg2 displayName:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, _WKInspectorExtension *, void*
- (void)showExtensionTabWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)unregisterExtension:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: _WKInspectorExtension *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
