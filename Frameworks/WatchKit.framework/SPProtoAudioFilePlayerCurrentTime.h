
@interface SPProtoAudioFilePlayerCurrentTime : PBCodable <NSCopying> {
    double  _currentTime;
}

@property (nonatomic) double currentTime;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentTime;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)writeTo:(id)arg1;

@end
