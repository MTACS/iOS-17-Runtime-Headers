
@interface VCMediaNegotiationBlobV2CodecFeatures : PBCodable <NSCopying> {
    unsigned int  _audioFeatures;
    struct { 
        unsigned int audioFeatures : 1; 
    }  _has;
    NSData * _videoFeatures;
}

@property (nonatomic, readonly) bool allowAudioRecording;
@property (nonatomic) unsigned int audioFeatures;
@property (nonatomic) bool hasAudioFeatures;
@property (nonatomic, readonly) bool hasVideoFeatures;
@property (nonatomic, retain) NSData *videoFeatures;

- (bool)allowAudioRecording;
- (unsigned int)audioFeatures;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAudioFeatures;
- (bool)hasVideoFeatures;
- (unsigned long long)hash;
- (id)initWithAllowAudioRecording:(bool)arg1 videoFeatures:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)printWithLogFile:(void*)arg1 prefix:(id)arg2;
- (bool)readFrom:(id)arg1;
- (void)setAudioFeatures:(unsigned int)arg1;
- (void)setHasAudioFeatures:(bool)arg1;
- (void)setVideoFeatures:(id)arg1;
- (id)videoFeatures;
- (void)writeTo:(id)arg1;

@end
