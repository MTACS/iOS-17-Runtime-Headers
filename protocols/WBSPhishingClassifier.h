
@protocol WBSPhishingClassifier <WBSPhishingURLClassifier>

@required

- (void)classifyURL:(void *)arg1 image:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, UIImage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSPhishingClassifierResults *, NSError *, void*
- (void)classifyURL:(void *)arg1 webView:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, WKWebView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSPhishingClassifierResults *, NSError *, void*
- (void)setClassification:(unsigned long long)arg1 forURL:(NSURL *)arg2;
- (void)takeSnapshotForWebView:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: WKWebView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, void*

@end
