
@interface BCAnnotationRange : PBCodable <NSCopying> {
    unsigned long long  _length;
    unsigned long long  _location;
}

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long location;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (unsigned long long)location;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setLocation:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
