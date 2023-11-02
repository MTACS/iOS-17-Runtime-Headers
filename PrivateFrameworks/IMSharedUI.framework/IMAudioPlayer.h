
@interface IMAudioPlayer : NSObject <IMInternalAVAudioPlayerDelegate> {
    IMInternalAVAudioPlayer * _audioPlayer;
    NSURL * _audioURL;
    id /* block */  _block;
    <IMAudioPlayerDelegate> * _delegate;
    IMDisplayLink * _displayLink;
    double  _prevCurrentTime;
}

@property (nonatomic, retain) IMInternalAVAudioPlayer *audioPlayer;
@property (nonatomic, copy) NSURL *audioURL;
@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IMAudioPlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) IMDisplayLink *displayLink;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic) double prevCurrentTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesAVPlayer;
@property (nonatomic) float volume;

+ (id)audioPlayerWithContentsOfURL:(id)arg1;
+ (id)audioPlayerWithContentsOfURL:(id)arg1 shouldUseAVPlayer:(bool)arg2;

- (void).cxx_destruct;
- (id)audioPlayer;
- (id)audioURL;
- (id /* block */)block;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (id)displayLink;
- (double)duration;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 shouldUseAVPlayer:(bool)arg2;
- (void)internalAVAudioPlayerDidPrepareAudioForPlaying:(id)arg1 successfully:(bool)arg2;
- (void)internalAudioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (bool)isPlaying;
- (void)pause;
- (void)playAfterDelay:(double)arg1 completion:(id /* block */)arg2;
- (void)prepareToPlay;
- (double)prevCurrentTime;
- (void)setAudioPlayer:(id)arg1;
- (void)setAudioURL:(id)arg1;
- (void)setBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setPrevCurrentTime:(double)arg1;
- (void)setVolume:(float)arg1;
- (void)startTimer;
- (void)stop;
- (void)stopTimer;
- (void)timerDidExpire:(id)arg1;
- (bool)usesAVPlayer;
- (float)volume;

@end
