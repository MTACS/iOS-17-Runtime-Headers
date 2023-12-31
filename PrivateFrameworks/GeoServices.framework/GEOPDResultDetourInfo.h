
@interface GEOPDResultDetourInfo : PBCodable <NSCopying> {
    int  _detourDistance;
    int  _detourTime;
    unsigned int  _distanceToPlace;
    struct { 
        unsigned int has_detourDistance : 1; 
        unsigned int has_detourTime : 1; 
        unsigned int has_distanceToPlace : 1; 
        unsigned int has_timeToPlace : 1; 
    }  _flags;
    unsigned int  _timeToPlace;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int detourDistance;
@property (nonatomic) int detourTime;
@property (nonatomic) unsigned int distanceToPlace;
@property (nonatomic) bool hasDetourDistance;
@property (nonatomic) bool hasDetourTime;
@property (nonatomic) bool hasDistanceToPlace;
@property (nonatomic) bool hasTimeToPlace;
@property (nonatomic) unsigned int timeToPlace;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)detourDistance;
- (int)detourTime;
- (id)dictionaryRepresentation;
- (unsigned int)distanceToPlace;
- (bool)hasDetourDistance;
- (bool)hasDetourTime;
- (bool)hasDistanceToPlace;
- (bool)hasTimeToPlace;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDetourDistance:(int)arg1;
- (void)setDetourTime:(int)arg1;
- (void)setDistanceToPlace:(unsigned int)arg1;
- (void)setHasDetourDistance:(bool)arg1;
- (void)setHasDetourTime:(bool)arg1;
- (void)setHasDistanceToPlace:(bool)arg1;
- (void)setHasTimeToPlace:(bool)arg1;
- (void)setTimeToPlace:(unsigned int)arg1;
- (unsigned int)timeToPlace;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
