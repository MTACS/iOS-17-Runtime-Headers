
@interface GEOPDSearchQueryGeoNormalizerMetadata : PBCodable <NSCopying> {
    struct { 
        unsigned int read_normalizers : 1; 
        unsigned int read_floor : 1; 
        unsigned int read_mailStop : 1; 
        unsigned int read_poPox : 1; 
        unsigned int read_unitNumber : 1; 
        unsigned int read_unitTypeId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _floor;
    NSString * _mailStop;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _normalizers;
    NSString * _poPox;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _unitNumber;
    NSString * _unitTypeId;
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
