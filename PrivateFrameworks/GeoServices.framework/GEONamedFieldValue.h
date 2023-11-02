
@interface GEONamedFieldValue : PBCodable <NSCopying> {
    bool  _boolValue;
    double  _doubleValue;
    struct { 
        unsigned int has_doubleValue : 1; 
        unsigned int has_intValue : 1; 
        unsigned int has_boolValue : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_mapValue : 1; 
        unsigned int read_stringValue : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    long long  _intValue;
    GEONamedField * _mapValue;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _stringValue;
    PBUnknownFields * _unknownFields;
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
