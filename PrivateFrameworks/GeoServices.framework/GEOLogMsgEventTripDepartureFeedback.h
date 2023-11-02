
@interface GEOLogMsgEventTripDepartureFeedback : PBCodable <NSCopying> {
    double  _distanceFromOrigin;
    struct { 
        unsigned int has_distanceFromOrigin : 1; 
        unsigned int has_timeFromOrigin : 1; 
        unsigned int has_transportMode : 1; 
    }  _flags;
    double  _timeFromOrigin;
    int  _transportMode;
}

@property (nonatomic) double distanceFromOrigin;
@property (nonatomic) bool hasDistanceFromOrigin;
@property (nonatomic) bool hasTimeFromOrigin;
@property (nonatomic) bool hasTransportMode;
@property (nonatomic) double timeFromOrigin;
@property (nonatomic) int transportMode;

+ (bool)isValid:(id)arg1;

- (int)StringAsTransportMode:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)distanceFromOrigin;
- (bool)hasDistanceFromOrigin;
- (bool)hasTimeFromOrigin;
- (bool)hasTransportMode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDistanceFromOrigin:(double)arg1;
- (void)setHasDistanceFromOrigin:(bool)arg1;
- (void)setHasTimeFromOrigin:(bool)arg1;
- (void)setHasTransportMode:(bool)arg1;
- (void)setTimeFromOrigin:(double)arg1;
- (void)setTransportMode:(int)arg1;
- (double)timeFromOrigin;
- (int)transportMode;
- (id)transportModeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
