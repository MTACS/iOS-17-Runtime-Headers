
@interface IMAudioController : NSObject <IMAudioPlayerDelegate> {
    IMAudioPlayer * _audioPlayer;
    NSMutableArray * _audioURLs;
    unsigned long long  _currentIndex;
    NSURL * _currentURL;
    <IMAudioControllerDelegate> * _delegate;
    bool  _interrupted;
    IMAudioPlayer * _listenAudioPlayer;
    bool  _paused;
    bool  _playing;
    bool  _shouldDuckOthers;
    bool  _shouldStopPlayingWhenSilent;
    bool  _shouldUseAVPlayer;
    bool  _shouldUseSpeaker;
}

@property (nonatomic, retain) IMAudioPlayer *audioPlayer;
@property (nonatomic, readonly, copy) NSArray *audioURLs;
@property (nonatomic, readonly) double currentMediaObjectDuration;
@property (nonatomic, readonly) double currentMediaObjectTime;
@property (nonatomic, readonly) NSURL *currentURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IMAudioControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interrupted;
@property (nonatomic, retain) IMAudioPlayer *listenAudioPlayer;
@property (getter=isPaused, nonatomic) bool paused;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic) bool shouldDuckOthers;
@property (nonatomic) bool shouldStopPlayingWhenSilent;
@property (nonatomic) bool shouldUseAVPlayer;
@property (nonatomic) bool shouldUseSpeaker;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

+ (Class)audioControllerClass;
+ (id)audioControllerWithContentsOfURLs:(id)arg1;

- (void).cxx_destruct;
- (void)_notifyPlayerDidPrepareAudioURL:(id)arg1 successfully:(bool)arg2;
- (void)_playSoundWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)addContentsOfURL:(id)arg1;
- (void)addContentsOfURLs:(id)arg1;
- (id)audioPlayer;
- (void)audioPlayerCurrentTimeDidChange:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
- (void)audioPlayerDidPrepareAudioToPlay:(id)arg1 successfully:(bool)arg2;
- (unsigned long long)audioSessionControllerOptions;
- (id)audioURLs;
- (id)currentMediaObject;
- (double)currentMediaObjectDuration;
- (double)currentMediaObjectTime;
- (id)currentURL;
- (void)dealloc;
- (id)delegate;
- (id)initWithContentsOfURLs:(id)arg1;
- (bool)interrupted;
- (bool)isPaused;
- (bool)isPlaying;
- (id)listenAudioPlayer;
- (void)pause;
- (void)play;
- (void)playAfterDelay:(double)arg1;
- (void)playListenEndSound:(id /* block */)arg1;
- (void)playListenSound:(id /* block */)arg1;
- (void)prepareToPlay;
- (void)setAudioPlayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterrupted:(bool)arg1;
- (void)setListenAudioPlayer:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setShouldDuckOthers:(bool)arg1;
- (void)setShouldStopPlayingWhenSilent:(bool)arg1;
- (void)setShouldUseAVPlayer:(bool)arg1;
- (void)setShouldUseSpeaker:(bool)arg1;
- (void)setVolume:(float)arg1;
- (bool)shouldDuckOthers;
- (bool)shouldStopPlayingWhenSilent;
- (bool)shouldUseAVPlayer;
- (bool)shouldUseSpeaker;
- (void)stop;
- (float)volume;

@end
