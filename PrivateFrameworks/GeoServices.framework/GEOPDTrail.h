
@interface GEOPDTrail : PBCodable <NSCopying> {
    GEOPDBusinessHours * _businessHours;
    GEOPDEntity * _entity;
    GEOPDTrailHeadTrailFactoidData * _factoid;
    struct { 
        unsigned int has_shouldHighlight : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_businessHours : 1; 
        unsigned int read_entity : 1; 
        unsigned int read_factoid : 1; 
        unsigned int read_hoursOfOperations : 1; 
        unsigned int read_mapsIds : 1; 
        unsigned int read_photo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _hoursOfOperations;
    NSMutableArray * _mapsIds;
    GEOPDPhoto * _photo;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    bool  _shouldHighlight;
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
