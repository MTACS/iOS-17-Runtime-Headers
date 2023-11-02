
@protocol CSEndpointAnalyzer <NSObject>

@required

- (double)automaticEndpointingSuspensionEndTime;
- (double)delay;
- (long long)endpointStyle;
- (void)getFirstAudioSampleSensorHostTimeWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, unsigned long long, void*
- (double)lastEndOfVoiceActivityTime;
- (double)lastStartOfVoiceActivityTime;
- (double)minimumDurationForEndpointer;
- (void)preheat;
- (void)reset;
- (void)setAutomaticEndpointingSuspensionEndTime:(double)arg1;
- (void)setDelay:(double)arg1;
- (void)setEndpointStyle:(long long)arg1;
- (void)setMinimumDurationForEndpointer:(double)arg1;
- (void)setStartWaitTime:(double)arg1;
- (double)startWaitTime;

@optional

- (double)bypassSamples;
- (double)endWaitTime;
- (long long)endpointMode;
- (double)interspeechWaitTime;
- (NSString *)mhId;
- (bool)saveSamplesSeenInReset;
- (void)setBypassSamples:(double)arg1;
- (void)setEndWaitTime:(double)arg1;
- (void)setEndpointMode:(long long)arg1;
- (void)setInterspeechWaitTime:(double)arg1;
- (void)setMhId:(NSString *)arg1;
- (void)setSaveSamplesSeenInReset:(bool)arg1;

@end
