
@interface GEOCompanionWaypoint : PBCodable <NSCopying> {
    NSString * _findMyHandleID;
    struct { 
        unsigned int has_isCurrentLocation : 1; 
        unsigned int read_findMyHandleID : 1; 
        unsigned int read_mapItem : 1; 
        unsigned int read_searchString : 1; 
        unsigned int read_waypointTyped : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isCurrentLocation;
    GEOMapItemStorage * _mapItem;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _searchString;
    GEOWaypointTyped * _waypointTyped;
}

@property (nonatomic, retain) NSString *findMyHandleID;
@property (nonatomic, readonly) bool hasFindMyHandleID;
@property (nonatomic) bool hasIsCurrentLocation;
@property (nonatomic, readonly) bool hasMapItem;
@property (nonatomic, readonly) bool hasSearchString;
@property (nonatomic, readonly) bool hasWaypointTyped;
@property (nonatomic) bool isCurrentLocation;
@property (nonatomic, readonly) GEOLocation *location;
@property (nonatomic, retain) GEOMapItemStorage *mapItem;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, retain) GEOWaypointTyped *waypointTyped;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)findMyHandleID;
- (bool)hasFindMyHandleID;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIsCurrentLocation;
- (bool)hasMapItem;
- (bool)hasSearchString;
- (bool)hasWaypointTyped;
- (unsigned long long)hash;
- (id)init;
- (id)initWithComposedWaypoint:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isCurrentLocation;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)location;
- (id)mapItem;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)searchString;
- (void)setFindMyHandleID:(id)arg1;
- (void)setHasIsCurrentLocation:(bool)arg1;
- (void)setIsCurrentLocation:(bool)arg1;
- (void)setMapItem:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setWaypointTyped:(id)arg1;
- (id)waypointTyped;
- (void)writeTo:(id)arg1;

@end
