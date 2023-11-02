
@interface CSSiriPreferences : NSObject {
    AFInstanceContext * _instanceContext;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedPreferences;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInstanceContext:(id)arg1;
- (unsigned long long)internalUserClassification;
- (id)overrideAudioSessionActiveDelay;
- (id)serverAudioSessionActivationDelay;
- (id)serverAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
- (id)serverMediaPlaybackVolumeThresholdForAudioSessionActivationDelay;

@end
