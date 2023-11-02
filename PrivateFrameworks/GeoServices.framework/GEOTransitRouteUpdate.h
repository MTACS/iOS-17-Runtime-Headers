
@interface GEOTransitRouteUpdate : PBCodable <NSCopying> {
    NSMutableArray * _alerts;
    GEOTransitRouteDisplayStrings * _displayStrings;
    struct { 
        unsigned int has_status : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_alerts : 1; 
        unsigned int read_displayStrings : 1; 
        unsigned int read_routeIdentifier : 1; 
        unsigned int read_stepUpdates : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOTransitRouteIdentifier * _routeIdentifier;
    int  _status;
    NSMutableArray * _stepUpdates;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *alerts;
@property (nonatomic, retain) GEOTransitRouteDisplayStrings *displayStrings;
@property (nonatomic, readonly) bool hasDisplayStrings;
@property (nonatomic, readonly) bool hasRouteIdentifier;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) GEOTransitRouteIdentifier *routeIdentifier;
@property (nonatomic) int status;
@property (nonatomic, retain) NSMutableArray *stepUpdates;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)alertType;
+ (bool)isValid:(id)arg1;
+ (Class)stepUpdateType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (id)_logDescription;
- (void)addAlert:(id)arg1;
- (void)addStepUpdate:(id)arg1;
- (id)alertAtIndex:(unsigned long long)arg1;
- (id)alerts;
- (unsigned long long)alertsCount;
- (void)clearAlerts;
- (void)clearStepUpdates;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayStrings;
- (bool)hasDisplayStrings;
- (bool)hasRouteIdentifier;
- (bool)hasStatus;
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
- (id)routeIdentifier;
- (void)setAlerts:(id)arg1;
- (void)setDisplayStrings:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setRouteIdentifier:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setStepUpdates:(id)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)stepUpdateAtIndex:(unsigned long long)arg1;
- (id)stepUpdates;
- (unsigned long long)stepUpdatesCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
