
@interface GEOETATrafficUpdateWaypointRoute : PBCodable <NSCopying> {
    struct { 
        unsigned int has_identifier : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_incidentsOnUserWaypointRoutes : 1; 
        unsigned int read_navigabilityInfo : 1; 
        unsigned int read_newWaypointRoutes : 1; 
        unsigned int read_routeLegs : 1; 
        unsigned int read_trafficBannerTexts : 1; 
        unsigned int read_traversalTimes : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _identifier;
    NSMutableArray * _incidentsOnUserWaypointRoutes;
    GEONavigabilityInfo * _navigabilityInfo;
    NSMutableArray * _newWaypointRoutes;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _routeLegs;
    NSMutableArray * _trafficBannerTexts;
    GEOTraversalTimes * _traversalTimes;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIdentifier;
@property (nonatomic, readonly) bool hasNavigabilityInfo;
@property (nonatomic, readonly) bool hasTraversalTimes;
@property (nonatomic) unsigned int identifier;
@property (nonatomic, retain) NSMutableArray *incidentsOnUserWaypointRoutes;
@property (nonatomic, retain) GEONavigabilityInfo *navigabilityInfo;
@property (nonatomic, retain) NSMutableArray *newWaypointRoutes;
@property (nonatomic, retain) NSMutableArray *routeLegs;
@property (nonatomic, retain) NSMutableArray *trafficBannerTexts;
@property (nonatomic, retain) GEOTraversalTimes *traversalTimes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)incidentsOnUserWaypointRouteType;
+ (bool)isValid:(id)arg1;
+ (Class)newWaypointRoutesType;
+ (Class)routeLegType;
+ (Class)trafficBannerTextType;

- (void).cxx_destruct;
- (void)addIncidentsOnUserWaypointRoute:(id)arg1;
- (void)addNewWaypointRoutes:(id)arg1;
- (void)addRouteLeg:(id)arg1;
- (void)addTrafficBannerText:(id)arg1;
- (void)clearIncidentsOnUserWaypointRoutes;
- (void)clearNewWaypointRoutes;
- (void)clearRouteLegs;
- (void)clearTrafficBannerTexts;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIdentifier;
- (bool)hasNavigabilityInfo;
- (bool)hasTraversalTimes;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (id)incidentsOnUserWaypointRouteAtIndex:(unsigned long long)arg1;
- (id)incidentsOnUserWaypointRoutes;
- (unsigned long long)incidentsOnUserWaypointRoutesCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)navigabilityInfo;
- (id)newWaypointRoutes;
- (id)newWaypointRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)newWaypointRoutesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeLegAtIndex:(unsigned long long)arg1;
- (id)routeLegs;
- (unsigned long long)routeLegsCount;
- (void)setHasIdentifier:(bool)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setIncidentsOnUserWaypointRoutes:(id)arg1;
- (void)setNavigabilityInfo:(id)arg1;
- (void)setNewWaypointRoutes:(id)arg1;
- (void)setRouteLegs:(id)arg1;
- (void)setTrafficBannerTexts:(id)arg1;
- (void)setTraversalTimes:(id)arg1;
- (id)trafficBannerTextAtIndex:(unsigned long long)arg1;
- (id)trafficBannerTexts;
- (unsigned long long)trafficBannerTextsCount;
- (id)traversalTimes;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
