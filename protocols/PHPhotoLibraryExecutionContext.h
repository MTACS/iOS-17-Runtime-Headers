
@protocol PHPhotoLibraryExecutionContext <NSObject>

@required

- (void)callTransactionCompletionHandler:(void *)arg1 withSuccess:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*, bool, NSError *
- (void)dispatchOnQueue:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)sendChangesRequest:(void *)arg1 onClient:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: PHPerformChangesRequest *, <PLAssetsdPhotoKitChangesRequestClient> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
