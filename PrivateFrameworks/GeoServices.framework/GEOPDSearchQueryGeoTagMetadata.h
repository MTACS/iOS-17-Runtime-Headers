
@interface GEOPDSearchQueryGeoTagMetadata : PBCodable <NSCopying> {
    struct { 
        unsigned int read_geoRewriteTypes : 1; 
        unsigned int read_tagSources : 1; 
        unsigned int read_geoParsingResult : 1; 
        unsigned int read_geoTypeMaps : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDSearchGeoParsingResult * _geoParsingResult;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _geoRewriteTypes;
    NSMutableArray * _geoTypeMaps;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _tagSources;
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
