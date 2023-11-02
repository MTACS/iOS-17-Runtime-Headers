
@interface GEOTransitEntry : PBCodable <NSCopying> {
    struct { 
        unsigned int has_lineMuid : 1; 
        unsigned int has_tripMuid : 1; 
        unsigned int has_tripStaticDepartureTime : 1; 
        unsigned int has_windowStartTime : 1; 
    }  _flags;
    unsigned long long  _lineMuid;
    NSData * _routingParameters;
    unsigned long long  _tripMuid;
    unsigned int  _tripStaticDepartureTime;
    PBUnknownFields * _unknownFields;
    unsigned int  _windowStartTime;
}

@property (nonatomic) bool hasLineMuid;
@property (nonatomic, readonly) bool hasRoutingParameters;
@property (nonatomic) bool hasTripMuid;
@property (nonatomic) bool hasTripStaticDepartureTime;
@property (nonatomic) bool hasWindowStartTime;
@property (nonatomic) unsigned long long lineMuid;
@property (nonatomic, retain) NSData *routingParameters;
@property (nonatomic) unsigned long long tripMuid;
@property (nonatomic) unsigned int tripStaticDepartureTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int windowStartTime;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLineMuid;
- (bool)hasRoutingParameters;
- (bool)hasTripMuid;
- (bool)hasTripStaticDepartureTime;
- (bool)hasWindowStartTime;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned long long)lineMuid;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routingParameters;
- (void)setHasLineMuid:(bool)arg1;
- (void)setHasTripMuid:(bool)arg1;
- (void)setHasTripStaticDepartureTime:(bool)arg1;
- (void)setHasWindowStartTime:(bool)arg1;
- (void)setLineMuid:(unsigned long long)arg1;
- (void)setRoutingParameters:(id)arg1;
- (void)setTripMuid:(unsigned long long)arg1;
- (void)setTripStaticDepartureTime:(unsigned int)arg1;
- (void)setWindowStartTime:(unsigned int)arg1;
- (unsigned long long)tripMuid;
- (unsigned int)tripStaticDepartureTime;
- (id)unknownFields;
- (unsigned int)windowStartTime;
- (void)writeTo:(id)arg1;

@end
