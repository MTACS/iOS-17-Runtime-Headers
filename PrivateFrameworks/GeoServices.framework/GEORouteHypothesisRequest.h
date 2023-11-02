
@interface GEORouteHypothesisRequest : PBCodable <NSCopying> {
    double  _arrivalDate;
    GEOMapItemStorage * _destinationLocation;
    double  _expirationDate;
    struct { 
        unsigned int has_arrivalDate : 1; 
        unsigned int has_expirationDate : 1; 
        unsigned int has_transportType : 1; 
    }  _flags;
    int  _transportType;
}

@property (nonatomic) double arrivalDate;
@property (nonatomic, retain) GEOMapItemStorage *destinationLocation;
@property (nonatomic) double expirationDate;
@property (nonatomic) bool hasArrivalDate;
@property (nonatomic, readonly) bool hasDestinationLocation;
@property (nonatomic) bool hasExpirationDate;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) int transportType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (double)arrivalDate;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationLocation;
- (id)dictionaryRepresentation;
- (double)expirationDate;
- (bool)hasArrivalDate;
- (bool)hasDestinationLocation;
- (bool)hasExpirationDate;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasTransportType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArrivalDate:(double)arg1;
- (void)setDestinationLocation:(id)arg1;
- (void)setExpirationDate:(double)arg1;
- (void)setHasArrivalDate:(bool)arg1;
- (void)setHasExpirationDate:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setTransportType:(int)arg1;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
