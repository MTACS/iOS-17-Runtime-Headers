
@interface GEOLogMsgStateRoutingWaypoints : PBCodable <NSCopying> {
    unsigned int  _finalWaypointId;
    struct { 
        unsigned int has_finalWaypointId : 1; 
        unsigned int has_originalNumberOfStops : 1; 
        unsigned int has_originalWaypointId : 1; 
    }  _flags;
    unsigned int  _originalNumberOfStops;
    unsigned int  _originalWaypointId;
}

@property (nonatomic) unsigned int finalWaypointId;
@property (nonatomic) bool hasFinalWaypointId;
@property (nonatomic) bool hasOriginalNumberOfStops;
@property (nonatomic) bool hasOriginalWaypointId;
@property (nonatomic) unsigned int originalNumberOfStops;
@property (nonatomic) unsigned int originalWaypointId;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)finalWaypointId;
- (bool)hasFinalWaypointId;
- (bool)hasOriginalNumberOfStops;
- (bool)hasOriginalWaypointId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)originalNumberOfStops;
- (unsigned int)originalWaypointId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFinalWaypointId:(unsigned int)arg1;
- (void)setHasFinalWaypointId:(bool)arg1;
- (void)setHasOriginalNumberOfStops:(bool)arg1;
- (void)setHasOriginalWaypointId:(bool)arg1;
- (void)setOriginalNumberOfStops:(unsigned int)arg1;
- (void)setOriginalWaypointId:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
