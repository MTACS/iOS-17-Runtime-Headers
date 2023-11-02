
@interface GEOVehicleSpecifications : PBCodable <NSCopying> {
    GEOEVInfo * _evInfo;
    struct { 
        unsigned int has_lprPlateMissingReason : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_evInfo : 1; 
        unsigned int read_lprInfo : 1; 
        unsigned int read_vehicleInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLPRInfo * _lprInfo;
    int  _lprPlateMissingReason;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    GEOVehicleInfo * _vehicleInfo;
}

@property (nonatomic, retain) GEOEVInfo *evInfo;
@property (nonatomic, readonly) bool hasEvInfo;
@property (nonatomic, readonly) bool hasLprInfo;
@property (nonatomic) bool hasLprPlateMissingReason;
@property (nonatomic, readonly) bool hasVehicleInfo;
@property (nonatomic, retain) GEOLPRInfo *lprInfo;
@property (nonatomic) int lprPlateMissingReason;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOVehicleInfo *vehicleInfo;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsLprPlateMissingReason:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)evInfo;
- (bool)hasEvInfo;
- (bool)hasLprInfo;
- (bool)hasLprPlateMissingReason;
- (bool)hasVehicleInfo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)lprInfo;
- (int)lprPlateMissingReason;
- (id)lprPlateMissingReasonAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEvInfo:(id)arg1;
- (void)setHasLprPlateMissingReason:(bool)arg1;
- (void)setLprInfo:(id)arg1;
- (void)setLprPlateMissingReason:(int)arg1;
- (void)setVehicleInfo:(id)arg1;
- (id)unknownFields;
- (id)vehicleInfo;
- (void)writeTo:(id)arg1;

@end
