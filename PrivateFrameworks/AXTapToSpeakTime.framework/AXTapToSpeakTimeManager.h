
@interface AXTapToSpeakTimeManager : NSObject <AVSpeechSynthesizerDelegate> {
    AVSpeechSynthesizer * _avSpeechSynthesizer;
    bool  _cachedRingerIsMuted;
    NSDateFormatter * _dateFormatter;
    float  _lastMediaVolume;
    NSObject<OS_dispatch_queue> * _queue;
    int  _ringerStateNotifyToken;
    AXTapticTimeManager * _tapticTimeManager;
}

@property (nonatomic, readonly) AVSpeechSynthesizer *avSpeechSynthesizer;
@property (nonatomic, readonly) NSDateFormatter *dateFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float lastMediaVolume;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AXTapticTimeManager *tapticTimeManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_canOutputPremiumVoice;
- (bool)_canSpeakTimeForVoice:(unsigned long long)arg1 andGesture:(unsigned long long)arg2;
- (bool)_canTapticTime;
- (id)_currentLanguageCode;
- (void)_denormalizeVolumeIfNecessary;
- (id)_init;
- (void)_normalizeVolumeIfNecessary;
- (void)_outputTapticTime:(id)arg1;
- (void)_registerForNotifications;
- (void)_ringerStateChanged;
- (void)_setupAudioSessionForVoice:(unsigned long long)arg1;
- (void)_speakTime:(id)arg1 preferredVoice:(unsigned long long)arg2;
- (void)_speakTime:(id)arg1 withCharacterVoiceIdentifier:(id)arg2;
- (id)_ttsSiriVoiceAssetForAFVoice:(id)arg1 language:(id)arg2;
- (void)_unregisterForNotifications;
- (id)avSpeechSynthesizer;
- (bool)canOutputTime;
- (id)dateFormatter;
- (void)dealloc;
- (bool)isCurrentlyOutputting;
- (float)lastMediaVolume;
- (void)outputTime:(id)arg1;
- (void)outputTime:(id)arg1 preferredVoice:(unsigned long long)arg2;
- (void)outputTime:(id)arg1 preferredVoice:(unsigned long long)arg2 withGesture:(unsigned long long)arg3;
- (void)setLastMediaVolume:(float)arg1;
- (void)speechOutputDidComplete;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
- (void)stopOutput;
- (id)tapticTimeManager;

@end
