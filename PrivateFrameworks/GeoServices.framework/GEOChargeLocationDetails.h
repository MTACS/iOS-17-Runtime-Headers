
@interface GEOChargeLocationDetails : PBCodable <NSCopying> {
    bool  _arrivedAtChargeLocation;
    struct { 
        unsigned int has_arrivedAtChargeLocation : 1; 
        unsigned int has_routePaused : 1; 
        unsigned int has_routeResumed : 1; 
    }  _flags;
    bool  _routePaused;
    bool  _routeResumed;
}

@property (nonatomic) bool arrivedAtChargeLocation;
@property (nonatomic) bool hasArrivedAtChargeLocation;
@property (nonatomic) bool hasRoutePaused;
@property (nonatomic) bool hasRouteResumed;
@property (nonatomic) bool routePaused;
@property (nonatomic) bool routeResumed;

+ (bool)isValid:(id)arg1;

- (bool)arrivedAtChargeLocation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArrivedAtChargeLocation;
- (bool)hasRoutePaused;
- (bool)hasRouteResumed;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (bool)routePaused;
- (bool)routeResumed;
- (void)setArrivedAtChargeLocation:(bool)arg1;
- (void)setHasArrivedAtChargeLocation:(bool)arg1;
- (void)setHasRoutePaused:(bool)arg1;
- (void)setHasRouteResumed:(bool)arg1;
- (void)setRoutePaused:(bool)arg1;
- (void)setRouteResumed:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
