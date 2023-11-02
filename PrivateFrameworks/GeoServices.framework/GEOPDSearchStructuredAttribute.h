
@interface GEOPDSearchStructuredAttribute : PBCodable <NSCopying> {
    GEOPDSearchAttribute * _attribute;
    struct { 
        unsigned int has_operator : 1; 
        unsigned int read_attribute : 1; 
        unsigned int read_nestedAttributes : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _nestedAttributes;
    int  _operator;
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
