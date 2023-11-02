
@interface GTBulkDataServiceXPCProxy : NSObject <GTBulkDataService> {
    GTServiceConnection * _connection;
    GTBulkDataTransferOptions * _defaultTransferOptions;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void).cxx_destruct;
- (void)downloadData:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)downloadData:(unsigned long long)arg1 error:(id*)arg2;
- (void)downloadData:(unsigned long long)arg1 usingTransferOptions:(id)arg2 chunkHandler:(id /* block */)arg3;
- (void)downloadData:(unsigned long long)arg1 usingTransferOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)downloadData:(unsigned long long)arg1 usingTransferOptions:(id)arg2 error:(id*)arg3;
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;
- (unsigned long long)newUploadWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)transferOptions;
- (bool)uploadChunk:(id)arg1 forHandle:(unsigned long long)arg2 isFinalChunk:(bool)arg3 error:(id*)arg4;
- (void)uploadData:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)uploadData:(id)arg1 error:(id*)arg2;
- (void)uploadData:(id)arg1 usingTransferOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)uploadData:(id)arg1 usingTransferOptions:(id)arg2 error:(id*)arg3;

@end
