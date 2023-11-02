
@interface GEOVLFTileDetails : PBCodable <NSCopying> {
    struct { 
        unsigned int has_tileSizeBytes : 1; 
    }  _flags;
    GEOVLFUsageTileID * _tileId;
    unsigned int  _tileSizeBytes;
}

@property (nonatomic, readonly) bool hasTileId;
@property (nonatomic) bool hasTileSizeBytes;
@property (nonatomic, retain) GEOVLFUsageTileID *tileId;
@property (nonatomic) unsigned int tileSizeBytes;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTileId;
- (bool)hasTileSizeBytes;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTileSizeBytes:(bool)arg1;
- (void)setTileId:(id)arg1;
- (void)setTileSizeBytes:(unsigned int)arg1;
- (id)tileId;
- (unsigned int)tileSizeBytes;
- (void)writeTo:(id)arg1;

@end
