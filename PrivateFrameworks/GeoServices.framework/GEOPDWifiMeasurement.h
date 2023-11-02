
@interface GEOPDWifiMeasurement : PBCodable <NSCopying> {
    unsigned long long  _entryTime;
    unsigned long long  _exitTime;
    struct { 
        unsigned int has_entryTime : 1; 
        unsigned int has_exitTime : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_locations : 1; 
        unsigned int read_wifiAccessPoints : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _locations;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _wifiAccessPoints;
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
