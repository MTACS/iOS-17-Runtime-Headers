
@interface GEOStorageRouteRequestStorage : PBCodable <MSPRouteInformationSource, NSCopying> {
    GEOAutomobileOptions * _automobileOptions;
    GEOCyclingOptions * _cyclingOptions;
    struct { 
        unsigned int has_transportType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_automobileOptions : 1; 
        unsigned int read_cyclingOptions : 1; 
        unsigned int read_resumeRouteHandleStorage : 1; 
        unsigned int read_routeHandle : 1; 
        unsigned int read_transitOptions : 1; 
        unsigned int read_walkingOptions : 1; 
        unsigned int read_waypoints : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOStorageResumeRouteHandle * _resumeRouteHandleStorage;
    GEOURLRouteHandle * _routeHandle;
    GEOTransitOptions * _transitOptions;
    int  _transportType;
    PBUnknownFields * _unknownFields;
    GEOWalkingOptions * _walkingOptions;
    NSMutableArray * _waypoints;
}

@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (nonatomic, retain) GEOCyclingOptions *cyclingOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAutomobileOptions;
@property (nonatomic, readonly) bool hasCyclingOptions;
@property (nonatomic, readonly) bool hasResumeRouteHandleStorage;
@property (nonatomic, readonly) bool hasRouteHandle;
@property (nonatomic, readonly) bool hasTransitOptions;
@property (nonatomic) bool hasTransportType;
@property (nonatomic, readonly) bool hasWalkingOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOStorageResumeRouteHandle *resumeRouteHandleStorage;
@property (nonatomic, retain) GEOURLRouteHandle *routeHandle;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEOTransitOptions *transitOptions;
@property (nonatomic) int transportType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOWalkingOptions *walkingOptions;
@property (nonatomic, retain) NSMutableArray *waypoints;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)isValid:(id)arg1;
+ (Class)waypointsType;

- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (void)addWaypoints:(id)arg1;
- (id)automobileOptions;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearWaypoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cyclingOptions;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutomobileOptions;
- (bool)hasCyclingOptions;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasResumeRouteHandleStorage;
- (bool)hasRouteHandle;
- (bool)hasTransitOptions;
- (bool)hasTransportType;
- (bool)hasWalkingOptions;
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
- (id)resumeRouteHandleStorage;
- (id)routeHandle;
- (void)setAutomobileOptions:(id)arg1;
- (void)setCyclingOptions:(id)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setResumeRouteHandleStorage:(id)arg1;
- (void)setRouteHandle:(id)arg1;
- (void)setTransitOptions:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setWalkingOptions:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (id)transitOptions;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (id)unknownFields;
- (id)walkingOptions;
- (id)waypoints;
- (id)waypointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointsCount;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

- (id)ifGEOStorageRouteRequestStorage;
- (id)ifRidesharingInformationSource;

@end
