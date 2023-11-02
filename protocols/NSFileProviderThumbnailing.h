
@protocol NSFileProviderThumbnailing <NSObject>

@required

- (NSProgress *)fetchThumbnailsForItemIdentifiers:(void *)arg1 requestedSize:(void *)arg2 perThumbnailCompletionHandler:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 16: NSArray *, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSData *, NSError *, void*, id /* block */, void*, void, id /* block */, NSError *, void*

@end
