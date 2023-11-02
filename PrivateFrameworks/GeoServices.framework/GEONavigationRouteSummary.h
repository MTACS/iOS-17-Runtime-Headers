
@interface GEONavigationRouteSummary : PBCodable <NSCopying> {
    GEOComposedWaypoint * _destination;
    NSString * _destinationName;
    struct { 
        unsigned int has_travelTime : 1; 
        unsigned int has_transportType : 1; 
        unsigned int read_destinationName : 1; 
        unsigned int read_destination : 1; 
        unsigned int read_nextDestinationName : 1; 
        unsigned int read_origin : 1; 
        unsigned int read_waypoints : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _nextDestinationName;
    GEOComposedWaypoint * _origin;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _transportType;
    double  _travelTime;
    NSMutableArray * _waypoints;
}

@property (nonatomic, retain) GEOComposedWaypoint *destination;
@property (nonatomic, retain) NSString *destinationName;
@property (nonatomic, readonly) bool hasDestination;
@property (nonatomic, readonly) bool hasDestinationName;
@property (nonatomic, readonly) bool hasNextDestinationName;
@property (nonatomic, readonly) bool hasOrigin;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) bool hasTravelTime;
@property (nonatomic, retain) NSString *nextDestinationName;
@property (nonatomic, retain) GEOComposedWaypoint *origin;
@property (nonatomic) int transportType;
@property (nonatomic) double travelTime;
@property (nonatomic, retain) NSMutableArray *waypoints;

+ (bool)isValid:(id)arg1;
+ (Class)waypointsType;

- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (void)addWaypoints:(id)arg1;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearWaypoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destination;
- (id)destinationName;
- (id)dictionaryRepresentation;
- (bool)hasDestination;
- (bool)hasDestinationName;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasNextDestinationName;
- (bool)hasOrigin;
- (bool)hasTransportType;
- (bool)hasTravelTime;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)nextDestinationName;
- (id)origin;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHasTravelTime:(bool)arg1;
- (void)setNextDestinationName:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setTravelTime:(double)arg1;
- (void)setWaypoints:(id)arg1;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (double)travelTime;
- (void)updateRoute:(id)arg1 destinationName:(id)arg2;
- (id)waypoints;
- (id)waypointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointsCount;
- (void)writeTo:(id)arg1;

@end
