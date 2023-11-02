
@interface FTMutableAudioPacket : FTAudioPacket

@property (nonatomic, copy) NSData *audio_bytes;

- (id)audio_bytes;
- (void)audio_bytes:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setAudio_bytes:(id)arg1;

@end
