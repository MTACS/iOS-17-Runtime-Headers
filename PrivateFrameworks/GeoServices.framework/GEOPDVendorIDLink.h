
@interface GEOPDVendorIDLink : PBCodable <NSCopying> {
    NSString * _externalItemId;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_reservationTypes : 1; 
        unsigned int read_externalItemId : 1; 
        unsigned int read_vendorId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
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
    }  _reservationTypes;
    PBUnknownFields * _unknownFields;
    NSString * _vendorId;
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
