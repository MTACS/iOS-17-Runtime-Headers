
@interface VCAudioStreamSendGroupConfig : VCMediaStreamSendGroupConfig <VCAudioStreamGroupConfig> {
    VCAudioStreamGroupCommonConfig * _audioStreamGroupConfig;
    bool  _shouldScheduleMediaQueue;
    VCSystemAudioCaptureSession * _systemAudioCaptureSession;
}

@property (retain) VCAudioStreamGroupCommonConfig *audioStreamGroupConfig;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldScheduleMediaQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) VCSystemAudioCaptureSession *systemAudioCaptureSession;

- (id)audioStreamGroupConfig;
- (void)dealloc;
- (id)init;
- (void)setAudioStreamGroupConfig:(id)arg1;
- (void)setShouldScheduleMediaQueue:(bool)arg1;
- (void)setSystemAudioCaptureSession:(id)arg1;
- (bool)shouldScheduleMediaQueue;
- (id)systemAudioCaptureSession;

@end
