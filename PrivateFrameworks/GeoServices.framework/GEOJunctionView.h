
@interface GEOJunctionView : PBCodable <NSCopying> {
    NSMutableArray * _imageIds;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *imageIds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)imageIdType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addImageId:(id)arg1;
- (void)clearImageIds;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)imageIdAtIndex:(unsigned long long)arg1;
- (id)imageIds;
- (unsigned long long)imageIdsCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setImageIds:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
