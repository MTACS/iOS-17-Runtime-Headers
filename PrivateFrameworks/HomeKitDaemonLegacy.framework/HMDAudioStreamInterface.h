
@interface HMDAudioStreamInterface : HMDStreamInterface <AVCAudioStreamDelegate, HMFLogging> {
    <HMDAVCAudioStream> * _audioStream;
    unsigned long long  _audioStreamSetting;
    <HMDAudioStreamInterfaceDataSource> * _dataSource;
    <HMDAudioStreamInterfaceDelegate> * _delegate;
    id /* block */  _stopStreamCompletionHandler;
    bool  _streamStarted;
}

@property (readonly) <HMDAVCAudioStream> *audioStream;
@property unsigned long long audioStreamSetting;
@property (readonly) <HMDAudioStreamInterfaceDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMDAudioStreamInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMuted) bool muted;
@property (getter=isRTCPEnabled) bool rtcpEnabled;
@property double rtcpSendIntervalSec;
@property (getter=isRTCPTimeOutEnabled) bool rtcpTimeOutEnabled;
@property double rtcpTimeOutIntervalSec;
@property (getter=isRTPTimeOutEnabled) bool rtpTimeOutEnabled;
@property double rtpTimeOutIntervalSec;
@property (copy) id /* block */ stopStreamCompletionHandler;
@property bool streamStarted;
@property (readonly) Class superclass;
@property (readonly, copy) NSNumber *syncSource;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callPaused:(id)arg1;
- (void)_callResumed:(id)arg1;
- (void)_callStarted:(id)arg1;
- (void)_callStopped:(id)arg1;
- (id)_createAudioStreamWithSessionHandler:(id)arg1 localNetworkConfig:(id)arg2 localRTPSocket:(int*)arg3;
- (int)_createLocalRTPSocketWithRemoteSender:(id)arg1 localNetworkConfig:(id)arg2;
- (id)_createLocalStreamAndRTPSocket:(int*)arg1 localNetworkConfig:(id)arg2;
- (id)_createStreamWithRemoteDestinationReceiver:(id)arg1;
- (id)_createStreamWithRemoteSocketReceiver:(id)arg1;
- (void)_pauseStream;
- (void)_resumeStream;
- (void)_startStreamWithConfig:(id)arg1;
- (void)_stopStreamWithCompletion:(id /* block */)arg1;
- (void)_updateAudioSetting:(unsigned long long)arg1;
- (id)audioStream;
- (unsigned long long)audioStreamSetting;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 sessionHandler:(id)arg5 audioStream:(id)arg6 localRTPSocket:(int)arg7 dataSource:(id)arg8;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 sessionHandler:(id)arg5 localNetworkConfig:(id)arg6;
- (bool)isMuted;
- (bool)isRTCPEnabled;
- (bool)isRTCPTimeOutEnabled;
- (bool)isRTPTimeOutEnabled;
- (id)logIdentifier;
- (double)rtcpSendIntervalSec;
- (double)rtcpTimeOutIntervalSec;
- (double)rtpTimeOutIntervalSec;
- (void)setAudioStreamSetting:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setRtcpEnabled:(bool)arg1;
- (void)setRtcpSendIntervalSec:(double)arg1;
- (void)setRtcpTimeOutEnabled:(bool)arg1;
- (void)setRtcpTimeOutIntervalSec:(double)arg1;
- (void)setRtpTimeOutEnabled:(bool)arg1;
- (void)setRtpTimeOutIntervalSec:(double)arg1;
- (void)setStopStreamCompletionHandler:(id /* block */)arg1;
- (void)setStreamStarted:(bool)arg1;
- (void)startStreamWithConfig:(id)arg1;
- (void)startSynchronizationWithVideoStreamToken:(long long)arg1;
- (void)stopStream;
- (id /* block */)stopStreamCompletionHandler;
- (void)stream:(id)arg1 didPause:(bool)arg2 error:(id)arg3;
- (void)stream:(id)arg1 didResume:(bool)arg2 error:(id)arg3;
- (void)stream:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)streamDidRTCPTimeOut:(id)arg1;
- (void)streamDidRTPTimeOut:(id)arg1;
- (void)streamDidServerDie:(id)arg1;
- (void)streamDidStop:(id)arg1;
- (bool)streamStarted;
- (id)syncSource;
- (void)updateAudioSetting:(unsigned long long)arg1;
- (void)updateAudioVolume:(id)arg1 callback:(id /* block */)arg2;

@end
