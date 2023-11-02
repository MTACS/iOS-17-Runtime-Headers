
@interface NPKProtoStandaloneImageSize : PBCodable <NSCopying> {
    int  _height;
    int  _width;
}

@property (nonatomic) int height;
@property (nonatomic) int width;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (int)height;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHeight:(int)arg1;
- (void)setWidth:(int)arg1;
- (int)width;
- (void)writeTo:(id)arg1;

@end
