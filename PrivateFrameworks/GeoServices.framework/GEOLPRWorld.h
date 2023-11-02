
@interface GEOLPRWorld : PBCodable <NSCopying> {
    struct { 
        unsigned int read_powerTypes : 1; 
        unsigned int read_regions : 1; 
        unsigned int read_vehicleTypes : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _powerTypes;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _regions;
    NSMutableArray * _vehicleTypes;
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
