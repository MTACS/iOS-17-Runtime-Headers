
@interface GEOTraitsPhotoSize : PBCodable <NSCopying> {
    struct { 
        unsigned int has_height : 1; 
        unsigned int has_width : 1; 
    }  _flags;
    unsigned int  _height;
    PBUnknownFields * _unknownFields;
    unsigned int  _width;
}

@property (nonatomic) bool hasHeight;
@property (nonatomic) bool hasWidth;
@property (nonatomic) unsigned int height;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int width;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHeight;
- (bool)hasWidth;
- (unsigned long long)hash;
- (unsigned int)height;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHeight:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (id)unknownFields;
- (unsigned int)width;
- (void)writeTo:(id)arg1;

@end
