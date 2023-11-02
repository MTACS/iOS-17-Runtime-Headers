
@protocol AVCSessionParticipantControlProtocol <NSObject>

@required

- (NSData *)frequencyLevels;
- (bool)isAudioEnabled;
- (bool)isAudioMuted;
- (bool)isAudioPaused;
- (bool)isOneToOneEnabled;
- (bool)isScreenEnabled;
- (bool)isVideoEnabled;
- (bool)isVideoPaused;
- (unsigned int)mediaStateForMediaType:(unsigned int)arg1;
- (NSData *)negotiationData;
- (void)setAudioEnabled:(bool)arg1;
- (void)setAudioMuted:(bool)arg1;
- (void)setAudioPaused:(bool)arg1;
- (void)setMediaState:(unsigned int)arg1 forMediaType:(unsigned int)arg2;
- (void)setOneToOneEnabled:(bool)arg1;
- (void)setScreenEnabled:(bool)arg1;
- (void)setVideoEnabled:(bool)arg1;
- (void)setVideoPaused:(bool)arg1;
- (void)setVolume:(float)arg1;
- (NSString *)uuid;
- (float)volume;

@end
