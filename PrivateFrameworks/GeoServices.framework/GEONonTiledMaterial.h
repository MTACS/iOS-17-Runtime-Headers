
@interface GEONonTiledMaterial : PBCodable <NSCopying> {
    GEONonTiledInfo * _info;
}

@property (nonatomic, readonly) bool hasInfo;
@property (nonatomic, retain) GEONonTiledInfo *info;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInfo;
- (unsigned long long)hash;
- (id)info;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end
