
@interface IOUSBHostStream : IOUSBHostIOSource {
    IOUSBHostPipe * _hostPipe;
    unsigned long long  _streamID;
}

@property (retain) IOUSBHostPipe *hostPipe;
@property unsigned long long streamID;

- (void).cxx_destruct;
- (bool)abortWithError:(id*)arg1;
- (bool)abortWithOption:(unsigned long long)arg1 error:(id*)arg2;
- (bool)enqueueIORequestWithData:(id)arg1 error:(id*)arg2 completionHandler:(id /* block */)arg3;
- (id)hostPipe;
- (id)initWithHostPipe:(id)arg1 streamID:(unsigned long long)arg2 ioConnection:(unsigned int)arg3 ioNotificationPortRef:(struct IONotificationPort { }*)arg4;
- (bool)sendIORequestWithData:(id)arg1 bytesTransferred:(unsigned long long*)arg2 error:(id*)arg3;
- (void)setHostPipe:(id)arg1;
- (void)setStreamID:(unsigned long long)arg1;
- (unsigned long long)streamID;

@end
