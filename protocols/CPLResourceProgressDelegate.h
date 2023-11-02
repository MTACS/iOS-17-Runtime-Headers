
@protocol CPLResourceProgressDelegate <NSObject>

@required

- (void)libraryManager:(CPLLibraryManager *)arg1 backgroundDownloadDidFinishForResource:(CPLResource *)arg2;
- (void)libraryManager:(CPLLibraryManager *)arg1 downloadDidFinishForResourceTransferTask:(CPLResourceTransferTask *)arg2 finalResource:(CPLResource *)arg3 withError:(NSError *)arg4;
- (void)libraryManager:(CPLLibraryManager *)arg1 downloadDidStartForResourceTransferTask:(CPLResourceTransferTask *)arg2;
- (void)libraryManager:(CPLLibraryManager *)arg1 inMemoryDownloadDidFinishForResourceTransferTask:(CPLResourceTransferTask *)arg2 data:(NSData *)arg3 withError:(NSError *)arg4;
- (void)libraryManager:(CPLLibraryManager *)arg1 uploadDidFinishForResourceTransferTask:(CPLResourceTransferTask *)arg2 withError:(NSError *)arg3;
- (void)libraryManager:(CPLLibraryManager *)arg1 uploadDidStartForResourceTransferTask:(CPLResourceTransferTask *)arg2;

@optional

- (void)libraryManager:(CPLLibraryManager *)arg1 backgroundDownloadDidFailForResource:(CPLResource *)arg2;
- (void)libraryManager:(CPLLibraryManager *)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(CPLResourceTransferTask *)arg3;
- (void)libraryManager:(CPLLibraryManager *)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(CPLResourceTransferTask *)arg3;
- (void)sizeOfResourcesToUploadDidChangeForLibraryManager:(CPLLibraryManager *)arg1;

@end
