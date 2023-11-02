
@interface SOSEmergencyCallVoiceLoopManager : NSObject <AVSpeechSynthesizerDelegate, CLLocationManagerDelegate> {
    CLLocationManager * _locationManager;
    _MKLocationShifter * _locationShifter;
    CLLocation * _locationToSynthesize;
    NSTimer * _messageRepeatTimer;
    unsigned long long  _numberOfLoopsPlayed;
    long long  _playbackMode;
    float  _playbackVolume;
    long long  _reason;
    NSString * _voiceLanguage;
    AVSpeechSynthesizer * _voiceLoopSpeechSynthesizer;
    NSArray * _voiceLoopUtterances;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) _MKLocationShifter *locationShifter;
@property (nonatomic, retain) CLLocation *locationToSynthesize;
@property (nonatomic, retain) NSTimer *messageRepeatTimer;
@property (nonatomic) unsigned long long numberOfLoopsPlayed;
@property (nonatomic) long long playbackMode;
@property (nonatomic) float playbackVolume;
@property (nonatomic) long long reason;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *voiceLanguage;
@property (nonatomic, retain) AVSpeechSynthesizer *voiceLoopSpeechSynthesizer;
@property (nonatomic, retain) NSArray *voiceLoopUtterances;

+ (id)_newUtteranceWithText:(id)arg1 voice:(id)arg2 volume:(float)arg3;

- (void).cxx_destruct;
- (id)_baseVoiceOverAttributes;
- (id)_coordinatesStringFromLocation:(id)arg1;
- (id)_introMessageString;
- (id)_languageToUseInVoiceLoopForCountryCode:(id)arg1;
- (id)_localizedAttributedStringForKey:(id)arg1 forLocalization:(id)arg2;
- (id)_localizedStringForKey:(id)arg1 forLocalization:(id)arg2;
- (id)_localizedStringForKey:(id)arg1 forLocalization:(id)arg2 tableName:(id)arg3;
- (void)_playMessage;
- (void)_playMessageWithLocation;
- (void)_playMessageWithoutLocation;
- (id)_preferredVoiceLanguageForCountryCode:(id)arg1;
- (void)_updateLocation:(id)arg1;
- (void)dealloc;
- (id)initWithReason:(long long)arg1 playbackMode:(long long)arg2;
- (id)locationManager;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationShifter;
- (id)locationToSynthesize;
- (id)messageRepeatTimer;
- (unsigned long long)numberOfLoopsPlayed;
- (long long)playbackMode;
- (float)playbackVolume;
- (long long)reason;
- (void)setLocationManager:(id)arg1;
- (void)setLocationShifter:(id)arg1;
- (void)setLocationToSynthesize:(id)arg1;
- (void)setMessageRepeatTimer:(id)arg1;
- (void)setNumberOfLoopsPlayed:(unsigned long long)arg1;
- (void)setPlaybackMode:(long long)arg1;
- (void)setPlaybackVolume:(float)arg1;
- (void)setReason:(long long)arg1;
- (void)setVoiceLanguage:(id)arg1;
- (void)setVoiceLoopSpeechSynthesizer:(id)arg1;
- (void)setVoiceLoopUtterances:(id)arg1;
- (void)shiftedLocationIfApplicable:(id)arg1 withcompletion:(id /* block */)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)startMessagePlayback;
- (void)stopMessagePlayback;
- (id)voiceLanguage;
- (id)voiceLoopSpeechSynthesizer;
- (id)voiceLoopUtterances;

@end
