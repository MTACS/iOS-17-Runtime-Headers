
@interface CSCommandControlListener : NSObject <CSAudioStreamProvidingDelegate, CSXPCClientDelegate> {
    CSAudioStream * _audioStream;
    <CSAudioStreamProviding> * _audioStreamProvider;
    <CSCommandControlListenerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    CSXPCClient * _xpcClient;
}

@property (nonatomic, retain) CSAudioStream *audioStream;
@property (nonatomic, retain) <CSAudioStreamProviding> *audioStreamProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSCommandControlListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSXPCClient *xpcClient;

- (void).cxx_destruct;
- (void)CSXPCClient:(id)arg1 didDisconnect:(bool)arg2;
- (void)_startRequestWithCompletion:(id /* block */)arg1;
- (id)audioStream;
- (id)audioStreamProvider;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectedly:(long long)arg2;
- (id)delegate;
- (id)init;
- (id)queue;
- (void)setAudioStream:(id)arg1;
- (void)setAudioStreamProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setXpcClient:(id)arg1;
- (void)startListenWithOption:(id)arg1 completion:(id /* block */)arg2;
- (void)stopListenWithCompletion:(id /* block */)arg1;
- (id)xpcClient;

@end
