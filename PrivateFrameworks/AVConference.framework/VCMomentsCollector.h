
@interface VCMomentsCollector : NSObject <VCMomentsCollectorDelegate> {
    VCMediaRecorder * _mediaRecorder;
    long long  _streamToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cleanupActiveRequests;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1;
- (void)stream:(id)arg1 addAudioSampleBuffer:(struct opaqueVCAudioBufferList { }*)arg2 timestamp:(unsigned int)arg3;
- (void)stream:(id)arg1 addVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned int)arg4;

@end
