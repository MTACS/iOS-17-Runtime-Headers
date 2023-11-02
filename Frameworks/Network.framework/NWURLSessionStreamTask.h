
@interface NWURLSessionStreamTask : NWURLSessionTask {
    bool  _readClosed;
    NSURLResponse * _storedResponse;
    bool  _writeClosed;
}

- (void).cxx_destruct;
- (void)captureStreams;
- (void)closeRead;
- (void)closeWrite;
- (bool)isKindOfClass:(Class)arg1;
- (void)loaderBetterPathAvailable;
- (void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(id /* block */)arg4;
- (id)response;
- (void)startNextLoad:(bool)arg1;
- (void)startSecureConnection;
- (void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;

@end
