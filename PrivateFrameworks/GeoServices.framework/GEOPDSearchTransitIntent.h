
@interface GEOPDSearchTransitIntent : PBCodable <NSCopying> {
    struct { 
        unsigned int has_transitId : 1; 
        unsigned int has_transitType : 1; 
        unsigned int read_name : 1; 
        unsigned int read_tokenSet : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _name;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDSearchTokenSet * _tokenSet;
    unsigned long long  _transitId;
    int  _transitType;
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
