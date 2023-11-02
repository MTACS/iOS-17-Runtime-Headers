
@interface AVSampleBufferAudioRenderer : NSObject <AVContentKeyRecipient, AVContentKeyRecipientInternal, AVIntegrityChecking, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRendering, AVQueuedSampleBufferRenderingInternal> {
    AVSampleBufferAudioRendererInternal * _audioRendererInternal;
}

@property (nonatomic) unsigned long long allowedAudioSpatializationFormats;
@property (nonatomic, copy) NSString *audioOutputDeviceUniqueID;
@property (nonatomic, copy) NSString *audioTimePitchAlgorithm;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefunct, nonatomic, readonly) bool defunct;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool hasSufficientMediaDataForReliablePlaybackStart;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool mayRequireContentKeysForMediaDataProcessing;
@property (getter=isReadyForMoreMediaData, readonly) bool readyForMoreMediaData;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;
@property (readonly, retain) struct OpaqueCMTimebase { }*timebase;

+ (id)currentFigAudioRendererFactory;
+ (id)makeRendererLoggingIdentifier;
+ (id)sampleBufferAudioRenderer;
+ (void)setFigAudioRendererFactory:(id)arg1 forQueue:(id)arg2;

- (int)_attachToContentKeySession:(id)arg1 contentKeyBoss:(struct CMBaseObject { }*)arg2 failedSinceAlreadyAttachedToAnotherSession:(bool*)arg3;
- (bool)_attachedToExternalContentKeySession;
- (int)_initializeTimebase;
- (int)_installNotificationHandlers;
- (void)_transitionToFailedStatusWithOSStatus:(int)arg1;
- (void)_transitionToStatus:(long long)arg1 error:(id)arg2;
- (void)_triggerMediaRequestCallback;
- (void)_uninstallNotificationHandlers;
- (void)_wasFlushedAutomaticallyAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (unsigned long long)allowedAudioSpatializationFormats;
- (id)audioOutputDeviceUniqueID;
- (id)audioSession;
- (struct opaqueMTAudioProcessingTap { }*)audioTapProcessor;
- (id)audioTimePitchAlgorithm;
- (id)contentKeySession;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer {}**)arg1;
- (void)dealloc;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)error;
- (void)expire;
- (void)flush;
- (void)flushFromSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (bool)hasSufficientMediaDataForReliablePlaybackStart;
- (id)init;
- (bool)isDefunct;
- (bool)isMuted;
- (bool)isReadyForMoreMediaData;
- (id)loggingIdentifier;
- (bool)mayRequireContentKeysForMediaDataProcessing;
- (id)outputContext;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)setAllowedAudioSpatializationFormats:(unsigned long long)arg1;
- (void)setAudioOutputDeviceUniqueID:(id)arg1;
- (void)setAudioSession:(id)arg1;
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { }*)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (void)setLoggingIdentifier:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setOutputContext:(id)arg1;
- (bool)setRenderSynchronizer:(id)arg1 error:(id*)arg2;
- (void)setSTSLabel:(id)arg1;
- (void)setVolume:(float)arg1;
- (long long)status;
- (void)stopRequestingMediaData;
- (struct OpaqueCMTimebase { }*)timebase;
- (float)volume;
- (bool)willTrimShortDurationSamples;

@end
