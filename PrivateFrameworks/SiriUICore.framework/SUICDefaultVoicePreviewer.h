
@interface SUICDefaultVoicePreviewer : NSObject <AFAudioPowerUpdaterDelegate, SUICVoicePreviewing> {
    <SUICVoicePreviewingDelegate> * _delegate;
    AFAudioPowerUpdater * _outputAudioPowerUpdater;
    NSMutableSet * previewSessions;
}

@property (readonly, copy) NSString *debugDescription;
@property <SUICVoicePreviewingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginAudioPowerUpdatesIfNecessary;
- (void)_endAudioPowerUpdates;
- (void)audioPowerUpdaterDidUpdate:(id)arg1 averagePower:(float)arg2 peakPower:(float)arg3;
- (void)dealloc;
- (id)delegate;
- (void)previewVoice:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)stopVoicePreview;

@end
