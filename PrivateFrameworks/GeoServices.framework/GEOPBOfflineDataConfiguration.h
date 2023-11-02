
@interface GEOPBOfflineDataConfiguration : PBCodable <NSCopying> {
    unsigned long long  _activeReleaseDataVersion;
    struct GEOPBOfflineDataLayerVersion { int x1; unsigned long long x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _activeVersions;
    unsigned long long  _activeVersionsCount;
    unsigned long long  _activeVersionsSpace;
    struct { 
        unsigned int has_activeReleaseDataVersion : 1; 
        unsigned int has_lastUpdateTimestamp : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_activeVersions : 1; 
        unsigned int read_latestAvailableVersions : 1; 
        unsigned int read_tileMetadata : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned long long  _lastUpdateTimestamp;
    struct GEOPBOfflineDataLayerVersion { int x1; unsigned long long x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _latestAvailableVersions;
    unsigned long long  _latestAvailableVersionsCount;
    unsigned long long  _latestAvailableVersionsSpace;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPBOfflineTileMetadata * _tileMetadata;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
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
