
@interface MRAVXPCPipeTransport : MRExternalDeviceTransport <MRVirtualDevicePipeProtocol, NSStreamDelegate> {
    MRDeviceInfo * _deviceInfo;
    NSError * _error;
    NSInputStream * _inputStream;
    NSInputStream * _inputStreamInternal;
    MRAVOutputDevice * _outputDevice;
    NSOutputStream * _outputStream;
    NSOutputStream * _outputStreamInternal;
    NSXPCConnection * _pipeConnection;
    NSXPCListenerEndpoint * _pipeEndpoint;
    NSRunLoop * _runLoop;
    CURunLoopThread * _runLoopThread;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _useSystemAuthenticationPrompt;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MRAVOutputDevice *outputDevice;
@property (nonatomic, readonly) NSXPCListenerEndpoint *pipeEndpoint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_onQueue_resetStreams;
- (id)createConnectionWithUserInfo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceInfo;
- (id)error;
- (bool)getInputStream:(id*)arg1 outputStream:(id*)arg2 userInfo:(id)arg3;
- (id)hostname;
- (id)initWithOutputDevice:(id)arg1 pipeEndpoint:(id)arg2;
- (id)name;
- (id)outputDevice;
- (id)pipeEndpoint;
- (long long)port;
- (bool)requiresCustomPairing;
- (void)reset;
- (void)sendData:(id)arg1;
- (void)setShouldUseSystemAuthenticationPrompt:(bool)arg1;
- (bool)shouldUseSystemAuthenticationPrompt;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)uid;

@end
