
@interface PBBProtoSiriEnabled : PBCodable <NSCopying> {
    bool  _enabled;
}

@property (nonatomic) bool enabled;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enabled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
