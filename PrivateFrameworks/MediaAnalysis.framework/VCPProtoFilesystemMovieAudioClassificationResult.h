
@interface VCPProtoFilesystemMovieAudioClassificationResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    float  _duration;
    float  _start;
}

@property (nonatomic) float duration;
@property (nonatomic) float start;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)duration;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(float)arg1;
- (void)setStart:(float)arg1;
- (float)start;
- (void)writeTo:(id)arg1;

@end
