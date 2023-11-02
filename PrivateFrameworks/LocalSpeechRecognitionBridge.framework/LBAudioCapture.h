
@interface LBAudioCapture : NSObject <CSXPCClientDelegate> {
    CSAudioStream * _audioStream;
    NSObject<OS_dispatch_queue> * _queue;
    CSXPCClient * _xpcClient;
}

@property (nonatomic, retain) CSAudioStream *audioStream;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSXPCClient *xpcClient;

- (void).cxx_destruct;
- (void)CSXPCClient:(id)arg1 didDisconnect:(bool)arg2;
- (void)_startRequestWithAudioContext:(id)arg1 streamOption:(id)arg2 streamProvider:(id)arg3 completion:(id /* block */)arg4;
- (id)_stopStreamOptionWithReason:(unsigned long long)arg1;
- (id)audioStream;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (void)setAudioStream:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setXpcClient:(id)arg1;
- (void)startAudioCaptureWithRecordContext:(id)arg1 startHostTime:(unsigned long long)arg2 siriSessionUUID:(id)arg3 completion:(id /* block */)arg4;
- (void)stopAudioCaptureWithReason:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)xpcClient;

@end
