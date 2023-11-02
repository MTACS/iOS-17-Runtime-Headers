
@interface GEORPFeedbackRouteStep : PBCodable <NSCopying> {
    int  _directionsResponseWaypointIndex;
    struct { 
        unsigned int has_directionsResponseWaypointIndex : 1; 
        unsigned int has_routeLegIndex : 1; 
        unsigned int has_stepId : 1; 
        unsigned int read_routeStepImageId : 1; 
        unsigned int read_userPhotoId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _routeLegIndex;
    NSString * _routeStepImageId;
    unsigned int  _stepId;
    NSString * _userPhotoId;
}

@property (nonatomic) int directionsResponseWaypointIndex;
@property (nonatomic) bool hasDirectionsResponseWaypointIndex;
@property (nonatomic) bool hasRouteLegIndex;
@property (nonatomic, readonly) bool hasRouteStepImageId;
@property (nonatomic) bool hasStepId;
@property (nonatomic, readonly) bool hasUserPhotoId;
@property (nonatomic) int routeLegIndex;
@property (nonatomic, retain) NSString *routeStepImageId;
@property (nonatomic) unsigned int stepId;
@property (nonatomic, retain) NSString *userPhotoId;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)directionsResponseWaypointIndex;
- (bool)hasDirectionsResponseWaypointIndex;
- (bool)hasRouteLegIndex;
- (bool)hasRouteStepImageId;
- (bool)hasStepId;
- (bool)hasUserPhotoId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)routeLegIndex;
- (id)routeStepImageId;
- (void)setDirectionsResponseWaypointIndex:(int)arg1;
- (void)setHasDirectionsResponseWaypointIndex:(bool)arg1;
- (void)setHasRouteLegIndex:(bool)arg1;
- (void)setHasStepId:(bool)arg1;
- (void)setRouteLegIndex:(int)arg1;
- (void)setRouteStepImageId:(id)arg1;
- (void)setStepId:(unsigned int)arg1;
- (void)setUserPhotoId:(id)arg1;
- (unsigned int)stepId;
- (id)userPhotoId;
- (void)writeTo:(id)arg1;

@end
