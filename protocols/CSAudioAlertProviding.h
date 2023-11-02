
@protocol CSAudioAlertProviding <NSObject>

@required

- (unsigned long long)alertStartTime;
- (void)configureAlertBehavior:(NSDictionary *)arg1;
- (bool)playAlertSoundForType:(long long)arg1;
- (bool)playRecordStartingAlertAndResetEndpointerWithAlertOverride:(long long)arg1;
- (bool)setAlertSoundFromURL:(NSURL *)arg1 forType:(long long)arg2 force:(bool)arg3;
- (void)setAudioAlertDelegate:(id <CSAudioAlertProvidingDelegate>)arg1;

@end
