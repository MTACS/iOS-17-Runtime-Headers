
@interface GTFileWriterService : NSObject <GTFileWriterService> {
    NSString * _deviceUDID;
    NSObject<OS_dispatch_queue> * _fileTransferQueue;
    NSObject<OS_os_log> * _log;
    <GTRemoteConnectionProvider> * _remoteConnectionProvider;
    unsigned long long  _sessionCounts;
    NSMutableDictionary * _sessions;
    <GTURLAccessProvider> * _urlAccessProvider;
    NSObject<OS_dispatch_semaphore> * _writeSem;
}

- (void).cxx_destruct;
- (bool)_finishSession:(unsigned long long)arg1 error:(id*)arg2;
- (void)beginTransferSessionWithFileEntries:(id)arg1 basePath:(id)arg2 toDevice:(id)arg3 options:(id)arg4 sessionID:(unsigned long long)arg5 completionHandler:(id /* block */)arg6;
- (id)initWithRemoteConnectionProvider:(id)arg1 deviceUDID:(id)arg2 urlAccessProvider:(id)arg3;
- (void)initiateTransfer:(id)arg1 basePath:(id)arg2 fromDevice:(id)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)initiateTransfer:(id)arg1 basePath:(id)arg2 fromDevice:(id)arg3 toURL:(id)arg4 options:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)startTransfer:(id)arg1 basePath:(id)arg2 fromDevice:(id)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)writeFileData:(id)arg1 sessionID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;

@end
