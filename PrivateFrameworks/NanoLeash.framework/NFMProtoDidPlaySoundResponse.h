
@interface NFMProtoDidPlaySoundResponse : PBCodable <NSCopying> {
    bool  _didPlay;
}

@property (nonatomic) bool didPlay;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didPlay;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDidPlay:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
