
@protocol LPAudioPlayerClient

@required

- (void)audioPlayer:(id <LPAudioPlayer>)arg1 didChangeProgress:(float)arg2;
- (void)audioPlayer:(id <LPAudioPlayer>)arg1 didTransitionToState:(unsigned long long)arg2;
- (void)audioPlayerDidFailToPlay:(id <LPAudioPlayer>)arg1;

@end
