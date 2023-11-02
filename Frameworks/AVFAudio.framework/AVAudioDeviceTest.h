
@interface AVAudioDeviceTest : NSObject {
    NSXPCConnection * _connection;
    bool  _processSequenceAsynchronously;
    <AVAudioDeviceTestServiceProtocol> * _serviceDelegateAsync;
    <AVAudioDeviceTestServiceProtocol> * _serviceDelegateSync;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property bool processSequenceAsynchronously;
@property (nonatomic, retain) <AVAudioDeviceTestServiceProtocol> *serviceDelegateAsync;
@property (nonatomic, retain) <AVAudioDeviceTestServiceProtocol> *serviceDelegateSync;

- (void).cxx_destruct;
- (void)cancel;
- (id)connection;
- (void)dealloc;
- (id)init;
- (id)initWithXPCEndPoint:(id)arg1;
- (void)playback:(id)arg1 filePath:(id)arg2 completion:(id /* block */)arg3;
- (void)playbackTone:(id)arg1 completion:(id /* block */)arg2;
- (bool)processSequenceAsynchronously;
- (id)serviceDelegateAsync;
- (id)serviceDelegateSync;
- (void)setConnection:(id)arg1;
- (void)setProcessSequenceAsynchronously:(bool)arg1;
- (void)setServiceDelegateAsync:(id)arg1;
- (void)setServiceDelegateSync:(id)arg1;
- (void)startRecording:(id)arg1 filePath:(id)arg2 completion:(id /* block */)arg3;
- (void)startWithSequence:(id)arg1 completion:(id /* block */)arg2;
- (void)stopPlayback;
- (void)stopRecording:(id /* block */)arg1;

@end
