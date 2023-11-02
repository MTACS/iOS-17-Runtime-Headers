
@interface ICMutablePlayActivityAudioQualityProperties : ICPlayActivityAudioQualityProperties

@property (nonatomic) long long bitDepth;
@property (nonatomic) long long bitRate;
@property (nonatomic) NSString *channelLayoutDescription;
@property (nonatomic) unsigned int codec;
@property (nonatomic) long long sampleRate;
@property (getter=isSpatialized, nonatomic) bool spatialized;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setBitDepth:(long long)arg1;
- (void)setBitRate:(long long)arg1;
- (void)setChannelLayoutDescription:(id)arg1;
- (void)setCodec:(unsigned int)arg1;
- (void)setSampleRate:(long long)arg1;
- (void)setSpatialized:(bool)arg1;

@end
