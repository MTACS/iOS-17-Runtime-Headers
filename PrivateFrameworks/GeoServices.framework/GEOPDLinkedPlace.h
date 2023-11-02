
@interface GEOPDLinkedPlace : PBCodable <NSCopying> {
    GEOLatLng * _center;
    unsigned long long  _featureId;
    struct { 
        unsigned int has_featureId : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_center : 1; 
        unsigned int read_mapsId : 1; 
        unsigned int read_name : 1; 
        unsigned int read_styleAttributes : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDMapsIdentifier * _mapsId;
    NSString * _name;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOStyleAttributes * _styleAttributes;
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
