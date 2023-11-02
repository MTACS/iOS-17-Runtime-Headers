
@interface GEOTransitEnterExitInfo : PBCodable <NSCopying> {
    unsigned int  _accessPointIndex;
    bool  _displayStop;
    struct { 
        unsigned int has_accessPointIndex : 1; 
        unsigned int has_stopIndex : 1; 
        unsigned int has_transferTime : 1; 
        unsigned int has_displayStop : 1; 
        unsigned int has_uncertainArrival : 1; 
    }  _flags;
    unsigned int  _stopIndex;
    unsigned int  _transferTime;
    bool  _uncertainArrival;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int accessPointIndex;
@property (nonatomic) bool displayStop;
@property (nonatomic) bool hasAccessPointIndex;
@property (nonatomic) bool hasDisplayStop;
@property (nonatomic) bool hasStopIndex;
@property (nonatomic) bool hasTransferTime;
@property (nonatomic) bool hasUncertainArrival;
@property (nonatomic) unsigned int stopIndex;
@property (nonatomic) unsigned int transferTime;
@property (nonatomic) bool uncertainArrival;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)accessPointIndex;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)displayStop;
- (bool)hasAccessPointIndex;
- (bool)hasDisplayStop;
- (bool)hasStopIndex;
- (bool)hasTransferTime;
- (bool)hasUncertainArrival;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessPointIndex:(unsigned int)arg1;
- (void)setDisplayStop:(bool)arg1;
- (void)setHasAccessPointIndex:(bool)arg1;
- (void)setHasDisplayStop:(bool)arg1;
- (void)setHasStopIndex:(bool)arg1;
- (void)setHasTransferTime:(bool)arg1;
- (void)setHasUncertainArrival:(bool)arg1;
- (void)setStopIndex:(unsigned int)arg1;
- (void)setTransferTime:(unsigned int)arg1;
- (void)setUncertainArrival:(bool)arg1;
- (unsigned int)stopIndex;
- (unsigned int)transferTime;
- (bool)uncertainArrival;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
