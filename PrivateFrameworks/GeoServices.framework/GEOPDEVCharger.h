
@interface GEOPDEVCharger : PBCodable <NSCopying> {
    GEOPDAvailabilityInfo * _aggregatedAvailabilityInfo;
    struct { 
        unsigned int has_ttlSeconds : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_aggregatedAvailabilityInfo : 1; 
        unsigned int read_plugs : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _plugs;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned long long  _ttlSeconds;
    PBUnknownFields * _unknownFields;
}

+ (id)evChargerFromPlaceData:(id)arg1;

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
