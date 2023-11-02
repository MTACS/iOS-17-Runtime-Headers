
@interface LPAudioPlayerMediaPlayableAdaptor : NSObject <LPMediaPlayable> {
    <LPAudioPlayer> * _player;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMuteControl;
@property (readonly) unsigned long long hash;
@property (getter=isPlaying, nonatomic) bool playing;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)hasMuteControl;
- (id)initWithPlayer:(id)arg1;
- (bool)isPlaying;
- (void)resetPlaybackState;
- (void)setPlaying:(bool)arg1;

@end
