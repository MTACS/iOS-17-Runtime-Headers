
@interface GEOPDGroundMetadataTile : PBCodable <NSCopying> {
    NSMutableArray * _buildTables;
    NSMutableArray * _cameraMetadataTables;
    GEOTileCoordinate * _coord;
    struct { 
        unsigned int has_tileBuildId : 1; 
        unsigned int read_buildTables : 1; 
        unsigned int read_cameraMetadataTables : 1; 
        unsigned int read_coord : 1; 
        unsigned int read_photoPositions : 1; 
        unsigned int read_storefronts : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _photoPositions;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _storefronts;
    unsigned int  _tileBuildId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
