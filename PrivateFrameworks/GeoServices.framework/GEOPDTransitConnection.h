
@interface GEOPDTransitConnection : PBCodable <NSCopying> {
    NSString * _entityNameString;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_entityNameString : 1; 
        unsigned int read_mapsId : 1; 
        unsigned int read_transitLabels : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDMapsIdentifier * _mapsId;
    unsigned long long  _muid;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _transitLabels;
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
