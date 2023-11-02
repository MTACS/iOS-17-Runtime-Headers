
@interface _MRAudioFadeResponseMessageProtobuf : PBCodable <NSCopying> {
    long long  _fadeDuration;
    struct { 
        unsigned int fadeDuration : 1; 
    }  _has;
}

@property (nonatomic) long long fadeDuration;
@property (nonatomic) bool hasFadeDuration;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)fadeDuration;
- (bool)hasFadeDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFadeDuration:(long long)arg1;
- (void)setHasFadeDuration:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
