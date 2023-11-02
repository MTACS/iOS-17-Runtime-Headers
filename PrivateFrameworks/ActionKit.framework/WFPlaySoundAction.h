
@interface WFPlaySoundAction : WFAction <AVAudioPlayerDelegate> {
    AVAudioPlayer * _audioPlayer;
    NSTimer * _progressTimer;
}

@property (nonatomic, retain) AVAudioPlayer *audioPlayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSTimer *progressTimer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)audioPlayer;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (void)cancel;
- (void)cleanup;
- (id)contentDestinationWithError:(id*)arg1;
- (bool)isProgressIndeterminate;
- (id)progressTimer;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithAudioFileURL:(id)arg1 fileTypeHint:(id)arg2 duckOthers:(bool)arg3;
- (void)runWithDefaultSound;
- (void)setAudioPlayer:(id)arg1;
- (void)setProgressTimer:(id)arg1;
- (void)updateProgress;

@end
