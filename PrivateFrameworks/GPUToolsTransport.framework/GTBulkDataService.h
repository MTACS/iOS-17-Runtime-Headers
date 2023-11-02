
@interface GTBulkDataService : NSObject <GTBulkDataService> {
    NSObject<OS_dispatch_queue> * _dataAccessQueue;
    NSMutableDictionary * _dataDownloadStore;
    NSObject<OS_dispatch_queue> * _dataTransferQueue;
    NSMutableDictionary * _dataUploadCompressionAlgorithm;
    NSMutableDictionary * _dataUploadedStore;
    NSMutableDictionary * _dataUploadingStore;
    NSObject<OS_os_log> * _log;
    unsigned long long  _nextDownloadHandle;
    unsigned long long  _nextUploadHandle;
}

- (void).cxx_destruct;
- (void)downloadData:(unsigned long long)arg1 usingTransferOptions:(id)arg2 chunkHandler:(id /* block */)arg3;
- (unsigned long long)handoverDataForDownload:(id)arg1;
- (id)init;
- (unsigned long long)newUploadWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)takeUploadedDataForHandle:(unsigned long long)arg1;
- (bool)uploadChunk:(id)arg1 forHandle:(unsigned long long)arg2 isFinalChunk:(bool)arg3 error:(id*)arg4;

@end
