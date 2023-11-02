
@protocol QLRemotePreviewService <NSObject>

@required

- (void)generatePreviewForURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: QLURLHandler *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, QLPreviewReply *, NSError *, void*
- (void)getARQLInlineProxy2WithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ARQLInlineService2> *, void*
- (void)getARQLInlineProxy3WithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ARQLInlineService3> *, void*
- (void)getARQLInlineProxyWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ARQLInlineService> *, void*
- (void)getPrinterProxyWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <QLPrintingProtocol> *, void*
- (void)invalidateServiceWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)loadPreviewControllerWithContents:(void *)arg1 context:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: id, QLPreviewContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSDictionary *, void*
- (void)previewControllerDidUpdatePreferredContentSize:(NSValue *)arg1;
- (void)previewControllerDidUpdateTitle:(NSString *)arg1;
- (void)previewControllerWantsFullScreen:(bool)arg1;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (void)setAppearance:(QLAppearance *)arg1 animated:(bool)arg2;
- (void)setHostViewControllerProxy:(id <QLCustomItemViewControllerHost>)arg1;

@end
