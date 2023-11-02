
@interface GEOPDSearchQueryClassificationMetadata : PBCodable <NSCopying> {
    NSString * _classiferId;
    struct { 
        unsigned int has_localGlobalThreshold : 1; 
        unsigned int has_poiGeoThreshold : 1; 
        unsigned int read_classiferId : 1; 
        unsigned int read_modelVersions : 1; 
        unsigned int read_predictions : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    float  _localGlobalThreshold;
    NSMutableArray * _modelVersions;
    float  _poiGeoThreshold;
    NSMutableArray * _predictions;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
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
