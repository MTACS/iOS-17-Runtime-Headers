
@interface FTMutableSpeechTranslationAudioPacket : FTSpeechTranslationAudioPacket

@property (nonatomic, copy) NSArray *audio_frames;

- (id)audio_frames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setAudio_frames:(id)arg1;

@end
