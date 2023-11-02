
@interface CMContinuityCaptureRemoteAudioDevice : CMContinuityCaptureDeviceBase <AVCAudioStreamDelegate, AVCStreamInputDelegate, AVCaptureAudioDataOutputSampleBufferDelegate> {
    unsigned long long  _audioBufferDropCounter;
    unsigned long long  _audioBufferOutputCounter;
    unsigned int  _audioBytesPerSample;
    bool  _audioClockIsSynchronized;
    AVCaptureAudioDataOutput * _audioDataOutput;
    AVCaptureDevice * _audioDevice;
    AVCaptureDeviceInput * _audioDeviceInput;
    double  _audioSampleRate;
    AVCAudioStream * _avcAudioStream;
    AVCStreamInput * _avcStreamInput;
    bool  _avcStreamInputActive;
    NSUUID * _cameraCaptureStreamSessionID;
    CMContinuityCaptureAVCaptureAudioSession * _captureSession;
    bool  _captureStackActive;
    bool  _disableBufferBlockSizeCheck;
    unsigned long long  _lastAudioSynchronizationNetworkSampleTime;
    unsigned long long  _networkAudioSampleTime;
    NSData * _remainingAudioDataFromPreviousSbuf;
    unsigned int  _requiredAudioSampleCountPerBuffer;
    id /* block */  _stopCompletionBlock;
    <ContinuityCaptureTransportDevice> * _transportDevice;
}

@property (readonly, retain) CMContinuityCaptureAVCaptureAudioSession *captureSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer { }*)_createSampleBufferForAudioData:(id)arg1 dataRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 formatDescription:(struct opaqueCMFormatDescription { }*)arg4;
- (void)_dispatchAudioFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)_processIncomingAudioBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_resetNetworkSampleTime;
- (bool)_shouldPrintDroppedSampleBufferLog:(long long)arg1;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)captureSession;
- (id)createAVCAudioStream;
- (void)didStartStreamInput:(id)arg1;
- (void)didStopStreamInput:(id)arg1;
- (void)dispatchFrame:(struct opaqueCMSampleBuffer { }*)arg1 entity:(long long)arg2 completion:(id /* block */)arg3;
- (void)handleSynchronizeAudioClockCompletion;
- (id)initWithCapabilities:(id)arg1 compositeDelegate:(id)arg2 captureSession:(id)arg3;
- (id)newAudioStreamCurrentConfiguration:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)postAVCStreamInterruption;
- (void)postActionCompletionForEventName:(id)arg1 eventData:(id)arg2 error:(id)arg3;
- (void)postActionOfType:(unsigned long long)arg1 forEvent:(id)arg2 option:(unsigned long long)arg3;
- (bool)startAVConferenceStack:(unsigned long long)arg1;
- (bool)startCameraCaptureStack:(unsigned long long)arg1;
- (bool)stopAVConferenceStack;
- (bool)stopCameraCaptureStack:(unsigned long long)arg1;
- (void)stopCaptureStack:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)stream:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)streamDidRTCPTimeOut:(id)arg1;
- (void)streamDidRTPTimeOut:(id)arg1;
- (void)streamDidServerDie:(id)arg1;
- (void)streamDidStop:(id)arg1;

@end
