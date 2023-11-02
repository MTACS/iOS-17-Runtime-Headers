
@interface PBBProtoAppViewListImageResponse : PBCodable <NSCopying> {
    NSData * _imageData;
}

@property (nonatomic, readonly) bool hasImageData;
@property (nonatomic, retain) NSData *imageData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImageData;
- (unsigned long long)hash;
- (id)imageData;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
