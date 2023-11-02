
@protocol HMCameraClipFetchAssetContextOperationDataSource <NSObject>

@required

- (bool)copyItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;
- (NSURL *)createTemporaryDirectoryAppropriateForURL:(NSURL *)arg1 error:(id*)arg2;
- (HMCameraClipVideoFileCombiner *)createVideoFileCombinerWithVideoFileURLs:(NSArray *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (NSData *)dataFromEncryptedDataContext:(HMCameraClipEncryptedDataContext *)arg1 usingDecryptionManager:(HMCameraClipDecryptionManager *)arg2;
- (HMCameraClipDownloadAssetDataTask *)dataTaskWithURL:(NSURL *)arg1 httpHeaderFields:(NSDictionary *)arg2;
- (NSOutputStream *)outputStreamToFileAtURL:(NSURL *)arg1 shouldAppend:(bool)arg2;
- (bool)removeItemAtURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)writeData:(NSData *)arg1 toFileURL:(NSURL *)arg2 error:(id*)arg3;

@end
