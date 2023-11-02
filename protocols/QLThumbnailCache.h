
@protocol QLThumbnailCache

@required

- (void)getThumbnailCacheURLWrappersWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPSandboxingURLWrapper *, FPSandboxingURLWrapper *, void*
- (void)getThumbnailURLForItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <NSFileProviderItem> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)storeThumbnailAtURL:(void *)arg1 forItem:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSURL *, <NSFileProviderItem> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
