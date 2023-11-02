
@interface GEOPDGroundDataBuild : PBCodable <NSCopying> {
    unsigned int  _bucketId;
    unsigned int  _buildId;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _capabilitys;
    unsigned int  _dataFormatVersion;
    unsigned int  _dataOutputVersion;
    struct { 
        unsigned int has_bucketId : 1; 
        unsigned int has_buildId : 1; 
        unsigned int has_dataFormatVersion : 1; 
        unsigned int has_dataOutputVersion : 1; 
        unsigned int has_heightAboveGroundM : 1; 
        unsigned int has_index : 1; 
        unsigned int has_metricsVersion : 1; 
        unsigned int has_type : 1; 
        unsigned int read_capabilitys : 1; 
        unsigned int read_lodWithTextures : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    float  _heightAboveGroundM;
    unsigned int  _index;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _lodWithTextures;
    unsigned int  _metricsVersion;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
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
