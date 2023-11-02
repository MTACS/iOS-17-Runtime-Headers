
@interface GEORPUserLocationDetails : PBCodable <NSCopying> {
    GEORPTimestamp * _currentTime;
    GEOLocation * _currentUserLocation;
    NSMutableArray * _deviceHistoricalLocations;
    struct { 
        unsigned int read_currentTime : 1; 
        unsigned int read_currentUserLocation : 1; 
        unsigned int read_deviceHistoricalLocations : 1; 
        unsigned int read_lastKnownRoadLocation : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLocation * _lastKnownRoadLocation;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEORPTimestamp *currentTime;
@property (nonatomic, retain) GEOLocation *currentUserLocation;
@property (nonatomic, retain) NSMutableArray *deviceHistoricalLocations;
@property (nonatomic, readonly) bool hasCurrentTime;
@property (nonatomic, readonly) bool hasCurrentUserLocation;
@property (nonatomic, readonly) bool hasLastKnownRoadLocation;
@property (nonatomic, retain) GEOLocation *lastKnownRoadLocation;

+ (Class)deviceHistoricalLocationType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addDeviceHistoricalLocation:(id)arg1;
- (void)clearDeviceHistoricalLocations;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentTime;
- (id)currentUserLocation;
- (id)description;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1;
- (id)deviceHistoricalLocations;
- (unsigned long long)deviceHistoricalLocationsCount;
- (id)dictionaryRepresentation;
- (bool)hasCurrentTime;
- (bool)hasCurrentUserLocation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLastKnownRoadLocation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)lastKnownRoadLocation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCurrentTime:(id)arg1;
- (void)setCurrentUserLocation:(id)arg1;
- (void)setDeviceHistoricalLocations:(id)arg1;
- (void)setLastKnownRoadLocation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
