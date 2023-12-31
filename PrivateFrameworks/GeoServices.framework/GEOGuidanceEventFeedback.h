
@interface GEOGuidanceEventFeedback : PBCodable <NSCopying> {
    float  _distanceToManeuver;
    float  _duration;
    unsigned int  _enrouteNoticeIndex;
    unsigned int  _eventIndex;
    struct { 
        unsigned int has_distanceToManeuver : 1; 
        unsigned int has_duration : 1; 
        unsigned int has_enrouteNoticeIndex : 1; 
        unsigned int has_eventIndex : 1; 
        unsigned int has_stepID : 1; 
        unsigned int has_timeToManeuver : 1; 
        unsigned int has_trafficSpeed : 1; 
        unsigned int has_vehicleSpeed : 1; 
        unsigned int read_junctionViewGuidanceFeedback : 1; 
        unsigned int read_routeID : 1; 
        unsigned int read_signGuidanceFeedback : 1; 
        unsigned int read_spokenGuidanceFeedback : 1; 
        unsigned int read_trafficCameraGuidanceFeedback : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOJunctionViewGuidanceFeedback * _junctionViewGuidanceFeedback;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSData * _routeID;
    GEOSignGuidanceFeedback * _signGuidanceFeedback;
    GEOSpokenGuidanceFeedback * _spokenGuidanceFeedback;
    unsigned int  _stepID;
    float  _timeToManeuver;
    GEOTrafficCameraInformation * _trafficCameraGuidanceFeedback;
    int  _trafficSpeed;
    float  _vehicleSpeed;
}

@property (nonatomic) float distanceToManeuver;
@property (nonatomic) float duration;
@property (nonatomic) unsigned int enrouteNoticeIndex;
@property (nonatomic) unsigned int eventIndex;
@property (nonatomic) bool hasDistanceToManeuver;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEnrouteNoticeIndex;
@property (nonatomic) bool hasEventIndex;
@property (nonatomic, readonly) bool hasJunctionViewGuidanceFeedback;
@property (nonatomic, readonly) bool hasRouteID;
@property (nonatomic, readonly) bool hasSignGuidanceFeedback;
@property (nonatomic, readonly) bool hasSpokenGuidanceFeedback;
@property (nonatomic) bool hasStepID;
@property (nonatomic) bool hasTimeToManeuver;
@property (nonatomic, readonly) bool hasTrafficCameraGuidanceFeedback;
@property (nonatomic) bool hasTrafficSpeed;
@property (nonatomic) bool hasVehicleSpeed;
@property (nonatomic, retain) GEOJunctionViewGuidanceFeedback *junctionViewGuidanceFeedback;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic, retain) GEOSignGuidanceFeedback *signGuidanceFeedback;
@property (nonatomic, retain) GEOSpokenGuidanceFeedback *spokenGuidanceFeedback;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) float timeToManeuver;
@property (nonatomic, retain) GEOTrafficCameraInformation *trafficCameraGuidanceFeedback;
@property (nonatomic) int trafficSpeed;
@property (nonatomic) float vehicleSpeed;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsTrafficSpeed:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)distanceToManeuver;
- (float)duration;
- (unsigned int)enrouteNoticeIndex;
- (unsigned int)eventIndex;
- (bool)hasDistanceToManeuver;
- (bool)hasDuration;
- (bool)hasEnrouteNoticeIndex;
- (bool)hasEventIndex;
- (bool)hasJunctionViewGuidanceFeedback;
- (bool)hasRouteID;
- (bool)hasSignGuidanceFeedback;
- (bool)hasSpokenGuidanceFeedback;
- (bool)hasStepID;
- (bool)hasTimeToManeuver;
- (bool)hasTrafficCameraGuidanceFeedback;
- (bool)hasTrafficSpeed;
- (bool)hasVehicleSpeed;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)junctionViewGuidanceFeedback;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeID;
- (void)setDistanceToManeuver:(float)arg1;
- (void)setDuration:(float)arg1;
- (void)setEnrouteNoticeIndex:(unsigned int)arg1;
- (void)setEventIndex:(unsigned int)arg1;
- (void)setHasDistanceToManeuver:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEnrouteNoticeIndex:(bool)arg1;
- (void)setHasEventIndex:(bool)arg1;
- (void)setHasStepID:(bool)arg1;
- (void)setHasTimeToManeuver:(bool)arg1;
- (void)setHasTrafficSpeed:(bool)arg1;
- (void)setHasVehicleSpeed:(bool)arg1;
- (void)setJunctionViewGuidanceFeedback:(id)arg1;
- (void)setRouteID:(id)arg1;
- (void)setSignGuidanceFeedback:(id)arg1;
- (void)setSpokenGuidanceFeedback:(id)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setTimeToManeuver:(float)arg1;
- (void)setTrafficCameraGuidanceFeedback:(id)arg1;
- (void)setTrafficSpeed:(int)arg1;
- (void)setVehicleSpeed:(float)arg1;
- (id)signGuidanceFeedback;
- (id)spokenGuidanceFeedback;
- (unsigned int)stepID;
- (float)timeToManeuver;
- (id)trafficCameraGuidanceFeedback;
- (int)trafficSpeed;
- (id)trafficSpeedAsString:(int)arg1;
- (float)vehicleSpeed;
- (void)writeTo:(id)arg1;

@end
