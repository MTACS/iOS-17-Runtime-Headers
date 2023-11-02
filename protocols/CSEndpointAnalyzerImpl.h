
@protocol CSEndpointAnalyzerImpl <CSEndpointAnalyzer>

@required

- (unsigned long long)activeChannel;
- (bool)canProcessCurrentRequest;
- (<CSEndpointAnalyzerDelegate> *)delegate;
- (<CSEndpointAnalyzerImplDelegate> *)implDelegate;
- (void)processAudioSamplesAsynchronously:(CSAudioChunk *)arg1;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(CSAudioRecordContext *)arg2;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setDelegate:(id <CSEndpointAnalyzerDelegate>)arg1;
- (void)setImplDelegate:(id <CSEndpointAnalyzerImplDelegate>)arg1;
- (void)stopEndpointer;

@optional

- (NSString *)endpointerModelVersion;
- (long long)fetchCurrentEndpointerOperationMode;
- (void)handleVoiceTriggerWithActivationInfo:(NSDictionary *)arg1;
- (void)logAnchorMachAbsTime:(unsigned long long)arg1 numSamplesProcessedBeforeAnchorTime:(unsigned long long)arg2 isAnchorTimeBuffered:(bool)arg3;
- (void)logFeaturesWithEvent:(NSString *)arg1 locale:(NSString *)arg2;
- (double)postVoiceTriggerSilence;
- (void)processASRFeatures:(CSServerEndpointFeatures *)arg1 fromServer:(bool)arg2;
- (void)processFirstAudioPacketTimestamp:(NSDate *)arg1 firstAudioSampleSensorTimestamp:(unsigned long long)arg2;
- (void)processOSDFeatures:(OSDFeatures *)arg1 withFrameDurationMs:(double)arg2;
- (void)processRCFeatures:(CSServerEndpointFeatures *)arg1;
- (void)processServerEndpointFeatures:(CSServerEndpointFeatures *)arg1;
- (void)processTaskString:(NSString *)arg1;
- (void)setEndpointerOperationMode:(long long)arg1;
- (void)shouldAcceptEagerResultForDuration:(void *)arg1 resultsCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSArray *, void*
- (void)shouldAcceptEagerResultForDuration:(void *)arg1 withEndpointerMetrics:(void *)arg2 resultsCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: double, CSEndpointerMetrics *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSArray *, void*
- (bool)shouldAcceptEagerResultForDurationSync:(double)arg1 withEndpointerMetrics:(CSEndpointerMetrics *)arg2;
- (void)updateEndpointerDelayedTrigger:(bool)arg1;
- (void)updateEndpointerThreshold:(float)arg1;

@end
