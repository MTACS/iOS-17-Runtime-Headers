
@protocol QLPreviewingController <NSObject>

@optional

- (void)preparePreviewOfFileAtURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)preparePreviewOfSearchableItemWithIdentifier:(void *)arg1 queryString:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)providePreviewForFileRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: QLFilePreviewRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, QLPreviewReply *, NSError *, void*

@end
