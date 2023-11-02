
@interface HMCameraClipFetchAssetContextOperationDataSource : NSObject <HMCameraClipFetchAssetContextOperationDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)createTemporaryDirectoryAppropriateForURL:(id)arg1 error:(id*)arg2;
- (id)createVideoFileCombinerWithVideoFileURLs:(id)arg1 queue:(id)arg2;
- (id)dataFromEncryptedDataContext:(id)arg1 usingDecryptionManager:(id)arg2;
- (id)dataTaskWithURL:(id)arg1 httpHeaderFields:(id)arg2;
- (id)outputStreamToFileAtURL:(id)arg1 shouldAppend:(bool)arg2;
- (bool)removeItemAtURL:(id)arg1 error:(id*)arg2;
- (bool)writeData:(id)arg1 toFileURL:(id)arg2 error:(id*)arg3;

@end
