
@interface SSCoreHapticsPlayer : NSObject {
    double  _audioPatternDuration;
    bool  _audioPlaybackFinished;
    <CHHapticAdvancedPatternPlayerExtended> * _audioPlayer;
    unsigned long long  _audioResourceID;
    NSURL * _audioURL;
    unsigned int  _clientCompletionToken;
    CHHapticEngine * _engine;
    NSDictionary * _hapticPatternDict;
    double  _hapticPatternDuration;
    bool  _hapticPlaybackFinished;
    <CHHapticAdvancedPatternPlayerExtended> * _hapticPlayer;
    bool  _shouldPlayAudioFinal;
    bool  _shouldPlayHapticsFinal;
    unsigned long long  _ssid;
}

@property (readonly) CHHapticEngine *engine;
@property (readonly) unsigned long long ssid;

- (void).cxx_destruct;
- (bool)createAudioPlayerAndReturnError:(id*)arg1;
- (unsigned long long)createAudioResource:(id)arg1 error:(id*)arg2;
- (void)createHapticPlayer:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (bool)doInit:(id)arg1 haptic:(id)arg2 error:(id*)arg3;
- (id)engine;
- (id)getHapticDictionaryFromURL:(id)arg1;
- (void)handleFinish;
- (id)init;
- (id)initWithAudio:(id)arg1 haptic:(id)arg2 error:(id*)arg3;
- (id)initWithAudio:(id)arg1 hapticDictionary:(id)arg2 error:(id*)arg3;
- (bool)playWithOptions:(id)arg1 completionCallbackToken:(unsigned int)arg2 error:(id*)arg3;
- (bool)prepareHapticPatternFromPlayOptions:(id)arg1;
- (void)prewarm:(bool)arg1;
- (void)registerCompletionAndStop;
- (void)registerCompletionPortion:(bool)arg1;
- (id)setupDefaultEngineConfigBlock;
- (void)setupLooping;
- (unsigned long long)ssid;
- (bool)startPlayerAtTime:(double)arg1 forAudio:(bool)arg2 error:(id*)arg3;
- (void)stop:(bool)arg1;

@end
