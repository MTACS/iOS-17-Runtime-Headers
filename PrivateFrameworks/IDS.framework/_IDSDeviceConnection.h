
@interface _IDSDeviceConnection : NSObject <IDSDaemonListenerProtocol> {
    NSMutableDictionary * _awdMetrics;
    NSNumber * _clientTimeout;
    NSString * _connectionUUID;
    bool  _hasTimedOut;
    NSInputStream * _inputStreamForSocket;
    bool  _isDefaultPairedDevice;
    unsigned long long  _mtu;
    NSString * _nsuuid;
    id /* block */  _openSocketCompletionHandler;
    NSString * _openSocketCompletionHandlerID;
    NSObject<OS_dispatch_queue> * _openSocketCompletionHandlerQueue;
    NSOutputStream * _outputStreamForSocket;
    NSString * _service;
    NSString * _serviceToken;
    int  _socket;
    NSString * _streamName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) NSDictionary *metrics;
@property (nonatomic, readonly) unsigned long long mtu;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (nonatomic, readonly) int socket;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupCompletionBlock;
- (void)_close;
- (void)_connect;
- (void)_daemonDied:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)deviceConnectionKey;
- (id)initWithDevice:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3 queue:(id)arg4;
- (id)inputStream;
- (id)metrics;
- (unsigned long long)mtu;
- (id)outputStream;
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (int)socket;
- (bool)updateConnectionWithOptions:(id)arg1 error:(id*)arg2;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;

@end