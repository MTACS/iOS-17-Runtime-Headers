
@interface AVCAnsweringMachine : NSObject {
    AVCAnsweringMachineConfiguration * _configuration;
    AVConferenceXPCClient * _connection;
    <AVCAnsweringMachineDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    long long  _messageAudioToken;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, readonly) <AVCAnsweringMachineDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) long long messageAudioToken;

+ (void)cleanUpMessageRecordingURL:(id)arg1 messageRecordingURLSandboxExtensionHandle:(long long)arg2;

- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)deregisterServerCallbacks;
- (id)description;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (id)logPrefix;
- (long long)messageAudioToken;
- (void)printDidStop:(bool)arg1 messageRecordingURL:(id)arg2 error:(id)arg3;
- (void)printInitConfiguration;
- (void)registerDidFinishAnnouncementBlockWithInstance:(id)arg1;
- (void)registerDidStartBlockWithInstance:(id)arg1;
- (void)registerDidStopBlockWithInstance:(id)arg1;
- (void)registerServerCallbacks;
- (void)registerServerDidDisconnectBlockWithInstance:(id)arg1;
- (bool)setUpDelegateQueue:(id)arg1;
- (bool)setUpServerConnection;
- (void)start;
- (void)stop;

@end
