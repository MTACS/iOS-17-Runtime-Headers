
@protocol CPSBusinessItemFetching <NSObject>

@required

- (void)fetchBusinessMetadataForURL:(void *)arg1 availabilityHandler:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 15: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, void*, id /* block */, void*, void, id /* block */, CPSClipMetadata *, NSError *, void*
- (void)fetchBusinessMetadataForURLHash:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPSClipMetadata *, NSError *, void*

@end
