
@protocol PLAssetsdPhotoKitChangesRequestClient

@required

- (NSString *)clientName;
- (bool)sendChangesRequest:(PLXPCObject *)arg1 error:(id*)arg2;
- (void)sendChangesRequest:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: PLXPCObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
