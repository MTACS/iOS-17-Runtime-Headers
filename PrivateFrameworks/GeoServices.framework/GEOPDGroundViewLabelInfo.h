
@interface GEOPDGroundViewLabelInfo : PBCodable <NSCopying> {
    double  _endHeading;
    struct { 
        unsigned int has_endHeading : 1; 
        unsigned int has_startHeading : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_localityName : 1; 
        unsigned int read_locationName : 1; 
        unsigned int read_secondaryLocationName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _localityName;
    NSString * _locationName;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _secondaryLocationName;
    double  _startHeading;
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
