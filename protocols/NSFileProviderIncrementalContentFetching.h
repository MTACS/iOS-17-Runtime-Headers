
@protocol NSFileProviderIncrementalContentFetching <NSObject>

@required

- (NSProgress *)fetchContentsForItemWithIdentifier:(void *)arg1 version:(void *)arg2 usingExistingContentsAtURL:(void *)arg3 existingVersion:(void *)arg4 request:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 13: NSString *, NSFileProviderItemVersion *, NSURL *, NSFileProviderItemVersion *, NSFileProviderRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, <NSFileProviderItem> *, NSError *, void*

@end
