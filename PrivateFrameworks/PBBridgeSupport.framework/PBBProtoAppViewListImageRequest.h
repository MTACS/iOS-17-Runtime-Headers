
@interface PBBProtoAppViewListImageRequest : PBRequest <NSCopying> {
    float  _height;
    float  _scale;
    float  _width;
}

@property (nonatomic) float height;
@property (nonatomic) float scale;
@property (nonatomic) float width;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (float)height;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (float)scale;
- (void)setHeight:(float)arg1;
- (void)setScale:(float)arg1;
- (void)setWidth:(float)arg1;
- (float)width;
- (void)writeTo:(id)arg1;

@end
