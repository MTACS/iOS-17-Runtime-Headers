
@interface GEOPDSearchBusinessIntent : PBCodable <NSCopying> {
    unsigned long long  _businessId;
    int  _businessType;
    GEOLatLng * _center;
    struct { 
        unsigned int has_businessId : 1; 
        unsigned int has_businessType : 1; 
        unsigned int read_keywordMuids : 1; 
        unsigned int read_center : 1; 
        unsigned int read_keywordMappings : 1; 
        unsigned int read_name : 1; 
        unsigned int read_tokenSet : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _keywordMappings;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _keywordMuids;
    NSString * _name;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDSearchTokenSet * _tokenSet;
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
