
@interface GEOPDAddress : PBCodable <NSCopying> {
    struct { 
        unsigned int has_knownAccuracy : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_localizedAddress : 1; 
        unsigned int read_spokenNavigationAddress : 1; 
        unsigned int read_spokenStructuredAddress : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _knownAccuracy;
    NSMutableArray * _localizedAddress;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _spokenNavigationAddress;
    NSMutableArray * _spokenStructuredAddress;
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
