
@interface NSProxyConnectionStreamTask : NSProxyConnection <NSStreamDelegate, NSURLSessionStreamDelegate> {
    bool  _dataAvailableForReading;
    NSString * _host;
    NSInputStream * _inputStream;
    bool  _isConnected;
    NSOutputStream * _outputStream;
    int  _port;
    NSObject<OS_dispatch_queue> * _queue;
    NSURLSessionStreamTask * _streamTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)cancel;
- (void)dealloc;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4;
- (void)read:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)write:(id)arg1 handler:(id /* block */)arg2;

@end
