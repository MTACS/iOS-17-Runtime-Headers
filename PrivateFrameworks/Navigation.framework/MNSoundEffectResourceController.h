
@interface MNSoundEffectResourceController : NSObject <AVAudioPlayerDelegate> {
    AVAudioPlayer * _approach;
    <MNSoundEffectControllerDelegate> * _delegate;
    unsigned long long  _indicatorID;
    AVAudioPlayer * _leftTurn;
    AVAudioPlayer * _rightTurn;
}

@property (nonatomic, retain) AVAudioPlayer *approach;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNSoundEffectControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVAudioPlayer *leftTurn;
@property (nonatomic, readonly) bool playing;
@property (nonatomic, retain) AVAudioPlayer *rightTurn;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_audioSessionInterruption:(id)arg1;
- (void)_mediaSessionServicesWereLost:(id)arg1;
- (void)_mediaSessionServicesWereReset:(id)arg1;
- (id)_playerForFileName:(id)arg1 andExtension:(id)arg2;
- (void)_registerForObservation;
- (id)approach;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (id)delegate;
- (id)init;
- (id)leftTurn;
- (bool)playSound:(unsigned long long)arg1 andReport:(out id*)arg2;
- (bool)playing;
- (id)rightTurn;
- (void)setApproach:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeftTurn:(id)arg1;
- (void)setRightTurn:(id)arg1;
- (void)stop;

@end
